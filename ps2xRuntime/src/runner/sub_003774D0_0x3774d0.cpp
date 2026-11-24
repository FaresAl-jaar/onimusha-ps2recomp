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

// Function: sub_003774D0
// Address: 0x3774d0 - 0x377a44
void sub_003774D0_0x3774d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003774D0_0x3774d0");
#endif

    switch (ctx->pc) {
        case 0x377550u: goto label_377550;
        case 0x377588u: goto label_377588;
        case 0x3775acu: goto label_3775ac;
        case 0x3775ecu: goto label_3775ec;
        case 0x377678u: goto label_377678;
        case 0x3776b4u: goto label_3776b4;
        case 0x3776c8u: goto label_3776c8;
        case 0x377700u: goto label_377700;
        case 0x37778cu: goto label_37778c;
        case 0x377798u: goto label_377798;
        case 0x3777b8u: goto label_3777b8;
        case 0x3777d8u: goto label_3777d8;
        case 0x3777e0u: goto label_3777e0;
        case 0x377810u: goto label_377810;
        case 0x377848u: goto label_377848;
        case 0x377850u: goto label_377850;
        case 0x3778acu: goto label_3778ac;
        case 0x3778c0u: goto label_3778c0;
        case 0x377900u: goto label_377900;
        case 0x377920u: goto label_377920;
        case 0x377928u: goto label_377928;
        case 0x377930u: goto label_377930;
        default: break;
    }

    ctx->pc = 0x3774d0u;

    // 0x3774d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3774d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3774d4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3774d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3774d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3774d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3774dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3774dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3774e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3774e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3774e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3774e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3774e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3774e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3774ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3774ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3774f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3774f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3774f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3774f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3774f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3774fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3774fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377500: 0x84840510  lh          $a0, 0x510($a0)
    ctx->pc = 0x377500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1296)));
    // 0x377504: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x377504u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x377508: 0x0  nop
    ctx->pc = 0x377508u;
    // NOP
    // 0x37750c: 0x0  nop
    ctx->pc = 0x37750cu;
    // NOP
    // 0x377510: 0x1810  mfhi        $v1
    ctx->pc = 0x377510u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x377514: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x377514u;
    {
        const bool branch_taken_0x377514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377514u;
        // 0x377518: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377514) {
            ctx->pc = 0x377550u;
            goto label_377550;
        }
    }
    ctx->pc = 0x37751Cu;
    // 0x37751c: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x37751cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x377520: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x377520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x377524: 0x3c022900  lui         $v0, 0x2900
    ctx->pc = 0x377524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10496 << 16));
    // 0x377528: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x377528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37752c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37752cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377530: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x377530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x377534: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x377534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x377538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37753c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37753cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377540: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x377540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377544: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x377544u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377548: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x377548u;
    SET_GPR_U32(ctx, 31, 0x377550u);
    ctx->pc = 0x37754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377548u;
    // 0x37754c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x377548u, 0x377550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377550u;
label_377550:
    // 0x377550: 0x92430522  lbu         $v1, 0x522($s2)
    ctx->pc = 0x377550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x377554: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x377554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x377558: 0x10200131  beqz        $at, . + 4 + (0x131 << 2)
    ctx->pc = 0x377558u;
    {
        const bool branch_taken_0x377558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377558u;
        // 0x37755c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377558) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x377560u;
    // 0x377560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x377560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x377564: 0x24841b80  addiu       $a0, $a0, 0x1B80
    ctx->pc = 0x377564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
    // 0x377568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37756c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377570: 0x600008  jr          $v1
    ctx->pc = 0x377570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377578u: goto label_377578;
            case 0x377610u: goto label_377610;
            case 0x377640u: goto label_377640;
            case 0x377738u: goto label_377738;
            case 0x377918u: goto label_377918;
            case 0x3779F8u: goto label_3779f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377570u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x377578u;
label_377578:
    // 0x377578: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x377578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x37757c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x377580: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x377580u;
    SET_GPR_U32(ctx, 31, 0x377588u);
    ctx->pc = 0x377584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377580u;
    // 0x377584: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x377580u, 0x377588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377588u;
label_377588:
    // 0x377588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x377588u;
    {
        const bool branch_taken_0x377588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377588) {
            ctx->pc = 0x3775A0u;
            goto label_3775a0;
        }
    }
    ctx->pc = 0x377590u;
    // 0x377590: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x377590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x377594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x377594u;
    {
        const bool branch_taken_0x377594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377594u;
        // 0x377598: 0x7e4305a0  sq          $v1, 0x5A0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1440), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377594) {
            ctx->pc = 0x3775B0u;
            goto label_3775b0;
        }
    }
    ctx->pc = 0x37759Cu;
    // 0x37759c: 0x0  nop
    ctx->pc = 0x37759cu;
    // NOP
