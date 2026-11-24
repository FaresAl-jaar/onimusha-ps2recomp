#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209E60
// Address: 0x209e60 - 0x209f1c
void sub_00209E60_0x209e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209E60_0x209e60");
#endif

    switch (ctx->pc) {
        case 0x209eacu: goto label_209eac;
        case 0x209ed4u: goto label_209ed4;
        case 0x209ee0u: goto label_209ee0;
        case 0x209ef0u: goto label_209ef0;
        default: break;
    }

    ctx->pc = 0x209e60u;

    // 0x209e60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x209e64: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x209e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x209e68: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x209e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e6c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x209e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x209e70: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x209e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e74: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x209e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x209e78: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x209e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e7c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x209e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x209e80: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x209e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e84: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x209e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x209e88: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x209e88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e8c: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x209e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x209e90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e94: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x209e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x209e98: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x209e98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e9c: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x209e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x209ea0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x209ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x209ea4: 0xc0821f0  jal         func_2087C0
    ctx->pc = 0x209EA4u;
    SET_GPR_U32(ctx, 31, 0x209EACu);
    ctx->pc = 0x209EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EA4u;
    // 0x209ea8: 0x8c9000a8  lw          $s0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2087C0u, 0x209EA4u, 0x209EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EACu;
label_209eac:
    // 0x209eac: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x209eb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x209eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209eb4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x209eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209eb8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x209eb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ebc: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x209ebcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ec0: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x209ec0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ec4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x209ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ec8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ecc: 0xc089780  jal         func_225E00
    ctx->pc = 0x209ECCu;
    SET_GPR_U32(ctx, 31, 0x209ED4u);
    ctx->pc = 0x209ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209ECCu;
    // 0x209ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E00u, 0x209ECCu, 0x209ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209ED4u;
label_209ed4:
    // 0x209ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ed8: 0xc0895ee  jal         func_2257B8
    ctx->pc = 0x209ED8u;
    SET_GPR_U32(ctx, 31, 0x209EE0u);
    ctx->pc = 0x209EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209ED8u;
    // 0x209edc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257B8u, 0x209ED8u, 0x209EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EE0u;
label_209ee0:
    // 0x209ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ee4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x209ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ee8: 0xc089600  jal         func_225800
    ctx->pc = 0x209EE8u;
    SET_GPR_U32(ctx, 31, 0x209EF0u);
    ctx->pc = 0x209EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EE8u;
    // 0x209eec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225800u, 0x209EE8u, 0x209EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EF0u;
label_209ef0:
    // 0x209ef0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x209ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x209ef4: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x209ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x209ef8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x209ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x209efc: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x209efcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x209f00: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x209f00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x209f04: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x209f04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x209f08: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x209f08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x209f0c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x209f0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x209f10: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x209f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x209f14: 0x3e00008  jr          $ra
    ctx->pc = 0x209F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F14u;
        // 0x209f18: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F1Cu;
}
