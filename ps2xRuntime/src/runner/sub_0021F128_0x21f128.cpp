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

// Function: sub_0021F128
// Address: 0x21f128 - 0x21f1c8
void sub_0021F128_0x21f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F128_0x21f128");
#endif

    switch (ctx->pc) {
        case 0x21f15cu: goto label_21f15c;
        case 0x21f174u: goto label_21f174;
        case 0x21f188u: goto label_21f188;
        case 0x21f1a8u: goto label_21f1a8;
        default: break;
    }

    ctx->pc = 0x21f128u;

    // 0x21f128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f12c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21f12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f130: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21f134: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21f134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f138: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21f13c: 0x245036b0  addiu       $s0, $v0, 0x36B0
    ctx->pc = 0x21f13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x21f140: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21f144: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21f144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f148: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21f14c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21f14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f150: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21f154: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F154u;
    SET_GPR_U32(ctx, 31, 0x21F15Cu);
    ctx->pc = 0x21F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F154u;
    // 0x21f158: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F154u, 0x21F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F15Cu;
label_21f15c:
    // 0x21f15c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21f15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f160: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F160u;
    {
        const bool branch_taken_0x21f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F160u;
        // 0x21f164: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f160) {
            ctx->pc = 0x21F180u;
            goto label_21f180;
        }
    }
    ctx->pc = 0x21F168u;
    // 0x21f168: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f16c: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21F16Cu;
    SET_GPR_U32(ctx, 31, 0x21F174u);
    ctx->pc = 0x21F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F16Cu;
    // 0x21f170: 0x34a50156  ori         $a1, $a1, 0x156 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21F16Cu, 0x21F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F174u;
label_21f174:
    // 0x21f174: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21F174u;
    {
        const bool branch_taken_0x21f174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F174u;
        // 0x21f178: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f174) {
            ctx->pc = 0x21F1B0u;
            goto label_21f1b0;
        }
    }
    ctx->pc = 0x21F17Cu;
    // 0x21f17c: 0x0  nop
    ctx->pc = 0x21f17cu;
    // NOP
label_21f180:
    // 0x21f180: 0xc087c2e  jal         func_21F0B8
    ctx->pc = 0x21F180u;
    SET_GPR_U32(ctx, 31, 0x21F188u);
    ctx->pc = 0x21F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F180u;
    // 0x21f184: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F0B8u, 0x21F180u, 0x21F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F188u;
label_21f188:
    // 0x21f188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f18c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f190: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21f190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f194: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21f194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f198: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F198u;
    {
        const bool branch_taken_0x21f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F198u;
        // 0x21f19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f198) {
            ctx->pc = 0x21F1ACu;
            goto label_21f1ac;
        }
    }
    ctx->pc = 0x21F1A0u;
    // 0x21f1a0: 0xc087c72  jal         func_21F1C8
    ctx->pc = 0x21F1A0u;
    SET_GPR_U32(ctx, 31, 0x21F1A8u);
    ctx->pc = 0x21F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1A0u;
    // 0x21f1a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F1C8u, 0x21F1A0u, 0x21F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1A8u;
label_21f1a8:
    // 0x21f1a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f1ac:
    // 0x21f1ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21f1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f1b0:
    // 0x21f1b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21f1b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f1b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21f1b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f1b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21f1b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f1bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1C0u;
        // 0x21f1c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F1C8u;
}