label_3775a0:
    // 0x3775a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3775a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3775a4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3775A4u;
    SET_GPR_U32(ctx, 31, 0x3775ACu);
    ctx->pc = 0x3775A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775A4u;
    // 0x3775a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3775A4u, 0x3775ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775ACu;
label_3775ac:
    // 0x3775ac: 0x0  nop
    ctx->pc = 0x3775acu;
    // NOP
label_3775b0:
    // 0x3775b0: 0x924505e0  lbu         $a1, 0x5E0($s2)
    ctx->pc = 0x3775b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x3775b4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3775b8: 0x864605e2  lh          $a2, 0x5E2($s2)
    ctx->pc = 0x3775b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1506)));
    // 0x3775bc: 0x24631b64  addiu       $v1, $v1, 0x1B64
    ctx->pc = 0x3775bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7012));
    // 0x3775c0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3775c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3775c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3775c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3775c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3775c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3775cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3775ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3775d0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3775d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775d4: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3775D4u;
    {
        const bool branch_taken_0x3775d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3775d4) {
            ctx->pc = 0x3775F0u;
            goto label_3775f0;
        }
    }
    ctx->pc = 0x3775DCu;
    // 0x3775dc: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3775dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3775e0: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3775e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3775e4: 0xc0aa1a4  jal         func_2A8690
    ctx->pc = 0x3775E4u;
    SET_GPR_U32(ctx, 31, 0x3775ECu);
    ctx->pc = 0x3775E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3775E4u;
    // 0x3775e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8690u, 0x3775E4u, 0x3775ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3775ECu;
label_3775ec:
    // 0x3775ec: 0x0  nop
    ctx->pc = 0x3775ecu;
    // NOP
