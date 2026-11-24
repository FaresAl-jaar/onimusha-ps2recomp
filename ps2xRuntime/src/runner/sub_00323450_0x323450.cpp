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

// Function: sub_00323450
// Address: 0x323450 - 0x32368c
void sub_00323450_0x323450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323450_0x323450");
#endif

    switch (ctx->pc) {
        case 0x3234a0u: goto label_3234a0;
        case 0x3234d8u: goto label_3234d8;
        case 0x3234e8u: goto label_3234e8;
        case 0x323508u: goto label_323508;
        case 0x323528u: goto label_323528;
        case 0x323530u: goto label_323530;
        case 0x323594u: goto label_323594;
        case 0x3235b8u: goto label_3235b8;
        case 0x3235f0u: goto label_3235f0;
        case 0x3235f8u: goto label_3235f8;
        case 0x323654u: goto label_323654;
        case 0x323668u: goto label_323668;
        default: break;
    }

    ctx->pc = 0x323450u;

    // 0x323450: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x323450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x323454: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x323454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x323458: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x323458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x32345c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x323460: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x323460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323464: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x323464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x323468: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x323468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32346c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x323470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x323470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x323474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323478: 0x84860512  lh          $a2, 0x512($a0)
    ctx->pc = 0x323478u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1298)));
    // 0x32347c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x32347Cu;
    {
        const bool branch_taken_0x32347c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x323480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32347Cu;
        // 0x323480: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32347c) {
            ctx->pc = 0x323494u;
            goto label_323494;
        }
    }
    ctx->pc = 0x323484u;
    // 0x323484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x323484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x323488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x323488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32348c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32348Cu;
    {
        const bool branch_taken_0x32348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32348Cu;
        // 0x323490: 0x92a505e0  lbu         $a1, 0x5E0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32348c) {
            ctx->pc = 0x3234A4u;
            goto label_3234a4;
        }
    }
    ctx->pc = 0x323494u;
label_323494:
    // 0x323494: 0x86a40510  lh          $a0, 0x510($s5)
    ctx->pc = 0x323494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x323498: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x323498u;
    SET_GPR_U32(ctx, 31, 0x3234A0u);
    ctx->pc = 0x32349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323498u;
    // 0x32349c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x323498u, 0x3234A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3234A0u;
label_3234a0:
    // 0x3234a0: 0x92a505e0  lbu         $a1, 0x5E0($s5)
    ctx->pc = 0x3234a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1504)));
label_3234a4:
    // 0x3234a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3234a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3234a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3234a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3234ac: 0x2463cb62  addiu       $v1, $v1, -0x349E
    ctx->pc = 0x3234acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953826));
    // 0x3234b0: 0x2442cb64  addiu       $v0, $v0, -0x349C
    ctx->pc = 0x3234b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953828));
    // 0x3234b4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3234b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3234b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3234b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3234bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3234bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3234c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3234c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3234c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3234c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3234c8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3234c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3234cc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x3234ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3234d0: 0xc0767e0  jal         func_1D9F80
    ctx->pc = 0x3234D0u;
    SET_GPR_U32(ctx, 31, 0x3234D8u);
    ctx->pc = 0x3234D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3234D0u;
    // 0x3234d4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F80u, 0x3234D0u, 0x3234D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3234D8u;
label_3234d8:
    // 0x3234d8: 0xa6a205d0  sh          $v0, 0x5D0($s5)
    ctx->pc = 0x3234d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1488), (uint16_t)GPR_U32(ctx, 2));
    // 0x3234dc: 0x8ea405c0  lw          $a0, 0x5C0($s5)
    ctx->pc = 0x3234dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1472)));
    // 0x3234e0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3234E0u;
    SET_GPR_U32(ctx, 31, 0x3234E8u);
    ctx->pc = 0x3234E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3234E0u;
    // 0x3234e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3234E0u, 0x3234E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3234E8u;
label_3234e8:
    // 0x3234e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3234E8u;
    {
        const bool branch_taken_0x3234e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3234e8) {
            ctx->pc = 0x323500u;
            goto label_323500;
        }
    }
    ctx->pc = 0x3234F0u;
    // 0x3234f0: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x3234f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3234f4: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x3234f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3234f8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3234f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3234fc: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x3234fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
label_323500:
    // 0x323500: 0xc096c80  jal         func_25B200
    ctx->pc = 0x323500u;
    SET_GPR_U32(ctx, 31, 0x323508u);
    ctx->pc = 0x323504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323500u;
    // 0x323504: 0x8ea405c4  lw          $a0, 0x5C4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x323500u, 0x323508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323508u;
label_323508:
    // 0x323508: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323508u;
    {
        const bool branch_taken_0x323508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323508) {
            ctx->pc = 0x323520u;
            goto label_323520;
        }
    }
    ctx->pc = 0x323510u;
    // 0x323510: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x323510u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323514: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x323514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x323518: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x323518u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32351c: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x32351cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
label_323520:
    // 0x323520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x323520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323524: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x323524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_323528:
    // 0x323528: 0xc096c80  jal         func_25B200
    ctx->pc = 0x323528u;
    SET_GPR_U32(ctx, 31, 0x323530u);
    ctx->pc = 0x32352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323528u;
    // 0x32352c: 0x8e0405b0  lw          $a0, 0x5B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x323528u, 0x323530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323530u;
