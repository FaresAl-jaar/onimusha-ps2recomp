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

// Function: sub_0030AD20
// Address: 0x30ad20 - 0x30add8
void sub_0030AD20_0x30ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AD20_0x30ad20");
#endif

    switch (ctx->pc) {
        case 0x30ad50u: goto label_30ad50;
        case 0x30ad7cu: goto label_30ad7c;
        case 0x30ad90u: goto label_30ad90;
        case 0x30ada0u: goto label_30ada0;
        case 0x30ada8u: goto label_30ada8;
        default: break;
    }

    ctx->pc = 0x30ad20u;

    // 0x30ad20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30ad24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30ad28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30ad2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ad2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ad30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30ad30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ad34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ad38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30ad38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30ad40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30ad40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad44: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x30ad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad48: 0xc0cc8e0  jal         func_332380
    ctx->pc = 0x30AD48u;
    SET_GPR_U32(ctx, 31, 0x30AD50u);
    ctx->pc = 0x30AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD48u;
    // 0x30ad4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332380u, 0x30AD48u, 0x30AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD50u;
label_30ad50:
    // 0x30ad50: 0xa2700010  sb          $s0, 0x10($s3)
    ctx->pc = 0x30ad50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 16));
    // 0x30ad54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad58: 0xa2600011  sb          $zero, 0x11($s3)
    ctx->pc = 0x30ad58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ad5c: 0xa2600013  sb          $zero, 0x13($s3)
    ctx->pc = 0x30ad5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ad60: 0xa6620014  sh          $v0, 0x14($s3)
    ctx->pc = 0x30ad60u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ad64: 0xa2720016  sb          $s2, 0x16($s3)
    ctx->pc = 0x30ad64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 18));
    // 0x30ad68: 0xa2710017  sb          $s1, 0x17($s3)
    ctx->pc = 0x30ad68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 23), (uint8_t)GPR_U32(ctx, 17));
    // 0x30ad6c: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x30ad6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x30ad70: 0x92660017  lbu         $a2, 0x17($s3)
    ctx->pc = 0x30ad70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x30ad74: 0xc0bcc70  jal         func_2F31C0
    ctx->pc = 0x30AD74u;
    SET_GPR_U32(ctx, 31, 0x30AD7Cu);
    ctx->pc = 0x30AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD74u;
    // 0x30ad78: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31C0u, 0x30AD74u, 0x30AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD7Cu;
label_30ad7c:
    // 0x30ad7c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x30ad7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ad80: 0x92060007  lbu         $a2, 0x7($s0)
    ctx->pc = 0x30ad80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x30ad84: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x30ad84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ad88: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x30AD88u;
    SET_GPR_U32(ctx, 31, 0x30AD90u);
    ctx->pc = 0x30AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD88u;
    // 0x30ad8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x30AD88u, 0x30AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD90u;
label_30ad90:
    // 0x30ad90: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30ad94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x30ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x30ad98: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x30AD98u;
    SET_GPR_U32(ctx, 31, 0x30ADA0u);
    ctx->pc = 0x30AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD98u;
    // 0x30ad9c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x30AD98u, 0x30ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADA0u;
label_30ada0:
    // 0x30ada0: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x30ADA0u;
    SET_GPR_U32(ctx, 31, 0x30ADA8u);
    ctx->pc = 0x30ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADA0u;
    // 0x30ada4: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x30ADA0u, 0x30ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADA8u;
label_30ada8:
    // 0x30ada8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30adac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x30adacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x30adb0: 0xa264003a  sb          $a0, 0x3A($s3)
    ctx->pc = 0x30adb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 4));
    // 0x30adb4: 0xa2630037  sb          $v1, 0x37($s3)
    ctx->pc = 0x30adb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 3));
    // 0x30adb8: 0xa2640039  sb          $a0, 0x39($s3)
    ctx->pc = 0x30adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 57), (uint8_t)GPR_U32(ctx, 4));
    // 0x30adbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30adbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30adc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30adc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30adc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30adc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30adc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30adc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30adcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30adccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30add0: 0x3e00008  jr          $ra
    ctx->pc = 0x30ADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADD0u;
        // 0x30add4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ADD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ADD8u;
}
