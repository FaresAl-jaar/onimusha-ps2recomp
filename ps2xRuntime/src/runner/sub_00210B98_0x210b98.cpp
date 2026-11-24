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

// Function: sub_00210B98
// Address: 0x210b98 - 0x210c80
void sub_00210B98_0x210b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210B98_0x210b98");
#endif

    switch (ctx->pc) {
        case 0x210bd4u: goto label_210bd4;
        case 0x210bf4u: goto label_210bf4;
        case 0x210c14u: goto label_210c14;
        case 0x210c54u: goto label_210c54;
        default: break;
    }

    ctx->pc = 0x210b98u;

    // 0x210b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210b9c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x210b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x210ba0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x210ba0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210ba8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x210bac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210bb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210bb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x210bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210bbc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x210bbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x210bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x210bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210bc8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x210bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x210bcc: 0xc0843d8  jal         func_210F60
    ctx->pc = 0x210BCCu;
    SET_GPR_U32(ctx, 31, 0x210BD4u);
    ctx->pc = 0x210BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BCCu;
    // 0x210bd0: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F60u, 0x210BCCu, 0x210BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BD4u;
label_210bd4:
    // 0x210bd4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x210bd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bdc: 0x2339023  subu        $s2, $s1, $s3
    ctx->pc = 0x210bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x210be0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x210be4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x210BE4u;
    {
        const bool branch_taken_0x210be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE4u;
        // 0x210be8: 0x292a823  subu        $s5, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210be4) {
            ctx->pc = 0x210C58u;
            goto label_210c58;
        }
    }
    ctx->pc = 0x210BECu;
    // 0x210bec: 0xc0843d8  jal         func_210F60
    ctx->pc = 0x210BECu;
    SET_GPR_U32(ctx, 31, 0x210BF4u);
    ctx->pc = 0x210BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BECu;
    // 0x210bf0: 0x26a5ffff  addiu       $a1, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F60u, 0x210BECu, 0x210BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BF4u;
label_210bf4:
    // 0x210bf4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x210bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bfc: 0x2131823  subu        $v1, $s0, $s3
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x210c00: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x210c04: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x210C04u;
    {
        const bool branch_taken_0x210c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C04u;
        // 0x210c08: 0x2832823  subu        $a1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c04) {
            ctx->pc = 0x210C58u;
            goto label_210c58;
        }
    }
    ctx->pc = 0x210C0Cu;
    // 0x210c0c: 0xc0843d8  jal         func_210F60
    ctx->pc = 0x210C0Cu;
    SET_GPR_U32(ctx, 31, 0x210C14u);
    ctx->pc = 0x210C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C0Cu;
    // 0x210c10: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F60u, 0x210C0Cu, 0x210C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C14u;
label_210c14:
    // 0x210c14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x210c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x210C18u;
    {
        const bool branch_taken_0x210c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C18u;
        // 0x210c1c: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c18) {
            ctx->pc = 0x210C58u;
            goto label_210c58;
        }
    }
    ctx->pc = 0x210C20u;
    // 0x210c20: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x210c20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x210c24: 0x1604000c  bne         $s0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x210C24u;
    {
        const bool branch_taken_0x210c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x210C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C24u;
        // 0x210c28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c24) {
            ctx->pc = 0x210C58u;
            goto label_210c58;
        }
    }
    ctx->pc = 0x210C2Cu;
    // 0x210c2c: 0x250001a  div         $zero, $s2, $s0
    ctx->pc = 0x210c2cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x210c30: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x210C30u;
    {
        const bool branch_taken_0x210c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x210c30) {
            ctx->pc = 0x210C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210C30u;
            // 0x210c34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x210C38u;
            goto label_210c38;
        }
    }
    ctx->pc = 0x210C38u;
label_210c38:
    // 0x210c38: 0x1810  mfhi        $v1
    ctx->pc = 0x210c38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x210c3c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x210C3Cu;
    {
        const bool branch_taken_0x210c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210c3c) {
            ctx->pc = 0x210C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210C3Cu;
            // 0x210c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210C5Cu;
            goto label_210c5c;
        }
    }
    ctx->pc = 0x210C44u;
    // 0x210c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x210c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c4c: 0xc084320  jal         func_210C80
    ctx->pc = 0x210C4Cu;
    SET_GPR_U32(ctx, 31, 0x210C54u);
    ctx->pc = 0x210C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C4Cu;
    // 0x210c50: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C80u, 0x210C4Cu, 0x210C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C54u;
label_210c54:
    // 0x210c54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x210c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210c58:
    // 0x210c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210c5c:
    // 0x210c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210c64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210c68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210c6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x210c6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210c70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x210c70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210c74: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x210c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x210c78: 0x3e00008  jr          $ra
    ctx->pc = 0x210C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C78u;
        // 0x210c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C80u;
}
