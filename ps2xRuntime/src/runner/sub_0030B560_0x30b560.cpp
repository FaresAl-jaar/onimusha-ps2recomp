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

// Function: sub_0030B560
// Address: 0x30b560 - 0x30b5f0
void sub_0030B560_0x30b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B560_0x30b560");
#endif

    switch (ctx->pc) {
        case 0x30b5b4u: goto label_30b5b4;
        case 0x30b5c8u: goto label_30b5c8;
        default: break;
    }

    ctx->pc = 0x30b560u;

    // 0x30b560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30b564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30b56c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30b570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30b574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b57c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30b57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b584: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30b584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b588: 0xa0820024  sb          $v0, 0x24($a0)
    ctx->pc = 0x30b588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b58c: 0xa0850025  sb          $a1, 0x25($a0)
    ctx->pc = 0x30b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 5));
    // 0x30b590: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x30b590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b594: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x30b594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b598: 0xa4860014  sh          $a2, 0x14($a0)
    ctx->pc = 0x30b598u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 6));
    // 0x30b59c: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x30b59cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b5a0: 0xa0820017  sb          $v0, 0x17($a0)
    ctx->pc = 0x30b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b5a4: 0x94850014  lhu         $a1, 0x14($a0)
    ctx->pc = 0x30b5a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30b5a8: 0x90860017  lbu         $a2, 0x17($a0)
    ctx->pc = 0x30b5a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x30b5ac: 0xc0bcc70  jal         func_2F31C0
    ctx->pc = 0x30B5ACu;
    SET_GPR_U32(ctx, 31, 0x30B5B4u);
    ctx->pc = 0x30B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5ACu;
    // 0x30b5b0: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31C0u, 0x30B5ACu, 0x30B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5B4u;
label_30b5b4:
    // 0x30b5b4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x30b5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b5b8: 0x92060007  lbu         $a2, 0x7($s0)
    ctx->pc = 0x30b5b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x30b5bc: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x30b5bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30b5c0: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x30B5C0u;
    SET_GPR_U32(ctx, 31, 0x30B5C8u);
    ctx->pc = 0x30B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B5C0u;
    // 0x30b5c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x30B5C0u, 0x30B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B5C8u;
label_30b5c8:
    // 0x30b5c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x30b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x30b5cc: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x30b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x30b5d0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x30b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x30b5d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b5d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30b5d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b5dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b5dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x30B5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B5E8u;
        // 0x30b5ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B5F0u;
}
