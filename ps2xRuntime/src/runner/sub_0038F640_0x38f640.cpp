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

// Function: sub_0038F640
// Address: 0x38f640 - 0x38f6c8
void sub_0038F640_0x38f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F640_0x38f640");
#endif

    switch (ctx->pc) {
        case 0x38f654u: goto label_38f654;
        case 0x38f6b0u: goto label_38f6b0;
        case 0x38f6b8u: goto label_38f6b8;
        default: break;
    }

    ctx->pc = 0x38f640u;

    // 0x38f640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f64c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x38F64Cu;
    SET_GPR_U32(ctx, 31, 0x38F654u);
    ctx->pc = 0x38F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F64Cu;
    // 0x38f650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x38F64Cu, 0x38F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F654u;
label_38f654:
    // 0x38f654: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x38f654u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38f658: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x38f658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x38f65c: 0x24a5f380  addiu       $a1, $a1, -0xC80
    ctx->pc = 0x38f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964096));
    // 0x38f660: 0x3c08c47a  lui         $t0, 0xC47A
    ctx->pc = 0x38f660u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50298 << 16));
    // 0x38f664: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x38f664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x38f668: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x38f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x38f66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f670: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x38f670u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x38f674: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x38f674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38f678: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x38f678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x38f67c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x38f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x38f680: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x38f680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x38f684: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x38f684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x38f688: 0xae0306c0  sw          $v1, 0x6C0($s0)
    ctx->pc = 0x38f688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
    // 0x38f68c: 0xa6002b40  sh          $zero, 0x2B40($s0)
    ctx->pc = 0x38f68cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11072), (uint16_t)GPR_U32(ctx, 0));
    // 0x38f690: 0xa2002b3c  sb          $zero, 0x2B3C($s0)
    ctx->pc = 0x38f690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11068), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f694: 0xae002b44  sw          $zero, 0x2B44($s0)
    ctx->pc = 0x38f694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11076), GPR_U32(ctx, 0));
    // 0x38f698: 0xae002b48  sw          $zero, 0x2B48($s0)
    ctx->pc = 0x38f698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11080), GPR_U32(ctx, 0));
    // 0x38f69c: 0xa6022b32  sh          $v0, 0x2B32($s0)
    ctx->pc = 0x38f69cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 2));
    // 0x38f6a0: 0xa2002b4d  sb          $zero, 0x2B4D($s0)
    ctx->pc = 0x38f6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11085), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f6a4: 0xa6002b4e  sh          $zero, 0x2B4E($s0)
    ctx->pc = 0x38f6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 0));
    // 0x38f6a8: 0xc0e3784  jal         func_38DE10
    ctx->pc = 0x38F6A8u;
    SET_GPR_U32(ctx, 31, 0x38F6B0u);
    ctx->pc = 0x38F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F6A8u;
    // 0x38f6ac: 0xa2002b4c  sb          $zero, 0x2B4C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE10u, 0x38F6A8u, 0x38F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F6B0u;
label_38f6b0:
    // 0x38f6b0: 0xc0e379c  jal         func_38DE70
    ctx->pc = 0x38F6B0u;
    SET_GPR_U32(ctx, 31, 0x38F6B8u);
    ctx->pc = 0x38F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F6B0u;
    // 0x38f6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE70u, 0x38F6B0u, 0x38F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F6B8u;
label_38f6b8:
    // 0x38f6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x38F6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6C0u;
        // 0x38f6c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F6C8u;
}
