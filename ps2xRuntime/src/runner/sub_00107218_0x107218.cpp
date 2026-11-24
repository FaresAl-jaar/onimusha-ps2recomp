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

// Function: sub_00107218
// Address: 0x107218 - 0x107544
void sub_00107218_0x107218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107218_0x107218");
#endif

    switch (ctx->pc) {
        case 0x10725cu: goto label_10725c;
        case 0x107268u: goto label_107268;
        case 0x10729cu: goto label_10729c;
        case 0x1072e8u: goto label_1072e8;
        case 0x10730cu: goto label_10730c;
        case 0x107380u: goto label_107380;
        case 0x1073b0u: goto label_1073b0;
        case 0x1073e4u: goto label_1073e4;
        case 0x10740cu: goto label_10740c;
        case 0x107438u: goto label_107438;
        case 0x107470u: goto label_107470;
        case 0x10749cu: goto label_10749c;
        case 0x1074c8u: goto label_1074c8;
        case 0x1074f4u: goto label_1074f4;
        default: break;
    }

    ctx->pc = 0x107218u;

    // 0x107218: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x107218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x10721c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x10721cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x107220: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x107220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x107224: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x107224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x107228: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x107228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10722c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10722cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107230: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x107230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x107234: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x107234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x107238: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x107238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x10723c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x10723cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107240: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x107240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x107244: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x107244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x107248: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x107248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x10724c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x10724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x107250: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x107250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x107254: 0xc042626  jal         func_109898
    ctx->pc = 0x107254u;
    SET_GPR_U32(ctx, 31, 0x10725Cu);
    ctx->pc = 0x107258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107254u;
    // 0x107258: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109898u, 0x107254u, 0x10725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10725Cu;
label_10725c:
    // 0x10725c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x10725Cu;
    {
        const bool branch_taken_0x10725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10725Cu;
        // 0x107260: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10725c) {
            ctx->pc = 0x107520u;
            goto label_107520;
        }
    }
    ctx->pc = 0x107264u;
    // 0x107264: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x107264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_107268:
    // 0x107268: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10726c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x10726cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x107270: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x107270u;
    {
        const bool branch_taken_0x107270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107270) {
            ctx->pc = 0x107274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107270u;
            // 0x107274: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107280u;
            goto label_107280;
        }
    }
    ctx->pc = 0x107278u;
    // 0x107278: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x107278u;
    {
        const bool branch_taken_0x107278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107278u;
        // 0x10727c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107278) {
            ctx->pc = 0x10751Cu;
            goto label_10751c;
        }
    }
    ctx->pc = 0x107280u;
label_107280:
    // 0x107280: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x107280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107288: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x107288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10728c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x10728cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x107290: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x107290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x107294: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107294u;
    SET_GPR_U32(ctx, 31, 0x10729Cu);
    ctx->pc = 0x107298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107294u;
    // 0x107298: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107294u, 0x10729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10729Cu;
label_10729c:
    // 0x10729c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1072a0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1072a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1072a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1072a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x1072a8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1072A8u;
    {
        const bool branch_taken_0x1072a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072A8u;
        // 0x1072ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072a8) {
            ctx->pc = 0x107334u;
            goto label_107334;
        }
    }
    ctx->pc = 0x1072B0u;
    // 0x1072b0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1072b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1072b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1072b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x1072b8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1072b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1072bc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1072BCu;
    {
        const bool branch_taken_0x1072bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1072C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072BCu;
        // 0x1072c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072bc) {
            ctx->pc = 0x107338u;
            goto label_107338;
        }
    }
    ctx->pc = 0x1072C4u;
    // 0x1072c4: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x1072c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x1072c8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x1072c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x1072cc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1072ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1072d0: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1072d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1072d4: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x1072d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x1072d8: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x1072d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x1072dc: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x1072dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x1072e0: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x1072e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x1072e4: 0x0  nop
    ctx->pc = 0x1072e4u;
    // NOP
