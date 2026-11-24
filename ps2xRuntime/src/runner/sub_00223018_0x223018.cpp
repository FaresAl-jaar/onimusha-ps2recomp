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

// Function: sub_00223018
// Address: 0x223018 - 0x223128
void sub_00223018_0x223018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223018_0x223018");
#endif

    switch (ctx->pc) {
        case 0x223050u: goto label_223050;
        case 0x2230ecu: goto label_2230ec;
        case 0x223100u: goto label_223100;
        default: break;
    }

    ctx->pc = 0x223018u;

    // 0x223018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22301c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223028: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x223028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22302c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22302cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223030: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x223030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x223034: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x223034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223038: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x223038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22303c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x22303cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223040: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x223044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x223044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x223048: 0xc084968  jal         func_2125A0
    ctx->pc = 0x223048u;
    SET_GPR_U32(ctx, 31, 0x223050u);
    ctx->pc = 0x22304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223048u;
    // 0x22304c: 0x26302150  addiu       $s0, $s1, 0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x223048u, 0x223050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223050u;
label_223050:
    // 0x223050: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x223050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x223054: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x223054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223058: 0x34a50191  ori         $a1, $a1, 0x191
    ctx->pc = 0x223058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)401);
    // 0x22305c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22305Cu;
    {
        const bool branch_taken_0x22305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22305Cu;
        // 0x223060: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22305c) {
            ctx->pc = 0x223088u;
            goto label_223088;
        }
    }
    ctx->pc = 0x223064u;
    // 0x223064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22306c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22306cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223074: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x223074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223078: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x223078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22307c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223080: 0x80848e0  j           func_212380
    ctx->pc = 0x223080u;
    ctx->pc = 0x223084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223080u;
    // 0x223084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x223088u;
label_223088:
    // 0x223088: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x223088u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22308c: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22308Cu;
    {
        const bool branch_taken_0x22308c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x223090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22308Cu;
        // 0x223090: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22308c) {
            ctx->pc = 0x2230C8u;
            goto label_2230c8;
        }
    }
    ctx->pc = 0x223094u;
    // 0x223094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22309c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2230a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2230a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2230a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2230a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230a8: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x2230a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x2230ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2230acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2230b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2230b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2230b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2230b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2230b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2230b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2230bc: 0x80848e0  j           func_212380
    ctx->pc = 0x2230BCu;
    ctx->pc = 0x2230C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230BCu;
    // 0x2230c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2230C4u;
    // 0x2230c4: 0x0  nop
    ctx->pc = 0x2230c4u;
    // NOP
label_2230c8:
    // 0x2230c8: 0x158100  sll         $s0, $s5, 4
    ctx->pc = 0x2230c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2230cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2230ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230d0: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2230d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2230d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2230d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2230d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2230dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2230dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2230e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230e4: 0xc088cda  jal         func_223368
    ctx->pc = 0x2230E4u;
    SET_GPR_U32(ctx, 31, 0x2230ECu);
    ctx->pc = 0x2230E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230E4u;
    // 0x2230e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223368u, 0x2230E4u, 0x2230ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230ECu;
label_2230ec:
    // 0x2230ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2230ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2230f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2230f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230f8: 0xc083d0e  jal         func_20F438
    ctx->pc = 0x2230F8u;
    SET_GPR_U32(ctx, 31, 0x223100u);
    ctx->pc = 0x2230FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230F8u;
    // 0x2230fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F438u, 0x2230F8u, 0x223100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223100u;
label_223100:
    // 0x223100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22310c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22310cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223114: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x223114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223118: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x223118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22311c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223120: 0x3e00008  jr          $ra
    ctx->pc = 0x223120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223120u;
        // 0x223124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223128u;
}
