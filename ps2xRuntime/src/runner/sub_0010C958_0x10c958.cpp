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

// Function: sub_0010C958
// Address: 0x10c958 - 0x10ca18
void sub_0010C958_0x10c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C958_0x10c958");
#endif

    switch (ctx->pc) {
        case 0x10c9a4u: goto label_10c9a4;
        case 0x10c9ccu: goto label_10c9cc;
        case 0x10c9e4u: goto label_10c9e4;
        default: break;
    }

    ctx->pc = 0x10c958u;

    // 0x10c958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c95c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c96c: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10c96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10c970: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10c974: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10C974u;
    {
        const bool branch_taken_0x10c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C974u;
        // 0x10c978: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c974) {
            ctx->pc = 0x10CA00u;
            goto label_10ca00;
        }
    }
    ctx->pc = 0x10C97Cu;
    // 0x10c97c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c980: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10C980u;
    {
        const bool branch_taken_0x10c980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C980u;
        // 0x10c984: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c980) {
            ctx->pc = 0x10CA04u;
            goto label_10ca04;
        }
    }
    ctx->pc = 0x10C988u;
    // 0x10c988: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x10c98c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C98Cu;
    {
        const bool branch_taken_0x10c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C98Cu;
        // 0x10c990: 0x8e060128  lw          $a2, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c98c) {
            ctx->pc = 0x10C9ACu;
            goto label_10c9ac;
        }
    }
    ctx->pc = 0x10C994u;
    // 0x10c994: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10c994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10c998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c99c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10C99Cu;
    SET_GPR_U32(ctx, 31, 0x10C9A4u);
    ctx->pc = 0x10C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C99Cu;
    // 0x10c9a0: 0x24a52348  addiu       $a1, $a1, 0x2348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10C99Cu, 0x10C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9A4u;
label_10c9a4:
    // 0x10c9a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10C9A4u;
    {
        const bool branch_taken_0x10c9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9A4u;
        // 0x10c9a8: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9a4) {
            ctx->pc = 0x10C9E8u;
            goto label_10c9e8;
        }
    }
    ctx->pc = 0x10C9ACu;
label_10c9ac:
    // 0x10c9ac: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10c9b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c9b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C9B4u;
    {
        const bool branch_taken_0x10c9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9B4u;
        // 0x10c9b8: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9b4) {
            ctx->pc = 0x10C9D4u;
            goto label_10c9d4;
        }
    }
    ctx->pc = 0x10C9BCu;
    // 0x10c9bc: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x10c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x10c9c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x10c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10c9c4: 0xc04309e  jal         func_10C278
    ctx->pc = 0x10C9C4u;
    SET_GPR_U32(ctx, 31, 0x10C9CCu);
    ctx->pc = 0x10C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9C4u;
    // 0x10c9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C278u, 0x10C9C4u, 0x10C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9CCu;
label_10c9cc:
    // 0x10c9cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10C9CCu;
    {
        const bool branch_taken_0x10c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9CCu;
        // 0x10c9d0: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9cc) {
            ctx->pc = 0x10C9E8u;
            goto label_10c9e8;
        }
    }
    ctx->pc = 0x10C9D4u;
label_10c9d4:
    // 0x10c9d4: 0x8e0501dc  lw          $a1, 0x1DC($s0)
    ctx->pc = 0x10c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x10c9d8: 0x8e0601ec  lw          $a2, 0x1EC($s0)
    ctx->pc = 0x10c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x10c9dc: 0xc04314e  jal         func_10C538
    ctx->pc = 0x10C9DCu;
    SET_GPR_U32(ctx, 31, 0x10C9E4u);
    ctx->pc = 0x10C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9DCu;
    // 0x10c9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C538u, 0x10C9DCu, 0x10C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9E4u;
label_10c9e4:
    // 0x10c9e4: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x10c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10c9e8:
    // 0x10c9e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c9ec: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x10c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x10c9f0: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x10c9f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c9f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10c9fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_10ca00:
    // 0x10ca00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ca04:
    // 0x10ca04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10ca04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ca08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ca0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ca0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ca10: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA10u;
        // 0x10ca14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA18u;
}
