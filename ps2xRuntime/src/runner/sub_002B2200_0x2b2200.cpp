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

// Function: sub_002B2200
// Address: 0x2b2200 - 0x2b22e4
void sub_002B2200_0x2b2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2200_0x2b2200");
#endif

    switch (ctx->pc) {
        case 0x2b2234u: goto label_2b2234;
        case 0x2b2250u: goto label_2b2250;
        default: break;
    }

    ctx->pc = 0x2b2200u;

    // 0x2b2200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b2200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b2204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b2204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b2208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b220c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b2210: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b2210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b221c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b221cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2220: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b2220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2224: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2228: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b2228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b222c: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B222Cu;
    SET_GPR_U32(ctx, 31, 0x2B2234u);
    ctx->pc = 0x2B2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B222Cu;
    // 0x2b2230: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B222Cu, 0x2B2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2234u;
label_2b2234:
    // 0x2b2234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2238: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B2238u;
    {
        const bool branch_taken_0x2b2238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2238u;
        // 0x2b223c: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2238) {
            ctx->pc = 0x2B22C8u;
            goto label_2b22c8;
        }
    }
    ctx->pc = 0x2B2240u;
    // 0x2b2240: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2b2240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b2244: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x2b2244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x2b2248: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x2B2248u;
    SET_GPR_U32(ctx, 31, 0x2B2250u);
    ctx->pc = 0x2B224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2248u;
    // 0x2b224c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x2B2248u, 0x2B2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2250u;
label_2b2250:
    // 0x2b2250: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b2250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b2254: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b2258: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B2258u;
    {
        const bool branch_taken_0x2b2258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2258) {
            ctx->pc = 0x2B22C8u;
            goto label_2b22c8;
        }
    }
    ctx->pc = 0x2B2260u;
    // 0x2b2260: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b2260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b2264: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2b2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b2268: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2b2268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2b226c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b2270: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2b2270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2b2274: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2b2274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2278: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x2b2278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b227c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2b227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b2280: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2b2280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2b2284: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b2288: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2b2288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2b228c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2b228cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b2290: 0xa203002d  sb          $v1, 0x2D($s0)
    ctx->pc = 0x2b2290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2294: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2b2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2b2298: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b2298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2b229c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b22a0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2b22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2b22a4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2b22a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b22a8: 0xa203002e  sb          $v1, 0x2E($s0)
    ctx->pc = 0x2b22a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b22ac: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2b22acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b22b0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b22b4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2b22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b22b8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2b22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2b22bc: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2b22bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2b22c0: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x2b22c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b22c4: 0x0  nop
    ctx->pc = 0x2b22c4u;
    // NOP
label_2b22c8:
    // 0x2b22c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b22c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b22cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b22ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b22d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b22d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b22d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b22d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b22d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b22d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b22dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B22DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22DCu;
        // 0x2b22e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B22E4u;
}
