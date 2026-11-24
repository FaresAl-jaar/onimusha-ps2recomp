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

// Function: sub_00239160
// Address: 0x239160 - 0x239478
void sub_00239160_0x239160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239160_0x239160");
#endif

    switch (ctx->pc) {
        case 0x2391b0u: goto label_2391b0;
        case 0x239200u: goto label_239200;
        case 0x239234u: goto label_239234;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392e0u: goto label_2392e0;
        case 0x239308u: goto label_239308;
        case 0x239334u: goto label_239334;
        case 0x239348u: goto label_239348;
        case 0x239358u: goto label_239358;
        case 0x239368u: goto label_239368;
        case 0x23937cu: goto label_23937c;
        case 0x239384u: goto label_239384;
        case 0x2393e8u: goto label_2393e8;
        case 0x239444u: goto label_239444;
        case 0x239450u: goto label_239450;
        case 0x239458u: goto label_239458;
        default: break;
    }

    ctx->pc = 0x239160u;

    { static uint64_t last[4]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[4]={(uint64_t)(GPR_U32(ctx,4)),(uint64_t)(GPR_U32(ctx,5)),(uint64_t)(GPR_U32(ctx,6)),(uint64_t)(GPR_U32(ctx,31)),}; bool chg=first; for(int i=0;i<4;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<20) { ++lines; first=false; for(int i=0;i<4;++i) last[i]=cur[i]; fprintf(stderr,"[px adxtcre] hit=%u " "a0=0x%llx a1=0x%llx a2=0x%llx ra=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3]); } }
    // 0x239160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239164: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x239164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x239168: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x239168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x23916c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239170: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x239170u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239174: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239178: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x239178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23917c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23917cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239180: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239184: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x239184u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x239188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23918c: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x23918Cu;
    {
        const bool branch_taken_0x23918c = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x239190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23918Cu;
        // 0x239190: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23918c) {
            ctx->pc = 0x2391A4u;
            goto label_2391a4;
        }
    }
    ctx->pc = 0x239194u;
    // 0x239194: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x239194u;
    {
        const bool branch_taken_0x239194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x239194) {
            ctx->pc = 0x239198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239194u;
            // 0x239198: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391A8u;
            goto label_2391a8;
        }
    }
    ctx->pc = 0x23919Cu;
    // 0x23919c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x23919Cu;
    {
        const bool branch_taken_0x23919c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23919Cu;
        // 0x2391a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23919c) {
            ctx->pc = 0x2391B0u;
            goto label_2391b0;
        }
    }
    ctx->pc = 0x2391A4u;
label_2391a4:
    // 0x2391a4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2391a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2391a8:
    // 0x2391a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2391A8u;
    {
        const bool branch_taken_0x2391a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A8u;
        // 0x2391ac: 0x2484afd8  addiu       $a0, $a0, -0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391a8) {
            ctx->pc = 0x2391F8u;
            goto label_2391f8;
        }
    }
    ctx->pc = 0x2391B0u;
label_2391b0:
    // 0x2391b0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x2391b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2391b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x2391BCu;
    // 0x2391bc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2391bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2391c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2391c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2391c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2391c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2391c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2391cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2391d0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2391d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2391d8: 0x8063ef88  lb          $v1, -0x1078($v1)
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963080)));
    // 0x2391dc: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2391DCu;
    {
        const bool branch_taken_0x2391dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2391dc) {
            ctx->pc = 0x2391E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391DCu;
            // 0x2391e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2391b0;
        }
    }
    ctx->pc = 0x2391E4u;
    // 0x2391e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2391e8:
    // 0x2391e8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2391E8u;
    {
        const bool branch_taken_0x2391e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2391ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391E8u;
        // 0x2391ec: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391e8) {
            ctx->pc = 0x239208u;
            goto label_239208;
        }
    }
    ctx->pc = 0x2391F0u;
    // 0x2391f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2391f4: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x2391f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_2391f8:
    // 0x2391f8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x2391F8u;
    SET_GPR_U32(ctx, 31, 0x239200u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x2391F8u, 0x239200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239200u;
label_239200:
    // 0x239200: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x239200u;
    {
        const bool branch_taken_0x239200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239200u;
        // 0x239204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239200) {
            ctx->pc = 0x23945Cu;
            goto label_23945c;
        }
    }
    ctx->pc = 0x239208u;
label_239208:
    // 0x239208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23920c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x239210: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x239210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x239214: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239218: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23921c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239220: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x239220u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x239224: 0x2631ef88  addiu       $s1, $s1, -0x1078
    ctx->pc = 0x239224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963080));
    // 0x239228: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x239228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23922c: 0xc049590  jal         func_125640
    ctx->pc = 0x23922Cu;
    SET_GPR_U32(ctx, 31, 0x239234u);
    ctx->pc = 0x239230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23922Cu;
    // 0x239230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23922Cu, 0x239234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239234u;
