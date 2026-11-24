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

// Function: sub_00210648
// Address: 0x210648 - 0x210700
void sub_00210648_0x210648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210648_0x210648");
#endif

    switch (ctx->pc) {
        case 0x210680u: goto label_210680;
        case 0x2106dcu: goto label_2106dc;
        default: break;
    }

    ctx->pc = 0x210648u;

    // 0x210648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21064c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x210650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210654: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210658: 0x26300d30  addiu       $s0, $s1, 0xD30
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x21065c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210664: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x210664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x210668: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x210668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21066c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x210670: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x210670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210674: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x210674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x210678: 0xc084990  jal         func_212640
    ctx->pc = 0x210678u;
    SET_GPR_U32(ctx, 31, 0x210680u);
    ctx->pc = 0x21067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210678u;
    // 0x21067c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x210678u, 0x210680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210680u;
label_210680:
    // 0x210680: 0x8e0701f4  lw          $a3, 0x1F4($s0)
    ctx->pc = 0x210680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x210684: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x210684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x210688: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x210688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21068c: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x210690: 0x28e50000  slti        $a1, $a3, 0x0
    ctx->pc = 0x210690u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x210694: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x210694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210698: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x210698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21069c: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x21069cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2106a0: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x2106a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2106a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2106A4u;
    {
        const bool branch_taken_0x2106a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106A4u;
        // 0x2106a8: 0x21143  sra         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106a4) {
            ctx->pc = 0x2106D4u;
            goto label_2106d4;
        }
    }
    ctx->pc = 0x2106ACu;
    // 0x2106ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2106b0: 0xae1201ec  sw          $s2, 0x1EC($s0)
    ctx->pc = 0x2106b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 18));
    // 0x2106b4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2106b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2106b8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2106b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2106bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2106bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2106c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2106c4: 0xac530f2c  sw          $s3, 0xF2C($v0)
    ctx->pc = 0x2106c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3884), GPR_U32(ctx, 19));
    // 0x2106c8: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x2106cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2106ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2106d0: 0xae0301f4  sw          $v1, 0x1F4($s0)
    ctx->pc = 0x2106d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 3));
label_2106d4:
    // 0x2106d4: 0xc084996  jal         func_212658
    ctx->pc = 0x2106D4u;
    SET_GPR_U32(ctx, 31, 0x2106DCu);
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x2106D4u, 0x2106DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106DCu;
label_2106dc:
    // 0x2106dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2106dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2106e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2106e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2106e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2106e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2106e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2106ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2106ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2106f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2106f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2106f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2106f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2106f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2106F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2106FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106F8u;
        // 0x2106fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2106F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210700u;
}
