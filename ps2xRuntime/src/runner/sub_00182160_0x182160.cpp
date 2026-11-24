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

// Function: sub_00182160
// Address: 0x182160 - 0x182388
void sub_00182160_0x182160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182160_0x182160");
#endif

    switch (ctx->pc) {
        case 0x182318u: goto label_182318;
        default: break;
    }

    ctx->pc = 0x182160u;

    // 0x182160: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x182160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x182164: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x182164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x182168: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x182168u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x18216c: 0x8c880048  lw          $t0, 0x48($a0)
    ctx->pc = 0x18216cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x182170: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x182170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x182174: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x182174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182178: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x182178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x18217c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18217Cu;
    {
        const bool branch_taken_0x18217c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x182180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18217Cu;
        // 0x182180: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18217c) {
            ctx->pc = 0x182190u;
            goto label_182190;
        }
    }
    ctx->pc = 0x182184u;
    // 0x182184: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x182184u;
    {
        const bool branch_taken_0x182184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182184u;
        // 0x182188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182184) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x18218Cu;
    // 0x18218c: 0x0  nop
    ctx->pc = 0x18218cu;
    // NOP
label_182190:
    // 0x182190: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x182190u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182194: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x182194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x182198: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18219c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x18219Cu;
    {
        const bool branch_taken_0x18219c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18219c) {
            ctx->pc = 0x1821B0u;
            goto label_1821b0;
        }
    }
    ctx->pc = 0x1821A4u;
    // 0x1821a4: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1821a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1821a8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1821A8u;
    {
        const bool branch_taken_0x1821a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A8u;
        // 0x1821ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821a8) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x1821B0u;
label_1821b0:
    // 0x1821b0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1821b4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1821B4u;
    {
        const bool branch_taken_0x1821b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1821b4) {
            ctx->pc = 0x1821C8u;
            goto label_1821c8;
        }
    }
    ctx->pc = 0x1821BCu;
    // 0x1821bc: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1821bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1821c0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1821C0u;
    {
        const bool branch_taken_0x1821c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821C0u;
        // 0x1821c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821c0) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x1821C8u;
label_1821c8:
    // 0x1821c8: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x1821c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x1821cc: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1821ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1821d0: 0xac860094  sw          $a2, 0x94($a0)
    ctx->pc = 0x1821d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 6));
    // 0x1821d4: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x1821d4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1821d8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1821d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1821dc: 0xa48900c8  sh          $t1, 0xC8($a0)
    ctx->pc = 0x1821dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 9));
    // 0x1821e0: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x1821e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x1821e4: 0x8c8900c4  lw          $t1, 0xC4($a0)
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1821e8: 0x948500c8  lhu         $a1, 0xC8($a0)
    ctx->pc = 0x1821e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1821ec: 0xa9082b  sltu        $at, $a1, $t1
    ctx->pc = 0x1821ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1821f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1821F0u;
    {
        const bool branch_taken_0x1821f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1821f0) {
            ctx->pc = 0x182200u;
            goto label_182200;
        }
    }
    ctx->pc = 0x1821F8u;
    // 0x1821f8: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x1821f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x1821fc: 0x0  nop
    ctx->pc = 0x1821fcu;
    // NOP