label_3775f0:
    // 0x3775f0: 0xa64005e4  sh          $zero, 0x5E4($s2)
    ctx->pc = 0x3775f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x3775f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3775f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3775f8: 0xa64305e6  sh          $v1, 0x5E6($s2)
    ctx->pc = 0x3775f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1510), (uint16_t)GPR_U32(ctx, 3));
    // 0x3775fc: 0x92430522  lbu         $v1, 0x522($s2)
    ctx->pc = 0x3775fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x377600: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x377600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x377604: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x377604u;
    {
        const bool branch_taken_0x377604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377604u;
        // 0x377608: 0xa2430522  sb          $v1, 0x522($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377604) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x37760Cu;
    // 0x37760c: 0x0  nop
    ctx->pc = 0x37760cu;
    // NOP
label_377610:
    // 0x377610: 0x864305e4  lh          $v1, 0x5E4($s2)
    ctx->pc = 0x377610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x377614: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x377614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x377618: 0xa64305e4  sh          $v1, 0x5E4($s2)
    ctx->pc = 0x377618u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1508), (uint16_t)GPR_U32(ctx, 3));
    // 0x37761c: 0x864405e4  lh          $a0, 0x5E4($s2)
    ctx->pc = 0x37761cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x377620: 0x864305e6  lh          $v1, 0x5E6($s2)
    ctx->pc = 0x377620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1510)));
    // 0x377624: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x377624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x377628: 0x146000fd  bnez        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x377628u;
    {
        const bool branch_taken_0x377628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377628) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x377630u;
    // 0x377630: 0x92430522  lbu         $v1, 0x522($s2)
    ctx->pc = 0x377630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x377634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x377634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x377638: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x377638u;
    {
        const bool branch_taken_0x377638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377638u;
        // 0x37763c: 0xa2430522  sb          $v1, 0x522($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377638) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x377640u;
label_377640:
    // 0x377640: 0x924605e0  lbu         $a2, 0x5E0($s2)
    ctx->pc = 0x377640u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x377644: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377648: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x377648u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x37764c: 0x24421b61  addiu       $v0, $v0, 0x1B61
    ctx->pc = 0x37764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7009));
    // 0x377650: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x377650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x377654: 0x924805d4  lbu         $t0, 0x5D4($s2)
    ctx->pc = 0x377654u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1492)));
    // 0x377658: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x377658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37765c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x37765cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x377660: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x377660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x377664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x377664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x377668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37766c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x37766cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377670: 0xc0a9d04  jal         func_2A7410
    ctx->pc = 0x377670u;
    SET_GPR_U32(ctx, 31, 0x377678u);
    ctx->pc = 0x377674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377670u;
    // 0x377674: 0x26490590  addiu       $t1, $s2, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7410u, 0x377670u, 0x377678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377678u;
label_377678:
    // 0x377678: 0xae4205b0  sw          $v0, 0x5B0($s2)
    ctx->pc = 0x377678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1456), GPR_U32(ctx, 2));
    // 0x37767c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x37767cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377680: 0x924605e0  lbu         $a2, 0x5E0($s2)
    ctx->pc = 0x377680u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x377684: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377688: 0x24421b62  addiu       $v0, $v0, 0x1B62
    ctx->pc = 0x377688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7010));
    // 0x37768c: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x37768cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x377690: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x377690u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x377694: 0x924805d4  lbu         $t0, 0x5D4($s2)
    ctx->pc = 0x377694u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1492)));
    // 0x377698: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x377698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x37769c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x37769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3776a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3776a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3776a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3776a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3776a8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3776a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3776ac: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x3776ACu;
    SET_GPR_U32(ctx, 31, 0x3776B4u);
    ctx->pc = 0x3776B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776ACu;
    // 0x3776b0: 0x26490590  addiu       $t1, $s2, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x3776ACu, 0x3776B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3776B4u;
label_3776b4:
    // 0x3776b4: 0xae4205b4  sw          $v0, 0x5B4($s2)
    ctx->pc = 0x3776b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 2));
    // 0x3776b8: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x3776b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x3776bc: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x3776bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3776c0: 0xc0aa194  jal         func_2A8650
    ctx->pc = 0x3776C0u;
    SET_GPR_U32(ctx, 31, 0x3776C8u);
    ctx->pc = 0x3776C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776C0u;
    // 0x3776c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8650u, 0x3776C0u, 0x3776C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3776C8u;
label_3776c8:
    // 0x3776c8: 0xae4205c4  sw          $v0, 0x5C4($s2)
    ctx->pc = 0x3776c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1476), GPR_U32(ctx, 2));
    // 0x3776cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3776ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3776d0: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3776d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3776d4: 0x3c022a00  lui         $v0, 0x2A00
    ctx->pc = 0x3776d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10752 << 16));
    // 0x3776d8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3776d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3776dc: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x3776dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x3776e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3776e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3776e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3776e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3776ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3776f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3776f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776f8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3776F8u;
    SET_GPR_U32(ctx, 31, 0x377700u);
    ctx->pc = 0x3776FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776F8u;
    // 0x3776fc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3776F8u, 0x377700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377700u;
