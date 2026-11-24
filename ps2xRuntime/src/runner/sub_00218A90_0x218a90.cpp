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

// Function: sub_00218A90
// Address: 0x218a90 - 0x218b78
void sub_00218A90_0x218a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218A90_0x218a90");
#endif

    switch (ctx->pc) {
        case 0x218aecu: goto label_218aec;
        case 0x218b30u: goto label_218b30;
        default: break;
    }

    ctx->pc = 0x218a90u;

    // 0x218a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218a94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x218a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218a9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218aa4: 0x24710d30  addiu       $s1, $v1, 0xD30
    ctx->pc = 0x218aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x218aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x218aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x218aac: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x218aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x218ab0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x218ab4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x218ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x218ab8: 0x8c660e6c  lw          $a2, 0xE6C($v1)
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3692)));
    // 0x218abc: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x218ac0: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x218ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x218ac4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x218ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x218ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218acc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x218accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x218ad0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x218ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x218ad4: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x218ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x218ad8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x218ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218adc: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x218adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x218ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218ae4: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x218AE4u;
    SET_GPR_U32(ctx, 31, 0x218AECu);
    ctx->pc = 0x218AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AE4u;
    // 0x218ae8: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x218AE4u, 0x218AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AECu;
label_218aec:
    // 0x218aec: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x218AECu;
    {
        const bool branch_taken_0x218aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218aec) {
            ctx->pc = 0x218AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218AECu;
            // 0x218af0: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218B48u;
            goto label_218b48;
        }
    }
    ctx->pc = 0x218AF4u;
    // 0x218af4: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x218af8: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x218af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x218afc: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x218afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x218b00: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x218b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x218b04: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x218b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x218b08: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x218b08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x218b0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218b10: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x218b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x218b14: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x218b18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x218b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x218b1c: 0x8cc68c70  lw          $a2, -0x7390($a2)
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937712)));
    // 0x218b20: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x218b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x218b24: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x218b28: 0xc080568  jal         func_2015A0
    ctx->pc = 0x218B28u;
    SET_GPR_U32(ctx, 31, 0x218B30u);
    ctx->pc = 0x218B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B28u;
    // 0x218b2c: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x218B28u, 0x218B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B30u;
label_218b30:
    // 0x218b30: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x218b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x218b34: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x218b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218b3c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x218b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x218b40: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x218b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x218b44: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x218b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_218b48:
    // 0x218b48: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x218b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x218b4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x218b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x218b50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x218B50u;
    {
        const bool branch_taken_0x218b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b50) {
            ctx->pc = 0x218B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218B50u;
            // 0x218b54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218B68u;
            goto label_218b68;
        }
    }
    ctx->pc = 0x218B58u;
    // 0x218b58: 0xae230284  sw          $v1, 0x284($s1)
    ctx->pc = 0x218b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
    // 0x218b5c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x218b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x218b60: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x218b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x218b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_218b68:
    // 0x218b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x218b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218b70: 0x3e00008  jr          $ra
    ctx->pc = 0x218B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B70u;
        // 0x218b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218B78u;
}
