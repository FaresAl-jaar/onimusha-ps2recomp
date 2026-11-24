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

// Function: sub_0032F120
// Address: 0x32f120 - 0x32f1c0
void sub_0032F120_0x32f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F120_0x32f120");
#endif

    switch (ctx->pc) {
        case 0x32f18cu: goto label_32f18c;
        default: break;
    }

    ctx->pc = 0x32f120u;

    // 0x32f120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32f12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32f130: 0x908300f1  lbu         $v1, 0xF1($a0)
    ctx->pc = 0x32f130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 241)));
    // 0x32f134: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32F134u;
    {
        const bool branch_taken_0x32f134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F134u;
        // 0x32f138: 0x249000f0  addiu       $s0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f134) {
            ctx->pc = 0x32F1A0u;
            goto label_32f1a0;
        }
    }
    ctx->pc = 0x32F13Cu;
    // 0x32f13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f140: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F140u;
    {
        const bool branch_taken_0x32f140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f140) {
            ctx->pc = 0x32F158u;
            goto label_32f158;
        }
    }
    ctx->pc = 0x32F148u;
    // 0x32f148: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x32F148u;
    {
        const bool branch_taken_0x32f148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f148) {
            ctx->pc = 0x32F1A8u;
            goto label_32f1a8;
        }
    }
    ctx->pc = 0x32F150u;
    // 0x32f150: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x32F150u;
    {
        const bool branch_taken_0x32f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f150) {
            ctx->pc = 0x32F1A8u;
            goto label_32f1a8;
        }
    }
    ctx->pc = 0x32F158u;
label_32f158:
    // 0x32f158: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32f158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32f15c: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x32f15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32f160: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x32f160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x32f164: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32F164u;
    {
        const bool branch_taken_0x32f164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f164) {
            ctx->pc = 0x32F1A8u;
            goto label_32f1a8;
        }
    }
    ctx->pc = 0x32F16Cu;
    // 0x32f16c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x32f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32f170: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32f170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32f174: 0x24a5ec60  addiu       $a1, $a1, -0x13A0
    ctx->pc = 0x32f174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962272));
    // 0x32f178: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x32f178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x32f17c: 0x92060018  lbu         $a2, 0x18($s0)
    ctx->pc = 0x32f17cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32f180: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x32f180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x32f184: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x32F184u;
    SET_GPR_U32(ctx, 31, 0x32F18Cu);
    ctx->pc = 0x32F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F184u;
    // 0x32f188: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0200u, 0x32F184u, 0x32F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F18Cu;
label_32f18c:
    // 0x32f18c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32F194u;
    {
        const bool branch_taken_0x32f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F194u;
        // 0x32f198: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f194) {
            ctx->pc = 0x32F1B0u;
            goto label_32f1b0;
        }
    }
    ctx->pc = 0x32F19Cu;
    // 0x32f19c: 0x0  nop
    ctx->pc = 0x32f19cu;
    // NOP
label_32f1a0:
    // 0x32f1a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F1A0u;
    {
        const bool branch_taken_0x32f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1A0u;
        // 0x32f1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f1a0) {
            ctx->pc = 0x32F1B0u;
            goto label_32f1b0;
        }
    }
    ctx->pc = 0x32F1A8u;
label_32f1a8:
    // 0x32f1a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32f1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f1ac: 0x0  nop
    ctx->pc = 0x32f1acu;
    // NOP
label_32f1b0:
    // 0x32f1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32F1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F1B8u;
        // 0x32f1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F1C0u;
}
