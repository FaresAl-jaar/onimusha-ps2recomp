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

// Function: sub_00253EB0
// Address: 0x253eb0 - 0x253f24
void sub_00253EB0_0x253eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253EB0_0x253eb0");
#endif

    switch (ctx->pc) {
        case 0x253ed0u: goto label_253ed0;
        case 0x253ed8u: goto label_253ed8;
        case 0x253ee0u: goto label_253ee0;
        case 0x253ee8u: goto label_253ee8;
        case 0x253f10u: goto label_253f10;
        default: break;
    }

    ctx->pc = 0x253eb0u;

    // 0x253eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ec4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x253ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ec8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x253EC8u;
    SET_GPR_U32(ctx, 31, 0x253ED0u);
    ctx->pc = 0x253ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EC8u;
    // 0x253ecc: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x253EC8u, 0x253ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ED0u;
label_253ed0:
    // 0x253ed0: 0xc0951c0  jal         func_254700
    ctx->pc = 0x253ED0u;
    SET_GPR_U32(ctx, 31, 0x253ED8u);
    ctx->pc = 0x253ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253ED0u;
    // 0x253ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x253ED0u, 0x253ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ED8u;
label_253ed8:
    // 0x253ed8: 0xc0951d8  jal         func_254760
    ctx->pc = 0x253ED8u;
    SET_GPR_U32(ctx, 31, 0x253EE0u);
    ctx->pc = 0x253EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253ED8u;
    // 0x253edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x253ED8u, 0x253EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EE0u;
label_253ee0:
    // 0x253ee0: 0xc0a46c4  jal         func_291B10
    ctx->pc = 0x253EE0u;
    SET_GPR_U32(ctx, 31, 0x253EE8u);
    ctx->pc = 0x291B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291B10u, 0x253EE0u, 0x253EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EE8u;
label_253ee8:
    // 0x253ee8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253EE8u;
    {
        const bool branch_taken_0x253ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EE8u;
        // 0x253eec: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ee8) {
            ctx->pc = 0x253F10u;
            goto label_253f10;
        }
    }
    ctx->pc = 0x253EF0u;
    // 0x253ef0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x253ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x253ef4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x253ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x253ef8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x253ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x253efc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x253efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253f00: 0x24840e70  addiu       $a0, $a0, 0xE70
    ctx->pc = 0x253f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    // 0x253f04: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x253f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x253f08: 0xc0ca6ac  jal         func_329AB0
    ctx->pc = 0x253F08u;
    SET_GPR_U32(ctx, 31, 0x253F10u);
    ctx->pc = 0x253F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F08u;
    // 0x253f0c: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329AB0u, 0x253F08u, 0x253F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F10u;
label_253f10:
    // 0x253f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x253F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F1Cu;
        // 0x253f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253F24u;
}
