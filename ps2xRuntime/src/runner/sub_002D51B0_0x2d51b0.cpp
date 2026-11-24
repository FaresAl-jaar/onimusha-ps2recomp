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

// Function: sub_002D51B0
// Address: 0x2d51b0 - 0x2d565c
void sub_002D51B0_0x2d51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D51B0_0x2d51b0");
#endif

    switch (ctx->pc) {
        case 0x2d52ecu: goto label_2d52ec;
        case 0x2d5300u: goto label_2d5300;
        case 0x2d536cu: goto label_2d536c;
        case 0x2d53d0u: goto label_2d53d0;
        case 0x2d543cu: goto label_2d543c;
        case 0x2d54c0u: goto label_2d54c0;
        case 0x2d54dcu: goto label_2d54dc;
        case 0x2d5530u: goto label_2d5530;
        case 0x2d5590u: goto label_2d5590;
        case 0x2d55e4u: goto label_2d55e4;
        case 0x2d55f8u: goto label_2d55f8;
        case 0x2d5618u: goto label_2d5618;
        case 0x2d5620u: goto label_2d5620;
        default: break;
    }

    ctx->pc = 0x2d51b0u;

    // 0x2d51b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d51b4: 0x83c3c  dsll32      $a3, $t0, 16
    ctx->pc = 0x2d51b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2d51b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d51bc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d51bcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d51c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d51c4: 0xa443c  dsll32      $t0, $t2, 16
    ctx->pc = 0x2d51c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2d51c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d51cc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2d51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d51d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d51d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d51d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d51dc: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2d51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d51e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d51e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d51e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d51ec: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2d51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d51f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d51f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d51f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d51f8: 0x9343c  dsll32      $a2, $t1, 16
    ctx->pc = 0x2d51f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2d51fc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d51fcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5200: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5200u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5204: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d5204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d5208: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2d5208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d520c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d520cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5210: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d5210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d5214: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d5214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d5218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d5218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d521c: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x2d521cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d5220: 0x0  nop
    ctx->pc = 0x2d5220u;
    // NOP
    // 0x2d5224: 0x0  nop
    ctx->pc = 0x2d5224u;
    // NOP
    // 0x2d5228: 0x9012  mflo        $s2
    ctx->pc = 0x2d5228u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x2d522c: 0x7048001a  div1        $zero, $v0, $t0
    ctx->pc = 0x2d522cu;
    { int32_t divisor = GPR_S32(ctx, 8); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d5230: 0x0  nop
    ctx->pc = 0x2d5230u;
    // NOP
    // 0x2d5234: 0x0  nop
    ctx->pc = 0x2d5234u;
    // NOP
    // 0x2d5238: 0x70008812  mflo1       $s1
    ctx->pc = 0x2d5238u;
    SET_GPR_U64(ctx, 17, ctx->lo1);
    // 0x2d523c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D523Cu;
    {
        const bool branch_taken_0x2d523c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D523Cu;
        // 0x2d5240: 0x160982d  daddu       $s3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d523c) {
            ctx->pc = 0x2D5250u;
            goto label_2d5250;
        }
    }
    ctx->pc = 0x2D5244u;
    // 0x2d5244: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5244u;
    {
        const bool branch_taken_0x2d5244 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x2d5244) {
            ctx->pc = 0x2D5250u;
            goto label_2d5250;
        }
    }
    ctx->pc = 0x2D524Cu;
    // 0x2d524c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d524cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d5250:
    // 0x2d5250: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5250u;
    {
        const bool branch_taken_0x2d5250 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5250) {
            ctx->pc = 0x2D5268u;
            goto label_2d5268;
        }
    }
    ctx->pc = 0x2D5258u;
    // 0x2d5258: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5258u;
    {
        const bool branch_taken_0x2d5258 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x2d5258) {
            ctx->pc = 0x2D5268u;
            goto label_2d5268;
        }
    }
    ctx->pc = 0x2D5260u;
    // 0x2d5260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d5260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d5264: 0x0  nop
    ctx->pc = 0x2d5264u;
    // NOP