label_182200:
    // 0x182200: 0x90ca0002  lbu         $t2, 0x2($a2)
    ctx->pc = 0x182200u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x182204: 0x34e50008  ori         $a1, $a3, 0x8
    ctx->pc = 0x182204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x182208: 0x24c90003  addiu       $t1, $a2, 0x3
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x18220c: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x182210: 0xa08a00cc  sb          $t2, 0xCC($a0)
    ctx->pc = 0x182210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 10));
    // 0x182214: 0xac890098  sw          $t1, 0x98($a0)
    ctx->pc = 0x182214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 9));
    // 0x182218: 0x908a00cc  lbu         $t2, 0xCC($a0)
    ctx->pc = 0x182218u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x18221c: 0x8c890098  lw          $t1, 0x98($a0)
    ctx->pc = 0x18221cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x182220: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x182220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x182224: 0xac89009c  sw          $t1, 0x9C($a0)
    ctx->pc = 0x182224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 9));
    // 0x182228: 0x8c8a009c  lw          $t2, 0x9C($a0)
    ctx->pc = 0x182228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x18222c: 0x908900cc  lbu         $t1, 0xCC($a0)
    ctx->pc = 0x18222cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x182230: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x182234: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x182234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x182238: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x182238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x18223c: 0xac8700a4  sw          $a3, 0xA4($a0)
    ctx->pc = 0x18223cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 7));
    // 0x182240: 0x8c8700a4  lw          $a3, 0xA4($a0)
    ctx->pc = 0x182240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x182244: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x182244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x182248: 0xac8700a0  sw          $a3, 0xA0($a0)
    ctx->pc = 0x182248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 7));
    // 0x18224c: 0x8c8700a4  lw          $a3, 0xA4($a0)
    ctx->pc = 0x18224cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x182250: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x182250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x182254: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x182258: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x182258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
    // 0x18225c: 0x908600ca  lbu         $a2, 0xCA($a0)
    ctx->pc = 0x18225cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x182260: 0xa08600cb  sb          $a2, 0xCB($a0)
    ctx->pc = 0x182260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 203), (uint8_t)GPR_U32(ctx, 6));
    // 0x182264: 0xa08300ca  sb          $v1, 0xCA($a0)
    ctx->pc = 0x182264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 202), (uint8_t)GPR_U32(ctx, 3));
    // 0x182268: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x182268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x18226c: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x18226cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x182270: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x182270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x182274: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x182278: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18227c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182280: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x182280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x182284: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x182284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x182288: 0x8c8500b8  lw          $a1, 0xB8($a0)
    ctx->pc = 0x182288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x18228c: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x18228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x182290: 0xa02827  not         $a1, $a1
    ctx->pc = 0x182290u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x182294: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x182294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x182298: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x182298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
    // 0x18229c: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1822a0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1822a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1822a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1822A4u;
    {
        const bool branch_taken_0x1822a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822a4) {
            ctx->pc = 0x1822C0u;
            goto label_1822c0;
        }
    }
    ctx->pc = 0x1822ACu;
    // 0x1822ac: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1822acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1822b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1822b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1822b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1822b8: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x1822b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x1822bc: 0x0  nop
    ctx->pc = 0x1822bcu;
    // NOP
label_1822c0:
    // 0x1822c0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1822C0u;
    {
        const bool branch_taken_0x1822c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822c0) {
            ctx->pc = 0x182370u;
            goto label_182370;
        }
    }
    ctx->pc = 0x1822C8u;
    // 0x1822c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1822C8u;
    {
        const bool branch_taken_0x1822c8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1822CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822C8u;
        // 0x1822cc: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822c8) {
            ctx->pc = 0x1822DCu;
            goto label_1822dc;
        }
    }
    ctx->pc = 0x1822D0u;
    // 0x1822d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1822d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1822d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1822D4u;
    {
        const bool branch_taken_0x1822d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822D4u;
        // 0x1822d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822d4) {
            ctx->pc = 0x1822F4u;
            goto label_1822f4;
        }
    }
    ctx->pc = 0x1822DCu;
label_1822dc:
    // 0x1822dc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1822dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1822e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1822e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1822e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1822e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1822e8: 0x0  nop
    ctx->pc = 0x1822e8u;
    // NOP
    // 0x1822ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1822ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1822f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1822f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1822f4:
    // 0x1822f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1822f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1822f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1822f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822fc: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x1822fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x182300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x182304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182308: 0x0  nop
    ctx->pc = 0x182308u;
    // NOP
    // 0x18230c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18230cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x182310: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x182310u;
    {
        const bool branch_taken_0x182310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182310u;
        // 0x182314: 0xe48000ac  swc1        $f0, 0xAC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182310) {
            ctx->pc = 0x182358u;
            goto label_182358;
        }
    }
    ctx->pc = 0x182318u;
label_182318:
    // 0x182318: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18231c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x182320: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x182320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x182324: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x182324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182328: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x182328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18232c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x182330: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x182330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182334: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x182334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x182338: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x182338u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x18233c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x18233cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x182340: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x182340u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x182344: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x182344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x182348: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x182348u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x18234c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x18234cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x182350: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x182350u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x182354: 0x0  nop
    ctx->pc = 0x182354u;
    // NOP
label_182358:
    // 0x182358: 0x9502006a  lhu         $v0, 0x6A($t0)
    ctx->pc = 0x182358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x18235c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x18235cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182360: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x182360u;
    {
        const bool branch_taken_0x182360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182360) {
            ctx->pc = 0x182318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182318;
        }
    }
    ctx->pc = 0x182368u;
    // 0x182368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182368u;
    {
        const bool branch_taken_0x182368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182368) {
            ctx->pc = 0x182378u;
            goto label_182378;
        }
    }
    ctx->pc = 0x182370u;
label_182370:
    // 0x182370: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x182370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x182374: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x182374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_182378:
    // 0x182378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18237c: 0x0  nop
    ctx->pc = 0x18237cu;
    // NOP
label_182380:
    // 0x182380: 0x3e00008  jr          $ra
    ctx->pc = 0x182380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182388u;
}