label_377700:
    // 0x377700: 0xa64005e4  sh          $zero, 0x5E4($s2)
    ctx->pc = 0x377700u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x377704: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x377704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x377708: 0x924405e0  lbu         $a0, 0x5E0($s2)
    ctx->pc = 0x377708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x37770c: 0x24421b66  addiu       $v0, $v0, 0x1B66
    ctx->pc = 0x37770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7014));
    // 0x377710: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x377710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x377714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x377718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37771c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377720: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x377720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377724: 0xa64205e6  sh          $v0, 0x5E6($s2)
    ctx->pc = 0x377724u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1510), (uint16_t)GPR_U32(ctx, 2));
    // 0x377728: 0x92420522  lbu         $v0, 0x522($s2)
    ctx->pc = 0x377728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x37772c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x377730: 0xa2420522  sb          $v0, 0x522($s2)
    ctx->pc = 0x377730u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 2));
    // 0x377734: 0x0  nop
    ctx->pc = 0x377734u;
    // NOP
label_377738:
    // 0x377738: 0x864305e4  lh          $v1, 0x5E4($s2)
    ctx->pc = 0x377738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x37773c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x377740: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x377740u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x377744: 0x0  nop
    ctx->pc = 0x377744u;
    // NOP
    // 0x377748: 0x0  nop
    ctx->pc = 0x377748u;
    // NOP
    // 0x37774c: 0x1010  mfhi        $v0
    ctx->pc = 0x37774cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x377750: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x377750u;
    {
        const bool branch_taken_0x377750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377750u;
        // 0x377754: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377750) {
            ctx->pc = 0x377790u;
            goto label_377790;
        }
    }
    ctx->pc = 0x377758u;
    // 0x377758: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x377758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x37775c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x377760: 0x3c022b00  lui         $v0, 0x2B00
    ctx->pc = 0x377760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11008 << 16));
    // 0x377764: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x377764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x377768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37776c: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37776cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x377770: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x377770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x377774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x377778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37777c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37777cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377780: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x377780u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377784: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x377784u;
    SET_GPR_U32(ctx, 31, 0x37778Cu);
    ctx->pc = 0x377788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377784u;
    // 0x377788: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x377784u, 0x37778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37778Cu;
label_37778c:
    // 0x37778c: 0x0  nop
    ctx->pc = 0x37778cu;
    // NOP
label_377790:
    // 0x377790: 0xc096c80  jal         func_25B200
    ctx->pc = 0x377790u;
    SET_GPR_U32(ctx, 31, 0x377798u);
    ctx->pc = 0x377794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377790u;
    // 0x377794: 0x8e4405c0  lw          $a0, 0x5C0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x377790u, 0x377798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377798u;
label_377798:
    // 0x377798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x377798u;
    {
        const bool branch_taken_0x377798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377798) {
            ctx->pc = 0x3777B0u;
            goto label_3777b0;
        }
    }
    ctx->pc = 0x3777A0u;
    // 0x3777a0: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x3777a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3777a4: 0x36830001  ori         $v1, $s4, 0x1
    ctx->pc = 0x3777a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x3777a8: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x3777a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3777ac: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x3777acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
label_3777b0:
    // 0x3777b0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3777B0u;
    SET_GPR_U32(ctx, 31, 0x3777B8u);
    ctx->pc = 0x3777B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777B0u;
    // 0x3777b4: 0x8e4405c4  lw          $a0, 0x5C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3777B0u, 0x3777B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777B8u;
label_3777b8:
    // 0x3777b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3777B8u;
    {
        const bool branch_taken_0x3777b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3777b8) {
            ctx->pc = 0x3777D0u;
            goto label_3777d0;
        }
    }
    ctx->pc = 0x3777C0u;
    // 0x3777c0: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x3777c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3777c4: 0x36830001  ori         $v1, $s4, 0x1
    ctx->pc = 0x3777c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x3777c8: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x3777c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3777cc: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x3777ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
