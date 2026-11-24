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

// Function: sub_00248FB8
// Address: 0x248fb8 - 0x249080
void sub_00248FB8_0x248fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248FB8_0x248fb8");
#endif

    switch (ctx->pc) {
        case 0x249000u: goto label_249000;
        case 0x249028u: goto label_249028;
        default: break;
    }

    ctx->pc = 0x248fb8u;

    // 0x248fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x248fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x248fbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x248fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x248fc0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x248fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248fc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x248fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x248fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248fd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x248fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x248fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x248fd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x248fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fdc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x248fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x248fe0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x248fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248fe8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x248fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x248fec: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248FECu;
    {
        const bool branch_taken_0x248fec = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x248FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FECu;
        // 0x248ff0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fec) {
            ctx->pc = 0x249050u;
            goto label_249050;
        }
    }
    ctx->pc = 0x248FF4u;
    // 0x248ff4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x248ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x248ff8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x248ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ffc: 0x24550b40  addiu       $s5, $v0, 0xB40
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
label_249000:
    // 0x249000: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x249000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x249004: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x249004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249008: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24900c: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x24900cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x249010: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x249010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x249014: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x249014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x249018: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x249018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24901c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x249020: 0xc09229c  jal         func_248A70
    ctx->pc = 0x249020u;
    SET_GPR_U32(ctx, 31, 0x249028u);
    ctx->pc = 0x249024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249020u;
    // 0x249024: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248A70u, 0x249020u, 0x249028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249028u;
label_249028:
    // 0x249028: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249028u;
    {
        const bool branch_taken_0x249028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249028u;
        // 0x24902c: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249028) {
            ctx->pc = 0x249048u;
            goto label_249048;
        }
    }
    ctx->pc = 0x249030u;
    // 0x249030: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249034: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x249034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x249038: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x249038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24903c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24903Cu;
    {
        const bool branch_taken_0x24903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24903Cu;
        // 0x249040: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24903c) {
            ctx->pc = 0x249058u;
            goto label_249058;
        }
    }
    ctx->pc = 0x249044u;
    // 0x249044: 0x0  nop
    ctx->pc = 0x249044u;
    // NOP
label_249048:
    // 0x249048: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x249048u;
    {
        const bool branch_taken_0x249048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249048u;
        // 0x24904c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249048) {
            ctx->pc = 0x249000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249000;
        }
    }
    ctx->pc = 0x249050u;
label_249050:
    // 0x249050: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x249050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x249054: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x249054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_249058:
    // 0x249058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24905c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24905cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249064: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x249064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249068: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x249068u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24906c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24906cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x249070: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x249070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249074: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x249074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x249078: 0x3e00008  jr          $ra
    ctx->pc = 0x249078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249078u;
        // 0x24907c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249080u;
}