label_239234:
    // 0x239234: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x239234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x239238: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x239238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x23923c: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x23923cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x239240: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x239244: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x239244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x239248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x239248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23924c: 0x24092060  addiu       $t1, $zero, 0x2060
    ctx->pc = 0x23924cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    // 0x239250: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x239250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x239254: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x239254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x239258: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x239258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x23925c: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x23925cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x239260: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x239264: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x239268: 0x24a3fedc  addiu       $v1, $a1, -0x124
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967004));
    // 0x23926c: 0x24a506db  addiu       $a1, $a1, 0x6DB
    ctx->pc = 0x23926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1755));
    // 0x239270: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x239270u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x239274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239278: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x239278u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x23927c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23927cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x239280: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x239284: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x239284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x239288: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x239288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x23928c: 0xae290034  sw          $t1, 0x34($s1)
    ctx->pc = 0x23928cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 9));
    // 0x239290: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x239290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x239294: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x239294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239298: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x239298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23929c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x23929cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2392a0: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2392a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x2392a4: 0xae2a0028  sw          $t2, 0x28($s1)
    ctx->pc = 0x2392a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 10));
    // 0x2392a8: 0xc09422c  jal         func_2508B0
    ctx->pc = 0x2392A8u;
    SET_GPR_U32(ctx, 31, 0x2392B0u);
    ctx->pc = 0x2392ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392A8u;
    // 0x2392ac: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x2392A8u, 0x2392B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392B0u;
label_2392b0:
    // 0x2392b0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2392B0u;
    {
        const bool branch_taken_0x2392b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B0u;
        // 0x2392b4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392b0) {
            ctx->pc = 0x239360u;
            goto label_239360;
        }
    }
    ctx->pc = 0x2392B8u;
    // 0x2392b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2392b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2392bc: 0xc08dc9c  jal         func_237270
    ctx->pc = 0x2392BCu;
    SET_GPR_U32(ctx, 31, 0x2392C4u);
    ctx->pc = 0x2392C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392BCu;
    // 0x2392c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237270u, 0x2392BCu, 0x2392C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392C4u;
label_2392c4:
    // 0x2392c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2392C4u;
    {
        const bool branch_taken_0x2392c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C4u;
        // 0x2392c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c4) {
            ctx->pc = 0x239360u;
            goto label_239360;
        }
    }
    ctx->pc = 0x2392CCu;
    // 0x2392cc: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2392CCu;
    {
        const bool branch_taken_0x2392cc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2392D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392CCu;
        // 0x2392d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392cc) {
            ctx->pc = 0x239320u;
            goto label_239320;
        }
    }
    ctx->pc = 0x2392D4u;
    // 0x2392d4: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x2392d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2392d8: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2392dc: 0x0  nop
    ctx->pc = 0x2392dcu;
    // NOP
label_2392e0:
    // 0x2392e0: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2392e4: 0xd02018  mult        $a0, $a2, $s0
    ctx->pc = 0x2392e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2392e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2392ec: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2392ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2392f0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2392f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2392f4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2392f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2392f8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2392fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2392fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x239300: 0xc09422c  jal         func_2508B0
    ctx->pc = 0x239300u;
    SET_GPR_U32(ctx, 31, 0x239308u);
    ctx->pc = 0x239304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239300u;
    // 0x239304: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x239300u, 0x239308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239308u;
label_239308:
    // 0x239308: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x239308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x23930c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23930cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x239310: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x239310u;
    {
        const bool branch_taken_0x239310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239310u;
        // 0x239314: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239310) {
            ctx->pc = 0x239360u;
            goto label_239360;
        }
    }
    ctx->pc = 0x239318u;
    // 0x239318: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x239318u;
    {
        const bool branch_taken_0x239318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239318) {
            ctx->pc = 0x23931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239318u;
            // 0x23931c: 0x8e260034  lw          $a2, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2392e0;
        }
    }
    ctx->pc = 0x239320u;
label_239320:
    // 0x239320: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x239324: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x239328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23932c: 0xc08d63e  jal         func_2358F8
    ctx->pc = 0x23932Cu;
    SET_GPR_U32(ctx, 31, 0x239334u);
    ctx->pc = 0x239330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23932Cu;
    // 0x239330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2358F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2358F8u, 0x23932Cu, 0x239334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239334u;
label_239334:
    // 0x239334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x239334u;
    {
        const bool branch_taken_0x239334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239334u;
        // 0x239338: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239334) {
            ctx->pc = 0x239360u;
            goto label_239360;
        }
    }
    ctx->pc = 0x23933Cu;
    // 0x23933c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239340: 0xc08d532  jal         func_2354C8
    ctx->pc = 0x239340u;
    SET_GPR_U32(ctx, 31, 0x239348u);
    ctx->pc = 0x239344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239340u;
    // 0x239344: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354C8u, 0x239340u, 0x239348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239348u;
label_239348:
    // 0x239348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239348u;
    {
        const bool branch_taken_0x239348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239348u;
        // 0x23934c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239348) {
            ctx->pc = 0x239360u;
            goto label_239360;
        }
    }
    ctx->pc = 0x239350u;
    // 0x239350: 0xc092c8a  jal         func_24B228
    ctx->pc = 0x239350u;
    SET_GPR_U32(ctx, 31, 0x239358u);
    ctx->pc = 0x239354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239350u;
    // 0x239354: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B228u, 0x239350u, 0x239358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239358u;