label_3777d0:
    // 0x3777d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3777d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777d4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3777d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3777d8:
    // 0x3777d8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3777D8u;
    SET_GPR_U32(ctx, 31, 0x3777E0u);
    ctx->pc = 0x3777DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777D8u;
    // 0x3777dc: 0x8e6405b0  lw          $a0, 0x5B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3777D8u, 0x3777E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777E0u;
label_3777e0:
    // 0x3777e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3777E0u;
    {
        const bool branch_taken_0x3777e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3777e0) {
            ctx->pc = 0x3777F8u;
            goto label_3777f8;
        }
    }
    ctx->pc = 0x3777E8u;
    // 0x3777e8: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x3777e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3777ec: 0x36830001  ori         $v1, $s4, 0x1
    ctx->pc = 0x3777ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x3777f0: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x3777f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3777f4: 0x7c440070  sq          $a0, 0x70($v0)
    ctx->pc = 0x3777f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 4));
label_3777f8:
    // 0x3777f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3777f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3777fc: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x3777fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x377800: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377800u;
    {
        const bool branch_taken_0x377800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377800u;
        // 0x377804: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377800) {
            ctx->pc = 0x3777D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3777d8;
        }
    }
    ctx->pc = 0x377808u;
    // 0x377808: 0xc0c0818  jal         func_302060
    ctx->pc = 0x377808u;
    SET_GPR_U32(ctx, 31, 0x377810u);
    ctx->pc = 0x37780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377808u;
    // 0x37780c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x377808u, 0x377810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377810u;
label_377810:
    // 0x377810: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x377810u;
    {
        const bool branch_taken_0x377810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377810) {
            ctx->pc = 0x377848u;
            goto label_377848;
        }
    }
    ctx->pc = 0x377818u;
    // 0x377818: 0x924705d2  lbu         $a3, 0x5D2($s2)
    ctx->pc = 0x377818u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1490)));
    // 0x37781c: 0xc64e05c8  lwc1        $f14, 0x5C8($s2)
    ctx->pc = 0x37781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x377820: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x377820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x377824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x377824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x377828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37782c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x377834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377838: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x377838u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x37783c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37783cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377840: 0xc0c07c4  jal         func_301F10
    ctx->pc = 0x377840u;
    SET_GPR_U32(ctx, 31, 0x377848u);
    ctx->pc = 0x377844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377840u;
    // 0x377844: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F10u, 0x377840u, 0x377848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377848u;
label_377848:
    // 0x377848: 0xc0c0818  jal         func_302060
    ctx->pc = 0x377848u;
    SET_GPR_U32(ctx, 31, 0x377850u);
    ctx->pc = 0x37784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377848u;
    // 0x37784c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x377848u, 0x377850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377850u;
label_377850:
    // 0x377850: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x377850u;
    {
        const bool branch_taken_0x377850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377850u;
        // 0x377854: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377850) {
            ctx->pc = 0x3778B0u;
            goto label_3778b0;
        }
    }
    ctx->pc = 0x377858u;
    // 0x377858: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x377858u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37785c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x37785cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x377860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377864: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x377864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x377868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x377868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37786c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x37786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x377870: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x377870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x377874: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x377874u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x377878: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x37787c: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x37787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x377880: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x377880u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x377884: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x377884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x377888: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x377888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x37788c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x37788cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x377890: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x377890u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x377894: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x377894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x377898: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x377898u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x37789c: 0x924605d3  lbu         $a2, 0x5D3($s2)
    ctx->pc = 0x37789cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1491)));
    // 0x3778a0: 0xc64c05c8  lwc1        $f12, 0x5C8($s2)
    ctx->pc = 0x3778a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3778a4: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x3778A4u;
    SET_GPR_U32(ctx, 31, 0x3778ACu);
    ctx->pc = 0x3778A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778A4u;
    // 0x3778a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x3778A4u, 0x3778ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3778ACu;