label_1072e8:
    // 0x1072e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1072e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x1072ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1072ECu;
    {
        const bool branch_taken_0x1072ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1072ec) {
            ctx->pc = 0x1072F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1072ECu;
            // 0x1072f0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107310u;
            goto label_107310;
        }
    }
    ctx->pc = 0x1072F4u;
    // 0x1072f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1072f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1072fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1072FCu;
    {
        const bool branch_taken_0x1072fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1072fc) {
            ctx->pc = 0x107300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1072FCu;
            // 0x107300: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107310u;
            goto label_107310;
        }
    }
    ctx->pc = 0x107304u;
    // 0x107304: 0xc042efe  jal         func_10BBF8
    ctx->pc = 0x107304u;
    SET_GPR_U32(ctx, 31, 0x10730Cu);
    ctx->pc = 0x107308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107304u;
    // 0x107308: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBF8u, 0x107304u, 0x10730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10730Cu;
label_10730c:
    // 0x10730c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_107310:
    // 0x107310: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x107310u;
    {
        const bool branch_taken_0x107310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107310) {
            ctx->pc = 0x107378u;
            goto label_107378;
        }
    }
    ctx->pc = 0x107318u;
    // 0x107318: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10731c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10731Cu;
    {
        const bool branch_taken_0x10731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10731Cu;
        // 0x107320: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10731c) {
            ctx->pc = 0x107338u;
            goto label_107338;
        }
    }
    ctx->pc = 0x107324u;
    // 0x107324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x107324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107328: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x107328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10732c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10732Cu;
    {
        const bool branch_taken_0x10732c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10732c) {
            ctx->pc = 0x1072E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1072e8;
        }
    }
    ctx->pc = 0x107334u;
label_107334:
    // 0x107334: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_107338:
    // 0x107338: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10733c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107340: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107344: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107344u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x107348: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107348u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x10734c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107350: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107350u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107354: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x107354u;
    {
        const bool branch_taken_0x107354 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x107358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107354u;
        // 0x107358: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107354) {
            ctx->pc = 0x107388u;
            goto label_107388;
        }
    }
    ctx->pc = 0x10735Cu;
    // 0x10735c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x10735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107360u;
    {
        const bool branch_taken_0x107360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107360u;
        // 0x107364: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107360) {
            ctx->pc = 0x107370u;
            goto label_107370;
        }
    }
    ctx->pc = 0x107368u;
    // 0x107368: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x107368u;
    {
        const bool branch_taken_0x107368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107368u;
        // 0x10736c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107368) {
            ctx->pc = 0x10738Cu;
            goto label_10738c;
        }
    }
    ctx->pc = 0x107370u;
label_107370:
    // 0x107370: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107370u;
    {
        const bool branch_taken_0x107370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107370u;
        // 0x107374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107370) {
            ctx->pc = 0x10738Cu;
            goto label_10738c;
        }
    }
    ctx->pc = 0x107378u;
label_107378:
    // 0x107378: 0xc0434dc  jal         func_10D370
    ctx->pc = 0x107378u;
    SET_GPR_U32(ctx, 31, 0x107380u);
    ctx->pc = 0x10D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D370u, 0x107378u, 0x107380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107380u;
label_107380:
    // 0x107380: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107380u;
    {
        const bool branch_taken_0x107380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107380u;
        // 0x107384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107380) {
            ctx->pc = 0x1073B4u;
            goto label_1073b4;
        }
    }
    ctx->pc = 0x107388u;
label_107388:
    // 0x107388: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10738c:
    // 0x10738c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x10738cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x107390: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107394: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107398u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10739c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1073a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1073A0u;
    {
        const bool branch_taken_0x1073a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073A0u;
        // 0x1073a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073a0) {
            ctx->pc = 0x1073B0u;
            goto label_1073b0;
        }
    }
    ctx->pc = 0x1073A8u;
    // 0x1073a8: 0xc043504  jal         func_10D410
    ctx->pc = 0x1073A8u;
    SET_GPR_U32(ctx, 31, 0x1073B0u);
    ctx->pc = 0x1073ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073A8u;
    // 0x1073ac: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D410u, 0x1073A8u, 0x1073B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073B0u;
