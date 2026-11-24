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

// Function: sub_002261C8
// Address: 0x2261c8 - 0x226268
void sub_002261C8_0x2261c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002261C8_0x2261c8");
#endif

    switch (ctx->pc) {
        case 0x2261f4u: goto label_2261f4;
        default: break;
    }

    ctx->pc = 0x2261c8u;

    // 0x2261c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2261c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2261cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2261ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2261d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2261d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2261d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2261d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2261d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2261dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261e0: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x2261e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2261e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2261e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2261e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2261e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2261ec: 0xc049590  jal         func_125640
    ctx->pc = 0x2261ECu;
    SET_GPR_U32(ctx, 31, 0x2261F4u);
    ctx->pc = 0x2261F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261ECu;
    // 0x2261f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2261ECu, 0x2261F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261F4u;
label_2261f4:
    // 0x2261f4: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x2261f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x2261f8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x2261f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2261fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2261fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x226200: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x226200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226204: 0x24650c00  addiu       $a1, $v1, 0xC00
    ctx->pc = 0x226204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x226208: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x226208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x22620c: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x226210: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226214: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x226214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x226218: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x226218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x22621c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x22621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x226220: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x226220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x226224: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x226224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x226228: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x226228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x22622c: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x22622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
    // 0x226230: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x226230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x226234: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x226234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x226238: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x226238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x22623c: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x22623cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x226240: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x226240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x226244: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x226244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x226248: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x226248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x22624c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x22624cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x226250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22625c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226260: 0x3e00008  jr          $ra
    ctx->pc = 0x226260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226260u;
        // 0x226264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226268u;
}
