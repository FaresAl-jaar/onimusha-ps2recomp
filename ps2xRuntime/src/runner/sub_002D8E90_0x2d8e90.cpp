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

// Function: sub_002D8E90
// Address: 0x2d8e90 - 0x2d8f20
void sub_002D8E90_0x2d8e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8E90_0x2d8e90");
#endif

    switch (ctx->pc) {
        case 0x2d8eb8u: goto label_2d8eb8;
        default: break;
    }

    ctx->pc = 0x2d8e90u;

    // 0x2d8e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8ea0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d8ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8ea4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d8ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ea8: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x2d8ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8eac: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x2d8eacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d8eb0: 0xc0b48a0  jal         func_2D2280
    ctx->pc = 0x2D8EB0u;
    SET_GPR_U32(ctx, 31, 0x2D8EB8u);
    ctx->pc = 0x2D8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8EB0u;
    // 0x2d8eb4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2280u, 0x2D8EB0u, 0x2D8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8EB8u;
label_2d8eb8:
    // 0x2d8eb8: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x2d8eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8ebc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2d8ebcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d8ec0: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x2d8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x2d8ec4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2d8ec4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8ec8: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x2d8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x2d8ecc: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x2d8eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2d8ed0: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x2d8ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x2d8ed4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x2d8ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d8ed8: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x2d8ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x2d8edc: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x2d8edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2d8ee0: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2d8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2d8ee4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d8ee8: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2d8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2d8eec: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x2d8eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2d8ef0: 0xa22300d4  sb          $v1, 0xD4($s1)
    ctx->pc = 0x2d8ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 212), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8ef4: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d8ef8: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2d8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x2d8efc: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x2d8efcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2d8f00: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x2d8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x2d8f04: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x2d8f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d8f08: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x2d8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x2d8f0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8f18: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F18u;
        // 0x2d8f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8F20u;
}