label_1073b0:
    // 0x1073b0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1073b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1073b4:
    // 0x1073b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1073B4u;
    {
        const bool branch_taken_0x1073b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1073b4) {
            ctx->pc = 0x1073B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1073B4u;
            // 0x1073b8: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1073D0u;
            goto label_1073d0;
        }
    }
    ctx->pc = 0x1073BCu;
    // 0x1073bc: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x1073bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1073c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1073c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1073c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1073c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1073c8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1073C8u;
    {
        const bool branch_taken_0x1073c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073C8u;
        // 0x1073cc: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073c8) {
            ctx->pc = 0x10751Cu;
            goto label_10751c;
        }
    }
    ctx->pc = 0x1073D0u;
label_1073d0:
    // 0x1073d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1073D0u;
    {
        const bool branch_taken_0x1073d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1073D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D0u;
        // 0x1073d4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073d0) {
            ctx->pc = 0x10741Cu;
            goto label_10741c;
        }
    }
    ctx->pc = 0x1073D8u;
    // 0x1073d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1073d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073dc: 0xc04216c  jal         func_1085B0
    ctx->pc = 0x1073DCu;
    SET_GPR_U32(ctx, 31, 0x1073E4u);
    ctx->pc = 0x1073E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073DCu;
    // 0x1073e0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x1073DCu, 0x1073E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073E4u;
label_1073e4:
    // 0x1073e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1073E4u;
    {
        const bool branch_taken_0x1073e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073e4) {
            ctx->pc = 0x1073E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1073E4u;
            // 0x1073e8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1073FCu;
            goto label_1073fc;
        }
    }
    ctx->pc = 0x1073ECu;
    // 0x1073ec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1073ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1073f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1073F0u;
    {
        const bool branch_taken_0x1073f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073f0) {
            ctx->pc = 0x107404u;
            goto label_107404;
        }
    }
    ctx->pc = 0x1073F8u;
    // 0x1073f8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1073f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_1073fc:
    // 0x1073fc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1073FCu;
    {
        const bool branch_taken_0x1073fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073FCu;
        // 0x107400: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073fc) {
            ctx->pc = 0x10751Cu;
            goto label_10751c;
        }
    }
    ctx->pc = 0x107404u;
label_107404:
    // 0x107404: 0xc04201a  jal         func_108068
    ctx->pc = 0x107404u;
    SET_GPR_U32(ctx, 31, 0x10740Cu);
    ctx->pc = 0x107408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107404u;
    // 0x107408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108068u, 0x107404u, 0x10740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10740Cu;
label_10740c:
    // 0x10740c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x10740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x107410: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x107410u;
    {
        const bool branch_taken_0x107410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107410u;
        // 0x107414: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107410) {
            ctx->pc = 0x107478u;
            goto label_107478;
        }
    }
    ctx->pc = 0x107418u;
    // 0x107418: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x107418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10741c:
    // 0x10741c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x10741cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x107420: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107420u;
    {
        const bool branch_taken_0x107420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107420u;
        // 0x107424: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107420) {
            ctx->pc = 0x107440u;
            goto label_107440;
        }
    }
    ctx->pc = 0x107428u;
    // 0x107428: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x107428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10742c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107430: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x107430u;
    SET_GPR_U32(ctx, 31, 0x107438u);
    ctx->pc = 0x107434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107430u;
    // 0x107434: 0x24a51ed8  addiu       $a1, $a1, 0x1ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x107430u, 0x107438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107438u;
label_107438:
    // 0x107438: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x107438u;
    {
        const bool branch_taken_0x107438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107438u;
        // 0x10743c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107438) {
            ctx->pc = 0x10751Cu;
            goto label_10751c;
        }
    }
    ctx->pc = 0x107440u;
label_107440:
    // 0x107440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107444: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x107444u;
    {
        const bool branch_taken_0x107444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107444u;
        // 0x107448: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107444) {
            ctx->pc = 0x107484u;
            goto label_107484;
        }
    }
    ctx->pc = 0x10744Cu;
    // 0x10744c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x10744cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x107450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107454: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x107454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x107458: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x107458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10745c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x10745cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107460: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x107460u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107464: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x107464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107468: 0xc041ec4  jal         func_107B10
    ctx->pc = 0x107468u;
    SET_GPR_U32(ctx, 31, 0x107470u);
    ctx->pc = 0x10746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107468u;
    // 0x10746c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B10u, 0x107468u, 0x107470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107470u;
