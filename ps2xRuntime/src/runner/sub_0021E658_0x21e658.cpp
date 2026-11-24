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

// Function: sub_0021E658
// Address: 0x21e658 - 0x21e6d4
void sub_0021E658_0x21e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E658_0x21e658");
#endif

    switch (ctx->pc) {
        case 0x21e698u: goto label_21e698;
        default: break;
    }

    ctx->pc = 0x21e658u;

    // 0x21e658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e65c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x21e65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e664: 0x24710007  addiu       $s1, $v1, 0x7
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x21e668: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x21e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x21e66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e670: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x21e670u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x21e674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e678: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x21e678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x21e67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e680: 0xc38023  subu        $s0, $a2, $v1
    ctx->pc = 0x21e680u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21e684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21e684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e688: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21e688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e68c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21e690: 0xc049590  jal         func_125640
    ctx->pc = 0x21E690u;
    SET_GPR_U32(ctx, 31, 0x21E698u);
    ctx->pc = 0x21E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E690u;
    // 0x21e694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x21E690u, 0x21E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E698u;
label_21e698:
    // 0x21e698: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x21e698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x21e69c: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x21e69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21e6a0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21e6a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21e6a4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x21e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x21e6a8: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x21e6a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x21e6ac: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x21e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x21e6b0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x21e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x21e6b4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x21e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x21e6b8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x21e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x21e6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e6c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e6c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e6c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e6c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x21E6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6CCu;
        // 0x21e6d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E6D4u;
}
