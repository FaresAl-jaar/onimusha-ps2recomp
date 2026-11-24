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

// Function: sub_0021ACD8
// Address: 0x21acd8 - 0x21add8
void sub_0021ACD8_0x21acd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ACD8_0x21acd8");
#endif

    switch (ctx->pc) {
        case 0x21acf0u: goto label_21acf0;
        case 0x21acfcu: goto label_21acfc;
        case 0x21ad48u: goto label_21ad48;
        case 0x21ad6cu: goto label_21ad6c;
        case 0x21adc4u: goto label_21adc4;
        default: break;
    }

    ctx->pc = 0x21acd8u;

    // 0x21acd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21acd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21acdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ace0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ace0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ace4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ace8: 0xc043808  jal         func_10E020
    ctx->pc = 0x21ACE8u;
    SET_GPR_U32(ctx, 31, 0x21ACF0u);
    ctx->pc = 0x21ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACE8u;
    // 0x21acec: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21ACE8u, 0x21ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACF0u;
label_21acf0:
    // 0x21acf0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x21acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x21acf4: 0xc0869b4  jal         func_21A6D0
    ctx->pc = 0x21ACF4u;
    SET_GPR_U32(ctx, 31, 0x21ACFCu);
    ctx->pc = 0x21ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACF4u;
    // 0x21acf8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6D0u, 0x21ACF4u, 0x21ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACFCu;
label_21acfc:
    // 0x21acfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad00: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x21ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x21ad04: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u)); // MMIO: 0x1000b410
    // 0x21ad0c: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x21ad0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x21ad10: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad18: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x21ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x21ad1c: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x21ad1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x21ad20: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x21ad20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x21ad24: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x21ad24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u)); // MMIO: 0x1000b430
    // 0x21ad2c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x21ad2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x21ad30: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x21ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x21ad34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u)); // MMIO: 0x1000b420
    // 0x21ad38: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x21ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x21ad3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x21ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u)); // MMIO: 0x1000b400
    // 0x21ad40: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x21ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x21ad44: 0x0  nop
    ctx->pc = 0x21ad44u;
    // NOP
label_21ad48:
    // 0x21ad48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10002010
    // 0x21ad4c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x21ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x21ad50: 0x0  nop
    ctx->pc = 0x21ad50u;
    // NOP
    // 0x21ad54: 0x0  nop
    ctx->pc = 0x21ad54u;
    // NOP
    // 0x21ad58: 0x0  nop
    ctx->pc = 0x21ad58u;
    // NOP
    // 0x21ad5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21AD5Cu;
    {
        const bool branch_taken_0x21ad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad5c) {
            ctx->pc = 0x21AD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ad48;
        }
    }
    ctx->pc = 0x21AD64u;
    // 0x21ad64: 0xc08699a  jal         func_21A668
    ctx->pc = 0x21AD64u;
    SET_GPR_U32(ctx, 31, 0x21AD6Cu);
    ctx->pc = 0x21AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD64u;
    // 0x21ad68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A668u, 0x21AD64u, 0x21AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD6Cu;
label_21ad6c:
    // 0x21ad6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad70: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x21ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x21ad74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u)); // MMIO: 0x1000b010
    // 0x21ad7c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x21ad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x21ad80: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x21ad80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad84: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x21ad84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad88: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x21ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x21ad8c: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x21ad8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x21ad90: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x21ad90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x21ad94: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21ad98: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x21ad9c: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x21ad9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x21ada0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x21ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21ada4: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x21ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x21ada8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x21adac: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x21adacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x21adb0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x21adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x21adb4: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x21adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x21adb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x21adbc: 0xc043800  jal         func_10E000
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x21ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ADBCu;
    // 0x21adc0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x21ADBCu, 0x21ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADC4u;
label_21adc4:
    // 0x21adc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21adc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21adc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21adcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21adccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21add0: 0x3e00008  jr          $ra
    ctx->pc = 0x21ADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADD0u;
        // 0x21add4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ADD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ADD8u;
}
