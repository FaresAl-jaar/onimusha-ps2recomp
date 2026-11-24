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

// Function: sub_001081E0
// Address: 0x1081e0 - 0x108348
void sub_001081E0_0x1081e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001081E0_0x1081e0");
#endif

    switch (ctx->pc) {
        case 0x108268u: goto label_108268;
        case 0x1082c4u: goto label_1082c4;
        case 0x1082e8u: goto label_1082e8;
        case 0x1082fcu: goto label_1082fc;
        default: break;
    }

    ctx->pc = 0x1081e0u;

    // 0x1081e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1081e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1081e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1081e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1081e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1081e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1081ec: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1081ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1081f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1081f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1081f4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1081f8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1081f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1081fc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1081fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x108200: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x108200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x108204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108208: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x108208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10820c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10820cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108210: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108214: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108218: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10821c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108220: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x108228: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10822c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10822cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x108230: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x108230u;
    {
        const bool branch_taken_0x108230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108230) {
            ctx->pc = 0x108234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108230u;
            // 0x108234: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108318u;
            goto label_108318;
        }
    }
    ctx->pc = 0x108238u;
    // 0x108238: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x10823c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x108240: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x108240u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x108244: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x108248: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x108248u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x10824c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x10824cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x108250: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x108250u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x108254: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x108254u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x108258: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x108258u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x10825c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x10825cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x108260: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x108260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x108264: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x108264u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_108268:
    // 0x108268: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x108268u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x10002020
    // 0x10826c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x10826cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x108270: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x108270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x108274: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x108274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x108278: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x108278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x10827c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x108280: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x108280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x108284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x108284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108288: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x108288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x10828c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x10828Cu;
    {
        const bool branch_taken_0x10828c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x108290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10828Cu;
        // 0x108290: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10828c) {
            ctx->pc = 0x1082A4u;
            goto label_1082a4;
        }
    }
    ctx->pc = 0x108294u;
    // 0x108294: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x108294u;
    {
        const bool branch_taken_0x108294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x108294) {
            ctx->pc = 0x108298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108294u;
            // 0x108298: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1082A8u;
            goto label_1082a8;
        }
    }
    ctx->pc = 0x10829Cu;
    // 0x10829c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10829Cu;
    {
        const bool branch_taken_0x10829c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x10829c) {
            ctx->pc = 0x1082A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10829Cu;
            // 0x1082a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1082D4u;
            goto label_1082d4;
        }
    }
    ctx->pc = 0x1082A4u;
label_1082a4:
    // 0x1082a4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1082a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1082a8:
    // 0x1082a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1082A8u;
    {
        const bool branch_taken_0x1082a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082A8u;
        // 0x1082ac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082a8) {
            ctx->pc = 0x1082D4u;
            goto label_1082d4;
        }
    }
    ctx->pc = 0x1082B0u;
    // 0x1082b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1082b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1082b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1082B4u;
    {
        const bool branch_taken_0x1082b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082B4u;
        // 0x1082b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082b4) {
            ctx->pc = 0x1082D4u;
            goto label_1082d4;
        }
    }
    ctx->pc = 0x1082BCu;
    // 0x1082bc: 0xc042efe  jal         func_10BBF8
    ctx->pc = 0x1082BCu;
    SET_GPR_U32(ctx, 31, 0x1082C4u);
    ctx->pc = 0x1082C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082BCu;
    // 0x1082c0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBF8u, 0x1082BCu, 0x1082C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082C4u;
label_1082c4:
    // 0x1082c4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1082c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1082c8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1082C8u;
    {
        const bool branch_taken_0x1082c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C8u;
        // 0x1082cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082c8) {
            ctx->pc = 0x1082F4u;
            goto label_1082f4;
        }
    }
    ctx->pc = 0x1082D0u;
    // 0x1082d0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1082d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1082d4:
    // 0x1082d4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1082d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1082d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1082D8u;
    {
        const bool branch_taken_0x1082d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1082DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082D8u;
        // 0x1082dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082d8) {
            ctx->pc = 0x108304u;
            goto label_108304;
        }
    }
    ctx->pc = 0x1082E0u;
    // 0x1082e0: 0xc042efe  jal         func_10BBF8
    ctx->pc = 0x1082E0u;
    SET_GPR_U32(ctx, 31, 0x1082E8u);
    ctx->pc = 0x1082E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082E0u;
    // 0x1082e4: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBF8u, 0x1082E0u, 0x1082E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082E8u;
label_1082e8:
    // 0x1082e8: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x1082e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x1082ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1082ECu;
    {
        const bool branch_taken_0x1082ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082ECu;
        // 0x1082f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082ec) {
            ctx->pc = 0x108304u;
            goto label_108304;
        }
    }
    ctx->pc = 0x1082F4u;
label_1082f4:
    // 0x1082f4: 0xc0434dc  jal         func_10D370
    ctx->pc = 0x1082F4u;
    SET_GPR_U32(ctx, 31, 0x1082FCu);
    ctx->pc = 0x10D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D370u, 0x1082F4u, 0x1082FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082FCu;
label_1082fc:
    // 0x1082fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1082FCu;
    {
        const bool branch_taken_0x1082fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082FCu;
        // 0x108300: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082fc) {
            ctx->pc = 0x108318u;
            goto label_108318;
        }
    }
    ctx->pc = 0x108304u;
label_108304:
    // 0x108304: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108308: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x108308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x10830c: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x10830Cu;
    {
        const bool branch_taken_0x10830c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x10830c) {
            ctx->pc = 0x108268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108268;
        }
    }
    ctx->pc = 0x108314u;
    // 0x108314: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x108314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_108318:
    // 0x108318: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x108318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10831c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10831cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108320: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108324: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108324u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108328: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10832c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10832cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108330: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108334: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108338: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10833c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10833cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108340: 0x3e00008  jr          $ra
    ctx->pc = 0x108340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108340u;
        // 0x108344: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108348u;
}
