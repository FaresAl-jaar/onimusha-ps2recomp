#include <cstdio>
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

// Function: sub_00108348
// Address: 0x108348 - 0x1084c8
void sub_00108348_0x108348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108348_0x108348");
#endif

    switch (ctx->pc) {
        case 0x1083d8u: goto label_1083d8;
        case 0x108434u: goto label_108434;
        case 0x108458u: goto label_108458;
        case 0x10846cu: goto label_10846c;
        default: break;
    }

    ctx->pc = 0x108348u;

    // 0x108348: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x108348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10834c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108354: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108358: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x108358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10835c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10835cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108360: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x108360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x108364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108368: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x108368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10836c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x108370: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108374: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108378: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10837c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108380: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108384: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x108384u;
    SET_GPR_U64(ctx, 17, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x108388: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x108388u;
    {
        const bool branch_taken_0x108388 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x108388) {
            ctx->pc = 0x10838Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108388u;
            // 0x10838c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x108390u;
    // 0x108390: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108394: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x108394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x108398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108398u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10839c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1083a0: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1083A0u;
    {
        const bool branch_taken_0x1083a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1083a0) {
            ctx->pc = 0x1083A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1083A0u;
            // 0x1083a4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x1083A8u;
    // 0x1083a8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x1083a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x1083ac: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x1083acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x1083b0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x1083b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x1083b4: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1083b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1083b8: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x1083b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x1083bc: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x1083bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x1083c0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x1083c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x1083c4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x1083c8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x1083c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x1083cc: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x1083ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x1083d0: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x1083d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x1083d4: 0x0  nop
    ctx->pc = 0x1083d4u;
    // NOP
label_1083d8:
    { static uint64_t last[5]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[5]={(uint64_t)(GPR_U64(ctx,17)),(uint64_t)(READ32(GPR_U32(ctx,16)+0x82c)),(uint64_t)((uint64_t)runtime->memory().readIORegister(0x10002020)),(uint64_t)((uint64_t)runtime->memory().readIORegister(0x1000b420)),(uint64_t)((uint64_t)runtime->memory().readIORegister(0x1000b400)),}; bool chg=first; for(int i=0;i<5;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<20) { ++lines; first=false; for(int i=0;i<5;++i) last[i]=cur[i]; fprintf(stderr,"[px ipuwait] hit=%u " "s1=0x%llx cmd82c=0x%llx bp=0x%llx d4qwc=0x%llx d4chcr=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4]); } }
    // 0x1083d8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1083d8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 21), 0))); // MMIO: 0x10002020
    // 0x1083dc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1083dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1083e0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x1083e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x1083e4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x1083e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1083e8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x1083e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1083ec: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1083ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1083f0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1083f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1083f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1083f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1083f8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x1083f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1083fc: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1083FCu;
    {
        const bool branch_taken_0x1083fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x108400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083FCu;
        // 0x108400: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083fc) {
            ctx->pc = 0x108414u;
            goto label_108414;
        }
    }
    ctx->pc = 0x108404u;
    // 0x108404: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x108404u;
    {
        const bool branch_taken_0x108404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x108404) {
            ctx->pc = 0x108408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108404u;
            // 0x108408: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x108418u;
            goto label_108418;
        }
    }
    ctx->pc = 0x10840Cu;
    // 0x10840c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x10840Cu;
    {
        const bool branch_taken_0x10840c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x10840c) {
            ctx->pc = 0x108410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10840Cu;
            // 0x108410: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108444u;
            goto label_108444;
        }
    }
    ctx->pc = 0x108414u;
label_108414:
    // 0x108414: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x108414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_108418:
    // 0x108418: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108418u;
    {
        const bool branch_taken_0x108418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108418u;
        // 0x10841c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108418) {
            ctx->pc = 0x108444u;
            goto label_108444;
        }
    }
    ctx->pc = 0x108420u;
    // 0x108420: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x108420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x108424: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108424u;
    {
        const bool branch_taken_0x108424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108424u;
        // 0x108428: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108424) {
            ctx->pc = 0x108444u;
            goto label_108444;
        }
    }
    ctx->pc = 0x10842Cu;
    // 0x10842c: 0xc042efe  jal         func_10BBF8
    ctx->pc = 0x10842Cu;
    SET_GPR_U32(ctx, 31, 0x108434u);
    ctx->pc = 0x108430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10842Cu;
    // 0x108430: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBF8u, 0x10842Cu, 0x108434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108434u;
label_108434:
    // 0x108434: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x108434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x108438: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x108438u;
    {
        const bool branch_taken_0x108438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108438u;
        // 0x10843c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108438) {
            ctx->pc = 0x108464u;
            goto label_108464;
        }
    }
    ctx->pc = 0x108440u;
    // 0x108440: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x108440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_108444:
    // 0x108444: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x108444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x108448: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108448u;
    {
        const bool branch_taken_0x108448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108448u;
        // 0x10844c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108448) {
            ctx->pc = 0x108474u;
            goto label_108474;
        }
    }
    ctx->pc = 0x108450u;
    // 0x108450: 0xc042efe  jal         func_10BBF8
    ctx->pc = 0x108450u;
    SET_GPR_U32(ctx, 31, 0x108458u);
    ctx->pc = 0x108454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108450u;
    // 0x108454: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBF8u, 0x108450u, 0x108458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108458u;
label_108458:
    // 0x108458: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x108458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10845c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10845Cu;
    {
        const bool branch_taken_0x10845c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10845Cu;
        // 0x108460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10845c) {
            ctx->pc = 0x108474u;
            goto label_108474;
        }
    }
    ctx->pc = 0x108464u;
label_108464:
    // 0x108464: 0xc0434dc  jal         func_10D370
    ctx->pc = 0x108464u;
    SET_GPR_U32(ctx, 31, 0x10846Cu);
    ctx->pc = 0x10D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D370u, 0x108464u, 0x10846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10846Cu;
label_10846c:
    // 0x10846c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10846Cu;
    {
        const bool branch_taken_0x10846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10846Cu;
        // 0x108470: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10846c) {
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x108474u;
label_108474:
    // 0x108474: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x108474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x108478: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x108478u;
    {
        const bool branch_taken_0x108478 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x108478) {
            ctx->pc = 0x10847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108478u;
            // 0x10847c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108494u;
            goto label_108494;
        }
    }
    ctx->pc = 0x108480u;
    // 0x108480: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x108484: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x108484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x108488: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x108488u;
    {
        const bool branch_taken_0x108488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108488) {
            ctx->pc = 0x1083D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1083d8;
        }
    }
    ctx->pc = 0x108490u;
    // 0x108490: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x108490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_108494:
    // 0x108494: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x108494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108498: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x108498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10849c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10849cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1084a0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1084a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1084a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1084a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1084a8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1084a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1084ac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1084acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1084b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1084b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1084b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1084b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1084b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1084b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1084bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1084bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1084c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1084C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1084C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084C0u;
        // 0x1084c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1084C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1084C8u;
}
