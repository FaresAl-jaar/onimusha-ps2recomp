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

// Function: sub_00298060
// Address: 0x298060 - 0x2980d8
void sub_00298060_0x298060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298060_0x298060");
#endif

    switch (ctx->pc) {
        case 0x298098u: goto label_298098;
        case 0x2980a4u: goto label_2980a4;
        case 0x2980c4u: goto label_2980c4;
        default: break;
    }

    ctx->pc = 0x298060u;

    // 0x298060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29806c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29806cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298074: 0x9084000a  lbu         $a0, 0xA($a0)
    ctx->pc = 0x298074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x298078: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x298078u;
    {
        const bool branch_taken_0x298078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298078) {
            ctx->pc = 0x2980A8u;
            goto label_2980a8;
        }
    }
    ctx->pc = 0x298080u;
    // 0x298080: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x298080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x298084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x298084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298088: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x298088u;
    {
        const bool branch_taken_0x298088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298088u;
        // 0x29808c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298088) {
            ctx->pc = 0x2980A8u;
            goto label_2980a8;
        }
    }
    ctx->pc = 0x298090u;
    // 0x298090: 0xc0b9e6c  jal         func_2E79B0
    ctx->pc = 0x298090u;
    SET_GPR_U32(ctx, 31, 0x298098u);
    ctx->pc = 0x298094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298090u;
    // 0x298094: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E79B0u, 0x298090u, 0x298098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298098u;
label_298098:
    // 0x298098: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x298098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29809c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x29809Cu;
    SET_GPR_U32(ctx, 31, 0x2980A4u);
    ctx->pc = 0x2980A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29809Cu;
    // 0x2980a0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x29809Cu, 0x2980A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980A4u;
label_2980a4:
    // 0x2980a4: 0xa20207b3  sb          $v0, 0x7B3($s0)
    ctx->pc = 0x2980a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1971), (uint8_t)GPR_U32(ctx, 2));
label_2980a8:
    // 0x2980a8: 0x920708e8  lbu         $a3, 0x8E8($s0)
    ctx->pc = 0x2980a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2980ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2980acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2980b0: 0x10e50005  beq         $a3, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2980B0u;
    {
        const bool branch_taken_0x2980b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x2980B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980B0u;
        // 0x2980b4: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980b0) {
            ctx->pc = 0x2980C8u;
            goto label_2980c8;
        }
    }
    ctx->pc = 0x2980B8u;
    // 0x2980b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2980b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2980bc: 0xc0ce188  jal         func_338620
    ctx->pc = 0x2980BCu;
    SET_GPR_U32(ctx, 31, 0x2980C4u);
    ctx->pc = 0x2980C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980BCu;
    // 0x2980c0: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x2980BCu, 0x2980C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980C4u;
label_2980c4:
    // 0x2980c4: 0x0  nop
    ctx->pc = 0x2980c4u;
    // NOP
label_2980c8:
    // 0x2980c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2980c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2980cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2980ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2980d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2980D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2980D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980D0u;
        // 0x2980d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2980D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2980D8u;
}