label_3778ac:
    // 0x3778ac: 0x0  nop
    ctx->pc = 0x3778acu;
    // NOP
label_3778b0:
    // 0x3778b0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3778B0u;
    {
        const bool branch_taken_0x3778b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3778B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778B0u;
        // 0x3778b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778b0) {
            ctx->pc = 0x3778C0u;
            goto label_3778c0;
        }
    }
    ctx->pc = 0x3778B8u;
    // 0x3778b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3778B8u;
    SET_GPR_U32(ctx, 31, 0x3778C0u);
    ctx->pc = 0x3778BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778B8u;
    // 0x3778bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3778B8u, 0x3778C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3778C0u;
label_3778c0:
    // 0x3778c0: 0x864305e4  lh          $v1, 0x5E4($s2)
    ctx->pc = 0x3778c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x3778c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3778c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3778c8: 0xa64305e4  sh          $v1, 0x5E4($s2)
    ctx->pc = 0x3778c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1508), (uint16_t)GPR_U32(ctx, 3));
    // 0x3778cc: 0x864405e4  lh          $a0, 0x5E4($s2)
    ctx->pc = 0x3778ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x3778d0: 0x864305e6  lh          $v1, 0x5E6($s2)
    ctx->pc = 0x3778d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1510)));
    // 0x3778d4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3778d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3778d8: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x3778D8u;
    {
        const bool branch_taken_0x3778d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3778d8) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x3778E0u;
    // 0x3778e0: 0x864305e2  lh          $v1, 0x5E2($s2)
    ctx->pc = 0x3778e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1506)));
    // 0x3778e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3778e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3778e8: 0xa64305e2  sh          $v1, 0x5E2($s2)
    ctx->pc = 0x3778e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1506), (uint16_t)GPR_U32(ctx, 3));
    // 0x3778ec: 0x864305e2  lh          $v1, 0x5E2($s2)
    ctx->pc = 0x3778ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1506)));
    // 0x3778f0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3778F0u;
    {
        const bool branch_taken_0x3778f0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3778F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778F0u;
        // 0x3778f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778f0) {
            ctx->pc = 0x377908u;
            goto label_377908;
        }
    }
    ctx->pc = 0x3778F8u;
    // 0x3778f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3778F8u;
    SET_GPR_U32(ctx, 31, 0x377900u);
    ctx->pc = 0x3778FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3778F8u;
    // 0x3778fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3778F8u, 0x377900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377900u;
label_377900:
    // 0x377900: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x377900u;
    {
        const bool branch_taken_0x377900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377900) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x377908u;
label_377908:
    // 0x377908: 0x92430522  lbu         $v1, 0x522($s2)
    ctx->pc = 0x377908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x37790c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x377910: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x377910u;
    {
        const bool branch_taken_0x377910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377910u;
        // 0x377914: 0xa2430522  sb          $v1, 0x522($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377910) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x377918u;
label_377918:
    // 0x377918: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x377918u;
    SET_GPR_U32(ctx, 31, 0x377920u);
    ctx->pc = 0x37791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377918u;
    // 0x37791c: 0x8e4405b0  lw          $a0, 0x5B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x377918u, 0x377920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377920u;
label_377920:
    // 0x377920: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x377920u;
    SET_GPR_U32(ctx, 31, 0x377928u);
    ctx->pc = 0x377924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377920u;
    // 0x377924: 0x8e4405b4  lw          $a0, 0x5B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x377920u, 0x377928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377928u;
label_377928:
    // 0x377928: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x377928u;
    SET_GPR_U32(ctx, 31, 0x377930u);
    ctx->pc = 0x37792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377928u;
    // 0x37792c: 0x8e4405c4  lw          $a0, 0x5C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x377928u, 0x377930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377930u;
label_377930:
    // 0x377930: 0x92450522  lbu         $a1, 0x522($s2)
    ctx->pc = 0x377930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x377934: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x377934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x377938: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x377938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x37793c: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x37793cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x377940: 0x24841b6a  addiu       $a0, $a0, 0x1B6A
    ctx->pc = 0x377940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7018));
    // 0x377944: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x377944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x377948: 0xa2450522  sb          $a1, 0x522($s2)
    ctx->pc = 0x377948u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 5));
    // 0x37794c: 0xa64005e4  sh          $zero, 0x5E4($s2)
    ctx->pc = 0x37794cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x377950: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x377950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x377954: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x377954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x377958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x377958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37795c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x37795cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x377960: 0x924605e0  lbu         $a2, 0x5E0($s2)
    ctx->pc = 0x377960u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x377964: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x377964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x377968: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x377968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x37796c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x37796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x377970: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x377970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x377974: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x377974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x377978: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x377978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37797c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x37797cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x377980: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x377980u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x377984: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x377984u;
    {
        const bool branch_taken_0x377984 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x377988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377984u;
        // 0x377988: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x377984) {
            ctx->pc = 0x377998u;
            goto label_377998;
        }
    }
    ctx->pc = 0x37798Cu;
    // 0x37798c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37798cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x377990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x377990u;
    {
        const bool branch_taken_0x377990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377990u;
        // 0x377994: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x377990) {
            ctx->pc = 0x3779B4u;
            goto label_3779b4;
        }
    }
    ctx->pc = 0x377998u;