label_323530:
    // 0x323530: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x323530u;
    {
        const bool branch_taken_0x323530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323530) {
            ctx->pc = 0x3235A0u;
            goto label_3235a0;
        }
    }
    ctx->pc = 0x323538u;
    // 0x323538: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x323538u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32353c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x32353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x323540: 0x7c440070  sq          $a0, 0x70($v0)
    ctx->pc = 0x323540u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 4));
    // 0x323544: 0x86a20510  lh          $v0, 0x510($s5)
    ctx->pc = 0x323544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x323548: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x323548u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32354c: 0x0  nop
    ctx->pc = 0x32354cu;
    // NOP
    // 0x323550: 0x0  nop
    ctx->pc = 0x323550u;
    // NOP
    // 0x323554: 0x1010  mfhi        $v0
    ctx->pc = 0x323554u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x323558: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x323558u;
    {
        const bool branch_taken_0x323558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323558) {
            ctx->pc = 0x323598u;
            goto label_323598;
        }
    }
    ctx->pc = 0x323560u;
    // 0x323560: 0x92a3052e  lbu         $v1, 0x52E($s5)
    ctx->pc = 0x323560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x323564: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x323564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x323568: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x323568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x32356c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x323570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x323570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323574: 0x3445a702  ori         $a1, $v0, 0xA702
    ctx->pc = 0x323574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42754);
    // 0x323578: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x323578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32357c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32357cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x323580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323584: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x323584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323588: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x323588u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32358c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32358Cu;
    SET_GPR_U32(ctx, 31, 0x323594u);
    ctx->pc = 0x323590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32358Cu;
    // 0x323590: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32358Cu, 0x323594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323594u;
label_323594:
    // 0x323594: 0x0  nop
    ctx->pc = 0x323594u;
    // NOP
label_323598:
    // 0x323598: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x323598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x32359c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x32359cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3235a0:
    // 0x3235a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3235a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3235a4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x3235a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3235a8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3235A8u;
    {
        const bool branch_taken_0x3235a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3235ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235A8u;
        // 0x3235ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235a8) {
            ctx->pc = 0x323528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323528;
        }
    }
    ctx->pc = 0x3235B0u;
    // 0x3235b0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3235B0u;
    SET_GPR_U32(ctx, 31, 0x3235B8u);
    ctx->pc = 0x3235B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235B0u;
    // 0x3235b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3235B0u, 0x3235B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235B8u;
label_3235b8:
    // 0x3235b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3235B8u;
    {
        const bool branch_taken_0x3235b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3235b8) {
            ctx->pc = 0x3235F0u;
            goto label_3235f0;
        }
    }
    ctx->pc = 0x3235C0u;
    // 0x3235c0: 0x92a705d2  lbu         $a3, 0x5D2($s5)
    ctx->pc = 0x3235c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1490)));
    // 0x3235c4: 0xc6ae05c8  lwc1        $f14, 0x5C8($s5)
    ctx->pc = 0x3235c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3235c8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3235c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3235cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3235ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3235d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3235d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3235d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3235d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3235dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3235e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3235e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3235e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235e8: 0xc0c07c4  jal         func_301F10
    ctx->pc = 0x3235E8u;
    SET_GPR_U32(ctx, 31, 0x3235F0u);
    ctx->pc = 0x3235ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235E8u;
    // 0x3235ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F10u, 0x3235E8u, 0x3235F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235F0u;
label_3235f0:
    // 0x3235f0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3235F0u;
    SET_GPR_U32(ctx, 31, 0x3235F8u);
    ctx->pc = 0x3235F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235F0u;
    // 0x3235f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3235F0u, 0x3235F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235F8u;
label_3235f8:
    // 0x3235f8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3235F8u;
    {
        const bool branch_taken_0x3235f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235F8u;
        // 0x3235fc: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235f8) {
            ctx->pc = 0x323658u;
            goto label_323658;
        }
    }
    ctx->pc = 0x323600u;
    // 0x323600: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x323600u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x323604: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x323604u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x323608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x323608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32360c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x32360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x323610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x323610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323614: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x323614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323618: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x323618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x32361c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x32361cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x323620: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x323620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323624: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x323624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x323628: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x323628u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x32362c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32362cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323630: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x323630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x323634: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x323634u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x323638: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x323638u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x32363c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x32363cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x323640: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x323640u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x323644: 0x92a605d3  lbu         $a2, 0x5D3($s5)
    ctx->pc = 0x323644u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1491)));
    // 0x323648: 0xc6ac05c8  lwc1        $f12, 0x5C8($s5)
    ctx->pc = 0x323648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32364c: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x32364Cu;
    SET_GPR_U32(ctx, 31, 0x323654u);
    ctx->pc = 0x323650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32364Cu;
    // 0x323650: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x32364Cu, 0x323654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323654u;
label_323654:
    // 0x323654: 0x0  nop
    ctx->pc = 0x323654u;
    // NOP
label_323658:
    // 0x323658: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x323658u;
    {
        const bool branch_taken_0x323658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323658u;
        // 0x32365c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323658) {
            ctx->pc = 0x323668u;
            goto label_323668;
        }
    }
    ctx->pc = 0x323660u;
    // 0x323660: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x323660u;
    SET_GPR_U32(ctx, 31, 0x323668u);
    ctx->pc = 0x323664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323660u;
    // 0x323664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x323660u, 0x323668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323668u;
label_323668:
    // 0x323668: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x323668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32366c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32366cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323670: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x323670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323674: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x323674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323678: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x323678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32367c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32367cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323680: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323684: 0x3e00008  jr          $ra
    ctx->pc = 0x323684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323684u;
        // 0x323688: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32368Cu;
}