label_2d5268:
    // 0x2d5268: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d526c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D526Cu;
    {
        const bool branch_taken_0x2d526c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D526Cu;
        // 0x2d5270: 0xe8082a  slt         $at, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d526c) {
            ctx->pc = 0x2D5280u;
            goto label_2d5280;
        }
    }
    ctx->pc = 0x2D5274u;
    // 0x2d5274: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5274u;
    {
        const bool branch_taken_0x2d5274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5274) {
            ctx->pc = 0x2D5280u;
            goto label_2d5280;
        }
    }
    ctx->pc = 0x2D527Cu;
    // 0x2d527c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d527cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d5280:
    // 0x2d5280: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d5280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d5284: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5284u;
    {
        const bool branch_taken_0x2d5284 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5284u;
        // 0x2d5288: 0xc8082a  slt         $at, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5284) {
            ctx->pc = 0x2D5298u;
            goto label_2d5298;
        }
    }
    ctx->pc = 0x2D528Cu;
    // 0x2d528c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D528Cu;
    {
        const bool branch_taken_0x2d528c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d528c) {
            ctx->pc = 0x2D5298u;
            goto label_2d5298;
        }
    }
    ctx->pc = 0x2D5294u;
    // 0x2d5294: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d5294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d5298:
    // 0x2d5298: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d529c: 0x84256028  lh          $a1, 0x6028($at)
    ctx->pc = 0x2d529cu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x4E6028u));
    // 0x2d52a0: 0x14343c  dsll32      $a2, $s4, 16
    ctx->pc = 0x2d52a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d52a4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d52a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d52a8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2d52a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d52ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d52acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d52b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d52b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52b4: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x2d52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
    // 0x2d52b8: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x2d52b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2d52bc: 0xaea3003c  sw          $v1, 0x3C($s5)
    ctx->pc = 0x2d52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
    // 0x2d52c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d52c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d52c4: 0x24a3ffe7  addiu       $v1, $a1, -0x19
    ctx->pc = 0x2d52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967271));
    // 0x2d52c8: 0xa6a00034  sh          $zero, 0x34($s5)
    ctx->pc = 0x2d52c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d52cc: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x2d52ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d52d0: 0xa6a00036  sh          $zero, 0x36($s5)
    ctx->pc = 0x2d52d0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d52d4: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x2d52d8: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x2d52d8u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x2d52dc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d52e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d52e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d52e4: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D52E4u;
    SET_GPR_U32(ctx, 31, 0x2D52ECu);
    ctx->pc = 0x2D52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D52E4u;
    // 0x2d52e8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D52E4u, 0x2D52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52ECu;
label_2d52ec:
    // 0x2d52ec: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d52f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52f4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2d52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d52f8: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D52F8u;
    SET_GPR_U32(ctx, 31, 0x2D5300u);
    ctx->pc = 0x2D52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D52F8u;
    // 0x2d52fc: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D52F8u, 0x2D5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5300u;
label_2d5300:
    // 0x2d5300: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x2d5300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d5304: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D5304u;
    {
        const bool branch_taken_0x2d5304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5304u;
        // 0x2d5308: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5304) {
            ctx->pc = 0x2D53D8u;
            goto label_2d53d8;
        }
    }
    ctx->pc = 0x2D530Cu;
    // 0x2d530c: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x2d530cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d5310: 0x84266084  lh          $a2, 0x6084($at)
    ctx->pc = 0x2d5310u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24708)));
    // 0x2d5314: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x2d5314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x2d5318: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x2d5318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d531c: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x2d531cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d5320: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5324: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x2d5324u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x2d5328: 0x344a5978  ori         $t2, $v0, 0x5978
    ctx->pc = 0x2d5328u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22904);
    // 0x2d532c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d532cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d5330: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5330u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5338: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d5338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d533c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d533cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5340: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5344: 0xd41021  addu        $v0, $a2, $s4
    ctx->pc = 0x2d5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2d5348: 0x84236086  lh          $v1, 0x6086($at)
    ctx->pc = 0x2d5348u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d534c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d534cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5350: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5350u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5354: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5358: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d5358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d535c: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d535cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d5360: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5364: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5364u;
    SET_GPR_U32(ctx, 31, 0x2D536Cu);
    ctx->pc = 0x2D5368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5364u;
    // 0x2d5368: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5364u, 0x2D536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D536Cu;
label_2d536c:
    // 0x2d536c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5370: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2d5370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2d5374: 0x842660a0  lh          $a2, 0x60A0($at)
    ctx->pc = 0x2d5374u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E60A0u));
    // 0x2d5378: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2d5378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d537c: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x2d537cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d5380: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5384: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d5384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5388: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d5388u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d538c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x2d538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x2d5390: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5390u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5394: 0x344a7aa5  ori         $t2, $v0, 0x7AA5
    ctx->pc = 0x2d5394u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31397);
    // 0x2d5398: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d539c: 0x24a5609c  addiu       $a1, $a1, 0x609C
    ctx->pc = 0x2d539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24732));
    // 0x2d53a0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d53a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d53a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d53a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d53a8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2d53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d53ac: 0x842360a2  lh          $v1, 0x60A2($at)
    ctx->pc = 0x2d53acu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E60A2u));
    // 0x2d53b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d53b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d53b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d53b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d53b8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d53b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d53bc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d53c0: 0x842960a6  lh          $t1, 0x60A6($at)
    ctx->pc = 0x2d53c0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E60A6u));
    // 0x2d53c4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d53c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d53c8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D53C8u;
    SET_GPR_U32(ctx, 31, 0x2D53D0u);
    ctx->pc = 0x2D53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53C8u;
    // 0x2d53cc: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D53C8u, 0x2D53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53D0u;