label_377998:
    // 0x377998: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x377998u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x37799c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37799cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3779a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3779a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3779a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3779a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3779a8: 0x0  nop
    ctx->pc = 0x3779a8u;
    // NOP
    // 0x3779ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3779acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3779b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3779b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3779b4:
    // 0x3779b4: 0x3c043580  lui         $a0, 0x3580
    ctx->pc = 0x3779b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13696 << 16));
    // 0x3779b8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3779b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3779bc: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3779bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3779c0: 0x24631b68  addiu       $v1, $v1, 0x1B68
    ctx->pc = 0x3779c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7016));
    // 0x3779c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3779c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3779c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3779c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3779cc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3779ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3779d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3779d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3779d4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3779d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3779d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3779d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3779dc: 0x0  nop
    ctx->pc = 0x3779dcu;
    // NOP
    // 0x3779e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3779e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3779e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3779e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3779e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3779e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3779ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3779ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3779f0: 0x0  nop
    ctx->pc = 0x3779f0u;
    // NOP
    // 0x3779f4: 0xa64305e6  sh          $v1, 0x5E6($s2)
    ctx->pc = 0x3779f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1510), (uint16_t)GPR_U32(ctx, 3));
label_3779f8:
    // 0x3779f8: 0x864305e4  lh          $v1, 0x5E4($s2)
    ctx->pc = 0x3779f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x3779fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3779fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x377a00: 0xa64305e4  sh          $v1, 0x5E4($s2)
    ctx->pc = 0x377a00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1508), (uint16_t)GPR_U32(ctx, 3));
    // 0x377a04: 0x864405e4  lh          $a0, 0x5E4($s2)
    ctx->pc = 0x377a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1508)));
    // 0x377a08: 0x864305e6  lh          $v1, 0x5E6($s2)
    ctx->pc = 0x377a08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1510)));
    // 0x377a0c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x377a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x377a10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x377A10u;
    {
        const bool branch_taken_0x377a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377a10) {
            ctx->pc = 0x377A20u;
            goto label_377a20;
        }
    }
    ctx->pc = 0x377A18u;
    // 0x377a18: 0xa2400522  sb          $zero, 0x522($s2)
    ctx->pc = 0x377a18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 0));
    // 0x377a1c: 0x0  nop
    ctx->pc = 0x377a1cu;
    // NOP
label_377a20:
    // 0x377a20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x377a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377a24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x377a24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377a28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x377a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377a2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x377a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377a30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x377a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x377a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x377A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A3Cu;
        // 0x377a40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377A44u;
}