label_107470:
    // 0x107470: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x107470u;
    {
        const bool branch_taken_0x107470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107470u;
        // 0x107474: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107470) {
            ctx->pc = 0x1074A8u;
            goto label_1074a8;
        }
    }
    ctx->pc = 0x107478u;
label_107478:
    // 0x107478: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x107478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x10747c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10747Cu;
    {
        const bool branch_taken_0x10747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10747Cu;
        // 0x107480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10747c) {
            ctx->pc = 0x10751Cu;
            goto label_10751c;
        }
    }
    ctx->pc = 0x107484u;
label_107484:
    // 0x107484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10748c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x10748cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x107490: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x107490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107494: 0xc0421c6  jal         func_108718
    ctx->pc = 0x107494u;
    SET_GPR_U32(ctx, 31, 0x10749Cu);
    ctx->pc = 0x107498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107494u;
    // 0x107498: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108718u, 0x107494u, 0x10749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10749Cu;
label_10749c:
    // 0x10749c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10749Cu;
    {
        const bool branch_taken_0x10749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10749Cu;
        // 0x1074a0: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10749c) {
            ctx->pc = 0x1074D0u;
            goto label_1074d0;
        }
    }
    ctx->pc = 0x1074A4u;
    // 0x1074a4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1074a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1074a8:
    // 0x1074a8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1074a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074ac: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1074acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1074b0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1074b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074b4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1074b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1074b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1074b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074bc: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x1074bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1074c0: 0xc0419b8  jal         func_1066E0
    ctx->pc = 0x1074C0u;
    SET_GPR_U32(ctx, 31, 0x1074C8u);
    ctx->pc = 0x1074C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074C0u;
    // 0x1074c4: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1066E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1066E0u, 0x1074C0u, 0x1074C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074C8u;
label_1074c8:
    // 0x1074c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1074C8u;
    {
        const bool branch_taken_0x1074c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1074CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074C8u;
        // 0x1074cc: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074c8) {
            ctx->pc = 0x1074DCu;
            goto label_1074dc;
        }
    }
    ctx->pc = 0x1074D0u;
label_1074d0:
    // 0x1074d0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1074d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1074d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1074D4u;
    {
        const bool branch_taken_0x1074d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074D4u;
        // 0x1074d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074d4) {
            ctx->pc = 0x10751Cu;
            goto label_10751c;
        }
    }
    ctx->pc = 0x1074DCu;
label_1074dc:
    // 0x1074dc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1074DCu;
    {
        const bool branch_taken_0x1074dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1074dc) {
            ctx->pc = 0x1074E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1074DCu;
            // 0x1074e0: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1074FCu;
            goto label_1074fc;
        }
    }
    ctx->pc = 0x1074E4u;
    // 0x1074e4: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x1074e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1074e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1074e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074ec: 0xc041b6e  jal         func_106DB8
    ctx->pc = 0x1074ECu;
    SET_GPR_U32(ctx, 31, 0x1074F4u);
    ctx->pc = 0x1074F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074ECu;
    // 0x1074f0: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DB8u, 0x1074ECu, 0x1074F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074F4u;
label_1074f4:
    // 0x1074f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1074f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1074f8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1074f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_1074fc:
    // 0x1074fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1074fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x107500: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x107500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x107504: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x107504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x107508: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x107508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10750c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107510: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x107510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x107514: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x107514u;
    {
        const bool branch_taken_0x107514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107514u;
        // 0x107518: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107514) {
            ctx->pc = 0x107268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107268;
        }
    }
    ctx->pc = 0x10751Cu;
label_10751c:
    // 0x10751c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x10751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_107520:
    // 0x107520: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x107520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x107524: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x107524u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x107528: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x107528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10752c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x10752cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107530: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x107530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107534: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x107534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107538: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x107538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10753c: 0x3e00008  jr          $ra
    ctx->pc = 0x10753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10753Cu;
        // 0x107540: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107544u;
}