label_2d53d0:
    // 0x2d53d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D53D0u;
    {
        const bool branch_taken_0x2d53d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d53d0) {
            ctx->pc = 0x2D5440u;
            goto label_2d5440;
        }
    }
    ctx->pc = 0x2D53D8u;
label_2d53d8:
    // 0x2d53d8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d53d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d53dc: 0x84266084  lh          $a2, 0x6084($at)
    ctx->pc = 0x2d53dcu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E6084u));
    // 0x2d53e0: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x2d53e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d53e4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x2d53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x2d53e8: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x2d53e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d53ec: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x2d53ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d53f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d53f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d53f4: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x2d53f4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x2d53f8: 0x344a5978  ori         $t2, $v0, 0x5978
    ctx->pc = 0x2d53f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22904);
    // 0x2d53fc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d53fcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d5400: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5400u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5408: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d5408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d540c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d540cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5410: 0xd41021  addu        $v0, $a2, $s4
    ctx->pc = 0x2d5410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x2d5414: 0x84236086  lh          $v1, 0x6086($at)
    ctx->pc = 0x2d5414u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d5418: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d5418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d541c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d541cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5420: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5420u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5424: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5428: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d542c: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d542cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d5430: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5434: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5434u;
    SET_GPR_U32(ctx, 31, 0x2D543Cu);
    ctx->pc = 0x2D5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5434u;
    // 0x2d5438: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5434u, 0x2D543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D543Cu;
label_2d543c:
    // 0x2d543c: 0x0  nop
    ctx->pc = 0x2d543cu;
    // NOP
label_2d5440:
    // 0x2d5440: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D5440u;
    {
        const bool branch_taken_0x2d5440 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5440) {
            ctx->pc = 0x2D54D0u;
            goto label_2d54d0;
        }
    }
    ctx->pc = 0x2D5448u;
    // 0x2d5448: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d5448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d544c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2d544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2d5450: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5454: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5458: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d545c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d545cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5460: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2d5460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5464: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d5464u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d5468: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d5468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d546c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5470: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5470u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5474: 0x24a560b8  addiu       $a1, $a1, 0x60B8
    ctx->pc = 0x2d5474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24760));
    // 0x2d5478: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x2d5478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d547c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d547cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5480: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2d5480u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2d5484: 0x842660bc  lh          $a2, 0x60BC($at)
    ctx->pc = 0x2d5484u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24764)));
    // 0x2d5488: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x2d5488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d548c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d548cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5490: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d5490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d5494: 0x842360be  lh          $v1, 0x60BE($at)
    ctx->pc = 0x2d5494u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E60BEu));
    // 0x2d5498: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d5498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d549c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2d549cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d54a0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d54a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d54a4: 0x344a00b0  ori         $t2, $v0, 0xB0
    ctx->pc = 0x2d54a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x2d54a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d54a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d54ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d54acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d54b0: 0x842960c2  lh          $t1, 0x60C2($at)
    ctx->pc = 0x2d54b0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E60C2u));
    // 0x2d54b4: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2d54b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d54b8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D54B8u;
    SET_GPR_U32(ctx, 31, 0x2D54C0u);
    ctx->pc = 0x2D54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54B8u;
    // 0x2d54bc: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D54B8u, 0x2D54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54C0u;
label_2d54c0:
    // 0x2d54c0: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d54c4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2d54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d54c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d54c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d54cc: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2d54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
label_2d54d0:
    // 0x2d54d0: 0x92b10047  lbu         $s1, 0x47($s5)
    ctx->pc = 0x2d54d0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 71)));
    // 0x2d54d4: 0xc0b4344  jal         func_2D0D10
    ctx->pc = 0x2D54D4u;
    SET_GPR_U32(ctx, 31, 0x2D54DCu);
    ctx->pc = 0x2D54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D54D4u;
    // 0x2d54d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D10u, 0x2D54D4u, 0x2D54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54DCu;
label_2d54dc:
    // 0x2d54dc: 0xa2a20047  sb          $v0, 0x47($s5)
    ctx->pc = 0x2d54dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d54e0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d54e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d54e4: 0x84236040  lh          $v1, 0x6040($at)
    ctx->pc = 0x2d54e4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6040u));
    // 0x2d54e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d54ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d54ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d54f0: 0x24a5603c  addiu       $a1, $a1, 0x603C
    ctx->pc = 0x2d54f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24636));
    // 0x2d54f4: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x2d54f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d54f8: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d54f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d54fc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d54fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5500: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d5500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d5504: 0x84226042  lh          $v0, 0x6042($at)
    ctx->pc = 0x2d5504u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6042u));
    // 0x2d5508: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d550c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d550cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5510: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5514: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d5514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d5518: 0x84296046  lh          $t1, 0x6046($at)
    ctx->pc = 0x2d5518u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6046u));
    // 0x2d551c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d551cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5520: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5524: 0x8c2a603c  lw          $t2, 0x603C($at)
    ctx->pc = 0x2d5524u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E603Cu));
    // 0x2d5528: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5528u;
    SET_GPR_U32(ctx, 31, 0x2D5530u);
    ctx->pc = 0x2D552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5528u;
    // 0x2d552c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5528u, 0x2D5530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5530u;
