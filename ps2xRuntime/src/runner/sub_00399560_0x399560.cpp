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

// Function: sub_00399560
// Address: 0x399560 - 0x3995f4
void sub_00399560_0x399560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399560_0x399560");
#endif

    switch (ctx->pc) {
        case 0x399580u: goto label_399580;
        case 0x3995a0u: goto label_3995a0;
        case 0x3995c8u: goto label_3995c8;
        default: break;
    }

    ctx->pc = 0x399560u;

    // 0x399560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x399564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x399568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39956c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x399570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x399574: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x399574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39957c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x39957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_399580:
    // 0x399580: 0x8c830784  lw          $v1, 0x784($a0)
    ctx->pc = 0x399580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x399584: 0x10700016  beq         $v1, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x399584u;
    {
        const bool branch_taken_0x399584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x399584) {
            ctx->pc = 0x3995E0u;
            goto label_3995e0;
        }
    }
    ctx->pc = 0x39958Cu;
    // 0x39958c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39958cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x399590: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x399590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x399594: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x399594u;
    {
        const bool branch_taken_0x399594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399594u;
        // 0x399598: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399594) {
            ctx->pc = 0x399580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399580;
        }
    }
    ctx->pc = 0x39959Cu;
    // 0x39959c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3995a0:
    // 0x3995a0: 0x8ca30784  lw          $v1, 0x784($a1)
    ctx->pc = 0x3995a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1924)));
    // 0x3995a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3995A4u;
    {
        const bool branch_taken_0x3995a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995A4u;
        // 0x3995a8: 0x24b10780  addiu       $s1, $a1, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995a4) {
            ctx->pc = 0x3995D0u;
            goto label_3995d0;
        }
    }
    ctx->pc = 0x3995ACu;
    // 0x3995ac: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3995acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3995b0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3995B0u;
    {
        const bool branch_taken_0x3995b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3995b0) {
            ctx->pc = 0x3995C8u;
            goto label_3995c8;
        }
    }
    ctx->pc = 0x3995B8u;
    // 0x3995b8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3995bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3995bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3995c0: 0xc0f03fc  jal         func_3C0FF0
    ctx->pc = 0x3995C0u;
    SET_GPR_U32(ctx, 31, 0x3995C8u);
    ctx->pc = 0x3995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995C0u;
    // 0x3995c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FF0u, 0x3995C0u, 0x3995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995C8u;
label_3995c8:
    // 0x3995c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3995C8u;
    {
        const bool branch_taken_0x3995c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995C8u;
        // 0x3995cc: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995c8) {
            ctx->pc = 0x3995E0u;
            goto label_3995e0;
        }
    }
    ctx->pc = 0x3995D0u;
label_3995d0:
    // 0x3995d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3995d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3995d4: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x3995d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3995d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3995D8u;
    {
        const bool branch_taken_0x3995d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995D8u;
        // 0x3995dc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995d8) {
            ctx->pc = 0x3995A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3995a0;
        }
    }
    ctx->pc = 0x3995E0u;
label_3995e0:
    // 0x3995e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3995e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3995e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3995e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3995e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3995e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3995ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3995ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995ECu;
        // 0x3995f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3995ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3995F4u;
}
