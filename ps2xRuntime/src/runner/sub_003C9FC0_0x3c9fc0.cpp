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

// Function: sub_003C9FC0
// Address: 0x3c9fc0 - 0x3ca058
void sub_003C9FC0_0x3c9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9FC0_0x3c9fc0");
#endif

    ctx->pc = 0x3c9fc0u;

    // 0x3c9fc0: 0x87838438  lh          $v1, -0x7BC8($gp)
    ctx->pc = 0x3c9fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935608)));
    // 0x3c9fc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c9fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c9fc8: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x3c9fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x3c9fcc: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x3c9fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3c9fd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c9fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9fd4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x3c9fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c9fd8: 0x8783843c  lh          $v1, -0x7BC4($gp)
    ctx->pc = 0x3c9fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935612)));
    // 0x3c9fdc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3c9fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c9fe0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3c9fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3c9fe4: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C9FE4u;
    {
        const bool branch_taken_0x3c9fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3c9fe4) {
            ctx->pc = 0x3CA030u;
            goto label_3ca030;
        }
    }
    ctx->pc = 0x3C9FECu;
    // 0x3c9fec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C9FECu;
    {
        const bool branch_taken_0x3c9fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9fec) {
            ctx->pc = 0x3CA000u;
            goto label_3ca000;
        }
    }
    ctx->pc = 0x3C9FF4u;
    // 0x3c9ff4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3C9FF4u;
    {
        const bool branch_taken_0x3c9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9ff4) {
            ctx->pc = 0x3CA050u;
            goto label_3ca050;
        }
    }
    ctx->pc = 0x3C9FFCu;
    // 0x3c9ffc: 0x0  nop
    ctx->pc = 0x3c9ffcu;
    // NOP
label_3ca000:
    // 0x3ca000: 0x90850839  lbu         $a1, 0x839($a0)
    ctx->pc = 0x3ca000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2105)));
    // 0x3ca004: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3ca004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3ca008: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ca008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ca00c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x3ca00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x3ca010: 0x90a5000c  lbu         $a1, 0xC($a1)
    ctx->pc = 0x3ca010u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3ca014: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3ca014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca018: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3ca018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca01c: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x3ca01cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ca020: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x3ca020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ca024: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3ca024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3ca028: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x3ca028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ca02c: 0x0  nop
    ctx->pc = 0x3ca02cu;
    // NOP
label_3ca030:
    // 0x3ca030: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3ca030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3ca034: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CA034u;
    {
        const bool branch_taken_0x3ca034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA034u;
        // 0x3ca038: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca034) {
            ctx->pc = 0x3CA050u;
            goto label_3ca050;
        }
    }
    ctx->pc = 0x3CA03Cu;
    // 0x3ca03c: 0xa08329d1  sb          $v1, 0x29D1($a0)
    ctx->pc = 0x3ca03cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ca040: 0x90830839  lbu         $v1, 0x839($a0)
    ctx->pc = 0x3ca040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2105)));
    // 0x3ca044: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3ca044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3ca048: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x3ca048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3ca04c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3ca04cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ca050:
    // 0x3ca050: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA050u;
        // 0x3ca054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA058u;
}
