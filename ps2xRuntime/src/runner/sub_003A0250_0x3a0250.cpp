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

// Function: sub_003A0250
// Address: 0x3a0250 - 0x3a03c0
void sub_003A0250_0x3a0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0250_0x3a0250");
#endif

    switch (ctx->pc) {
        case 0x3a0320u: goto label_3a0320;
        case 0x3a03acu: goto label_3a03ac;
        default: break;
    }

    ctx->pc = 0x3a0250u;

    // 0x3a0250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a025c: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x3a025cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3a0260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0264: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a0264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0268: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A0268u;
    {
        const bool branch_taken_0x3a0268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0268u;
        // 0x3a026c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0268) {
            ctx->pc = 0x3A02E0u;
            goto label_3a02e0;
        }
    }
    ctx->pc = 0x3A0270u;
    // 0x3a0270: 0x10a60015  beq         $a1, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A0270u;
    {
        const bool branch_taken_0x3a0270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0270u;
        // 0x3a0274: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0270) {
            ctx->pc = 0x3A02C8u;
            goto label_3a02c8;
        }
    }
    ctx->pc = 0x3A0278u;
    // 0x3a0278: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0278u;
    {
        const bool branch_taken_0x3a0278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0278) {
            ctx->pc = 0x3A0290u;
            goto label_3a0290;
        }
    }
    ctx->pc = 0x3A0280u;
    // 0x3a0280: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A0280u;
    {
        const bool branch_taken_0x3a0280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0280) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A0288u;
    // 0x3a0288: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A0288u;
    {
        const bool branch_taken_0x3a0288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0288) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A0290u;
label_3a0290:
    // 0x3a0290: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x3a0290u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a0294: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3a0294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a0298: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a0298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a029c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a02a0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3a02a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a02a4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A02A4u;
    {
        const bool branch_taken_0x3a02a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a02a4) {
            ctx->pc = 0x3A02C0u;
            goto label_3a02c0;
        }
    }
    ctx->pc = 0x3A02ACu;
    // 0x3a02ac: 0xa2060005  sb          $a2, 0x5($s0)
    ctx->pc = 0x3a02acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a02b0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a02b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a02b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A02B4u;
    {
        const bool branch_taken_0x3a02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02B4u;
        // 0x3a02b8: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02b4) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A02BCu;
    // 0x3a02bc: 0x0  nop
    ctx->pc = 0x3a02bcu;
    // NOP
label_3a02c0:
    // 0x3a02c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A02C0u;
    {
        const bool branch_taken_0x3a02c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02C0u;
        // 0x3a02c4: 0xa2040002  sb          $a0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02c0) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A02C8u;
label_3a02c8:
    // 0x3a02c8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a02cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a02d0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A02D0u;
    {
        const bool branch_taken_0x3a02d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02D0u;
        // 0x3a02d4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02d0) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A02D8u;
    // 0x3a02d8: 0xa2040005  sb          $a0, 0x5($s0)
    ctx->pc = 0x3a02d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a02dc: 0x0  nop
    ctx->pc = 0x3a02dcu;
    // NOP
label_3a02e0:
    // 0x3a02e0: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x3a02e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a02e4: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a02e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a02e8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3a02e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a02ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A02ECu;
    {
        const bool branch_taken_0x3a02ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a02ec) {
            ctx->pc = 0x3A0300u;
            goto label_3a0300;
        }
    }
    ctx->pc = 0x3A02F4u;
    // 0x3a02f4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a02f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a02f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A02F8u;
    {
        const bool branch_taken_0x3a02f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02F8u;
        // 0x3a02fc: 0xa2000005  sb          $zero, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02f8) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A0300u;
label_3a0300:
    // 0x3a0300: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a0300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0304: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a0304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a0308:
    // 0x3a0308: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a0308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a030c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A030Cu;
    {
        const bool branch_taken_0x3a030c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A030Cu;
        // 0x3a0310: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a030c) {
            ctx->pc = 0x3A03B0u;
            goto label_3a03b0;
        }
    }
    ctx->pc = 0x3A0314u;
    // 0x3a0314: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3a0314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a0318: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3A0318u;
    SET_GPR_U32(ctx, 31, 0x3A0320u);
    ctx->pc = 0x3A031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0318u;
    // 0x3a031c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3A0318u, 0x3A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0320u;
label_3a0320:
    // 0x3a0320: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3a0320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3a0324: 0x3c033420  lui         $v1, 0x3420
    ctx->pc = 0x3a0324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13344 << 16));
    // 0x3a0328: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3a0328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3a032c: 0x34630044  ori         $v1, $v1, 0x44
    ctx->pc = 0x3a032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)68);
    // 0x3a0330: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3a0330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x3a0334: 0x3c048900  lui         $a0, 0x8900
    ctx->pc = 0x3a0334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35072 << 16));
    // 0x3a0338: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3a0338u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a033c: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x3a033cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x3a0340: 0x346c7000  ori         $t4, $v1, 0x7000
    ctx->pc = 0x3a0340u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x3a0344: 0x346a9000  ori         $t2, $v1, 0x9000
    ctx->pc = 0x3a0344u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x3a0348: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3a0348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3a034c: 0x340bfffc  ori         $t3, $zero, 0xFFFC
    ctx->pc = 0x3a034cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x3a0350: 0x34672000  ori         $a3, $v1, 0x2000
    ctx->pc = 0x3a0350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3a0354: 0x34897000  ori         $t1, $a0, 0x7000
    ctx->pc = 0x3a0354u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x3a0358: 0x34889000  ori         $t0, $a0, 0x9000
    ctx->pc = 0x3a0358u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36864);
    // 0x3a035c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3a035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a0360: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a0360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a0364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a0364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0368: 0x66e00  sll         $t5, $a2, 24
    ctx->pc = 0x3a0368u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3a036c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3a036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3a0370: 0xac4d0008  sw          $t5, 0x8($v0)
    ctx->pc = 0x3a0370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 13));
    // 0x3a0374: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a0374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0378: 0xac4c0010  sw          $t4, 0x10($v0)
    ctx->pc = 0x3a0378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 12));
    // 0x3a037c: 0xac4b0014  sw          $t3, 0x14($v0)
    ctx->pc = 0x3a037cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 11));
    // 0x3a0380: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x3a0380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
    // 0x3a0384: 0xac4b001c  sw          $t3, 0x1C($v0)
    ctx->pc = 0x3a0384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 11));
    // 0x3a0388: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x3a0388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x3a038c: 0xac4b0024  sw          $t3, 0x24($v0)
    ctx->pc = 0x3a038cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 11));
    // 0x3a0390: 0xac480028  sw          $t0, 0x28($v0)
    ctx->pc = 0x3a0390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 8));
    // 0x3a0394: 0xac4b002c  sw          $t3, 0x2C($v0)
    ctx->pc = 0x3a0394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 11));
    // 0x3a0398: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x3a0398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a039c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3a039cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3a03a0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x3a03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x3a03a4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3A03A4u;
    SET_GPR_U32(ctx, 31, 0x3A03ACu);
    ctx->pc = 0x3A03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03A4u;
    // 0x3a03a8: 0xa043000f  sb          $v1, 0xF($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3A03A4u, 0x3A03ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03ACu;
label_3a03ac:
    // 0x3a03ac: 0x0  nop
    ctx->pc = 0x3a03acu;
    // NOP
label_3a03b0:
    // 0x3a03b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a03b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a03b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a03b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a03b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A03B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03B8u;
        // 0x3a03bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A03B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A03C0u;
}
