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

// Function: sub_00212768
// Address: 0x212768 - 0x212818
void sub_00212768_0x212768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212768_0x212768");
#endif

    switch (ctx->pc) {
        case 0x21279cu: goto label_21279c;
        default: break;
    }

    ctx->pc = 0x212768u;

    // 0x212768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21276c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212770: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21277c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212780: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x212780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212784: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212788: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x212788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21278c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x212790: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x212790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212794: 0xc084968  jal         func_2125A0
    ctx->pc = 0x212794u;
    SET_GPR_U32(ctx, 31, 0x21279Cu);
    ctx->pc = 0x212798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212794u;
    // 0x212798: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x212794u, 0x21279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21279Cu;
label_21279c:
    // 0x21279c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21279cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2127a0: 0x2623ff44  addiu       $v1, $s1, -0xBC
    ctx->pc = 0x2127a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967108));
    // 0x2127a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2127a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2127a8: 0x34a50171  ori         $a1, $a1, 0x171
    ctx->pc = 0x2127a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)369);
    // 0x2127ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2127ACu;
    {
        const bool branch_taken_0x2127ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127ACu;
        // 0x2127b0: 0x2c630044  sltiu       $v1, $v1, 0x44 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)68) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127ac) {
            ctx->pc = 0x2127D8u;
            goto label_2127d8;
        }
    }
    ctx->pc = 0x2127B4u;
    // 0x2127b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2127b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2127b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2127b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2127bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2127bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2127c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2127c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2127c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2127c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2127c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2127c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2127cc: 0x80848e0  j           func_212380
    ctx->pc = 0x2127CCu;
    ctx->pc = 0x2127D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127CCu;
    // 0x2127d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2127D4u;
    // 0x2127d4: 0x0  nop
    ctx->pc = 0x2127d4u;
    // NOP
label_2127d8:
    // 0x2127d8: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2127D8u;
    {
        const bool branch_taken_0x2127d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127d8) {
            ctx->pc = 0x2127DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2127D8u;
            // 0x2127dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2127FCu;
            goto label_2127fc;
        }
    }
    ctx->pc = 0x2127E0u;
    // 0x2127e0: 0x8e041f7c  lw          $a0, 0x1F7C($s0)
    ctx->pc = 0x2127e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x2127e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2127e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2127e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2127ec: 0xac930150  sw          $s3, 0x150($a0)
    ctx->pc = 0x2127ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 19));
    // 0x2127f0: 0xac72fd50  sw          $s2, -0x2B0($v1)
    ctx->pc = 0x2127f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966608), GPR_U32(ctx, 18));
    // 0x2127f4: 0xac940154  sw          $s4, 0x154($a0)
    ctx->pc = 0x2127f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 20));
    // 0x2127f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2127f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2127fc:
    // 0x2127fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2127fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212804: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x212804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212808: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21280c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212810: 0x3e00008  jr          $ra
    ctx->pc = 0x212810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212810u;
        // 0x212814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212818u;
}