label_2d5530:
    // 0x2d5530: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5534: 0x26820032  addiu       $v0, $s4, 0x32
    ctx->pc = 0x2d5534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 50));
    // 0x2d5538: 0x8423605c  lh          $v1, 0x605C($at)
    ctx->pc = 0x2d5538u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E605Cu));
    // 0x2d553c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d553cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5540: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5540u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5544: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5548: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d554c: 0x24a56058  addiu       $a1, $a1, 0x6058
    ctx->pc = 0x2d554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24664));
    // 0x2d5550: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5550u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5554: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5558: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d5558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d555c: 0x8422605e  lh          $v0, 0x605E($at)
    ctx->pc = 0x2d555cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E605Eu));
    // 0x2d5560: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5564: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5564u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5568: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d556c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d5570: 0x84286060  lh          $t0, 0x6060($at)
    ctx->pc = 0x2d5570u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6060u));
    // 0x2d5574: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5578: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d557c: 0x84296062  lh          $t1, 0x6062($at)
    ctx->pc = 0x2d557cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6062u));
    // 0x2d5580: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5584: 0x8c2a6058  lw          $t2, 0x6058($at)
    ctx->pc = 0x2d5584u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6058u));
    // 0x2d5588: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5588u;
    SET_GPR_U32(ctx, 31, 0x2D5590u);
    ctx->pc = 0x2D558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5588u;
    // 0x2d558c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5588u, 0x2D5590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5590u;
label_2d5590:
    // 0x2d5590: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5594: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5598: 0x84236024  lh          $v1, 0x6024($at)
    ctx->pc = 0x2d5598u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6024u));
    // 0x2d559c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55a0: 0x24a56020  addiu       $a1, $a1, 0x6020
    ctx->pc = 0x2d55a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    // 0x2d55a4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d55a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d55a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d55a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d55ac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d55b0: 0x84226026  lh          $v0, 0x6026($at)
    ctx->pc = 0x2d55b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6026u));
    // 0x2d55b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d55b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d55b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d55b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d55bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d55bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d55c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d55c4: 0x84286028  lh          $t0, 0x6028($at)
    ctx->pc = 0x2d55c4u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6028u));
    // 0x2d55c8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d55c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d55cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d55ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d55d0: 0x8429602a  lh          $t1, 0x602A($at)
    ctx->pc = 0x2d55d0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E602Au));
    // 0x2d55d4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d55d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d55d8: 0x8c2a6020  lw          $t2, 0x6020($at)
    ctx->pc = 0x2d55d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6020u));
    // 0x2d55dc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D55DCu;
    SET_GPR_U32(ctx, 31, 0x2D55E4u);
    ctx->pc = 0x2D55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55DCu;
    // 0x2d55e0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D55DCu, 0x2D55E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55E4u;
label_2d55e4:
    // 0x2d55e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d55e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55e8: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2d55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d55ec: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d55ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2d55f0: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D55F0u;
    SET_GPR_U32(ctx, 31, 0x2D55F8u);
    ctx->pc = 0x2D55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55F0u;
    // 0x2d55f4: 0xa2b10047  sb          $s1, 0x47($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 71), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D55F0u, 0x2D55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55F8u;
label_2d55f8:
    // 0x2d55f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d55fc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2d55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2d5600: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d5600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d5604: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2d5604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2d5608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d560c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2d560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2d5610: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D5610u;
    SET_GPR_U32(ctx, 31, 0x2D5618u);
    ctx->pc = 0x2D5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5610u;
    // 0x2d5614: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D5610u, 0x2D5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5618u;
label_2d5618:
    // 0x2d5618: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D5618u;
    SET_GPR_U32(ctx, 31, 0x2D5620u);
    ctx->pc = 0x2D561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5618u;
    // 0x2d561c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D5618u, 0x2D5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5620u;
label_2d5620:
    // 0x2d5620: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d5620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d5624: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d5624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d5628: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d5628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d562c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d5630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d5630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d5634: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d5634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2d5638: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d5638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d563c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d563cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5640: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d5640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5644: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5648: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d564c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d564cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5654: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5654u;
        // 0x2d5658: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D565Cu;
}