label_239358:
    // 0x239358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239358u;
    {
        const bool branch_taken_0x239358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239358u;
        // 0x23935c: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239358) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239360u;
label_239360:
    // 0x239360: 0xc08e570  jal         func_2395C0
    ctx->pc = 0x239360u;
    SET_GPR_U32(ctx, 31, 0x239368u);
    ctx->pc = 0x239364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239360u;
    // 0x239364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C0u, 0x239360u, 0x239368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239368u;
label_239368:
    // 0x239368: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x239368u;
    {
        const bool branch_taken_0x239368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239368) {
            ctx->pc = 0x23945Cu;
            goto label_23945c;
        }
    }
    ctx->pc = 0x239370u;
label_239370:
    // 0x239370: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x239374: 0xc092cfa  jal         func_24B3E8
    ctx->pc = 0x239374u;
    SET_GPR_U32(ctx, 31, 0x23937Cu);
    ctx->pc = 0x239378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239374u;
    // 0x239378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B3E8u, 0x239374u, 0x23937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23937Cu;
label_23937c:
    // 0x23937c: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x23937Cu;
    SET_GPR_U32(ctx, 31, 0x239384u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23937Cu, 0x239384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239384u;
label_239384:
    // 0x239384: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x239388: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x239388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x23938c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x23938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x239390: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x239390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x239394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x239394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x239398: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x239398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23939c: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x23939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x2393a0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2393a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2393a4: 0x8cc58f8c  lw          $a1, -0x7074($a2)
    ctx->pc = 0x2393a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294938508)));
    // 0x2393a8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x2393ac: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x2393acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x2393b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2393b4: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x2393b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2393b8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2393b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2393bc: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x2393bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x2393c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2393c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2393c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2393c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2393c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2393c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2393cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2393ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2393d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2393d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2393d4: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2393D4u;
    {
        const bool branch_taken_0x2393d4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2393D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393D4u;
        // 0x2393d8: 0xa622003e  sh          $v0, 0x3E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393d4) {
            ctx->pc = 0x239404u;
            goto label_239404;
        }
    }
    ctx->pc = 0x2393DCu;
    // 0x2393dc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2393dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2393e0: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x2393e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2393e4: 0x26220042  addiu       $v0, $s1, 0x42
    ctx->pc = 0x2393e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
label_2393e8:
    // 0x2393e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2393ec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2393ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2393f0: 0x0  nop
    ctx->pc = 0x2393f0u;
    // NOP
    // 0x2393f4: 0x0  nop
    ctx->pc = 0x2393f4u;
    // NOP
    // 0x2393f8: 0x0  nop
    ctx->pc = 0x2393f8u;
    // NOP
    // 0x2393fc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2393FCu;
    {
        const bool branch_taken_0x2393fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x239400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393FCu;
        // 0x239400: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393fc) {
            ctx->pc = 0x2393E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2393e8;
        }
    }
    ctx->pc = 0x239404u;
label_239404:
    // 0x239404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x239404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23940c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239410: 0xa6200046  sh          $zero, 0x46($s1)
    ctx->pc = 0x239410u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x239414: 0xa230006c  sb          $s0, 0x6C($s1)
    ctx->pc = 0x239414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 16));
    // 0x239418: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x239418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x23941c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x23941cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x239420: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x239420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x239424: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x239424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x239428: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x239428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x23942c: 0xa6200068  sh          $zero, 0x68($s1)
    ctx->pc = 0x23942cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x239430: 0xa620006a  sh          $zero, 0x6A($s1)
    ctx->pc = 0x239430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x239434: 0xa230006d  sb          $s0, 0x6D($s1)
    ctx->pc = 0x239434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 16));
    // 0x239438: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x239438u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x23943c: 0xc08efba  jal         func_23BEE8
    ctx->pc = 0x23943Cu;
    SET_GPR_U32(ctx, 31, 0x239444u);
    ctx->pc = 0x239440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23943Cu;
    // 0x239440: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEE8u, 0x23943Cu, 0x239444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239444u;
label_239444:
    // 0x239444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239448: 0xc08eb3e  jal         func_23ACF8
    ctx->pc = 0x239448u;
    SET_GPR_U32(ctx, 31, 0x239450u);
    ctx->pc = 0x23944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239448u;
    // 0x23944c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACF8u, 0x239448u, 0x239450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239450u;
label_239450:
    // 0x239450: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x239450u;
    SET_GPR_U32(ctx, 31, 0x239458u);
    ctx->pc = 0x239454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239450u;
    // 0x239454: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x239450u, 0x239458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239458u;
label_239458:
    // 0x239458: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x239458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23945c:
    // 0x23945c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23945cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239464: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239468: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23946c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239470: 0x3e00008  jr          $ra
    ctx->pc = 0x239470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239470u;
        // 0x239474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239478u;
}
