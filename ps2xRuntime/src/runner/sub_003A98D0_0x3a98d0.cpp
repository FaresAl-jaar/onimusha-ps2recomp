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

// Function: sub_003A98D0
// Address: 0x3a98d0 - 0x3a9f20
void sub_003A98D0_0x3a98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A98D0_0x3a98d0");
#endif

    switch (ctx->pc) {
        case 0x3a9920u: goto label_3a9920;
        case 0x3a99e0u: goto label_3a99e0;
        case 0x3a9a1cu: goto label_3a9a1c;
        case 0x3a9a3cu: goto label_3a9a3c;
        case 0x3a9a94u: goto label_3a9a94;
        case 0x3a9aacu: goto label_3a9aac;
        case 0x3a9abcu: goto label_3a9abc;
        case 0x3a9b00u: goto label_3a9b00;
        case 0x3a9b1cu: goto label_3a9b1c;
        case 0x3a9b50u: goto label_3a9b50;
        case 0x3a9b90u: goto label_3a9b90;
        case 0x3a9ba4u: goto label_3a9ba4;
        case 0x3a9bc4u: goto label_3a9bc4;
        case 0x3a9bd4u: goto label_3a9bd4;
        case 0x3a9c5cu: goto label_3a9c5c;
        case 0x3a9cb0u: goto label_3a9cb0;
        case 0x3a9cd4u: goto label_3a9cd4;
        case 0x3a9ce4u: goto label_3a9ce4;
        case 0x3a9d00u: goto label_3a9d00;
        case 0x3a9d2cu: goto label_3a9d2c;
        case 0x3a9d54u: goto label_3a9d54;
        case 0x3a9d84u: goto label_3a9d84;
        case 0x3a9db8u: goto label_3a9db8;
        case 0x3a9dd8u: goto label_3a9dd8;
        case 0x3a9de0u: goto label_3a9de0;
        case 0x3a9de8u: goto label_3a9de8;
        case 0x3a9df0u: goto label_3a9df0;
        case 0x3a9df8u: goto label_3a9df8;
        case 0x3a9e0cu: goto label_3a9e0c;
        case 0x3a9e8cu: goto label_3a9e8c;
        case 0x3a9e98u: goto label_3a9e98;
        case 0x3a9eacu: goto label_3a9eac;
        case 0x3a9efcu: goto label_3a9efc;
        case 0x3a9f10u: goto label_3a9f10;
        default: break;
    }

    ctx->pc = 0x3a98d0u;

    // 0x3a98d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a98d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a98d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a98d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a98d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a98d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    { static uint64_t last[4]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[4]={(uint64_t)(READ8(0x923344u)),(uint64_t)(READ8(0x923346u)),(uint64_t)(READ8(0x923347u)),(uint64_t)(READ16(0x923354u)),}; bool chg=first; for(int i=0;i<4;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<200) { ++lines; first=false; for(int i=0;i<4;++i) last[i]=cur[i]; fprintf(stderr,"[px mcui3] hit=%u " "st=%llu b6=%llu b7=%llu idx=%llu" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3]); } }
    // 0x3a98dc: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x3a98dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a98e0: 0x2cc1000c  sltiu       $at, $a2, 0xC
    ctx->pc = 0x3a98e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3a98e4: 0x1020018a  beqz        $at, . + 4 + (0x18A << 2)
    ctx->pc = 0x3A98E4u;
    {
        const bool branch_taken_0x3a98e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98E4u;
        // 0x3a98e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a98e4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A98ECu;
    // 0x3a98ec: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a98ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a98f0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3a98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a98f4: 0x24a52900  addiu       $a1, $a1, 0x2900
    ctx->pc = 0x3a98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10496));
    // 0x3a98f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a98fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9900: 0x600008  jr          $v1
    ctx->pc = 0x3A9900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A9908u: goto label_3a9908;
            case 0x3A99C0u: goto label_3a99c0;
            case 0x3A9A48u: goto label_3a9a48;
            case 0x3A9BB0u: goto label_3a9bb0;
            case 0x3A9C48u: goto label_3a9c48;
            case 0x3A9CC0u: goto label_3a9cc0;
            case 0x3A9CF8u: goto label_3a9cf8;
            case 0x3A9D18u: goto label_3a9d18;
            case 0x3A9D40u: goto label_3a9d40;
            case 0x3A9D70u: goto label_3a9d70;
            case 0x3A9DA0u: goto label_3a9da0;
            case 0x3A9E20u: goto label_3a9e20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A9908u;
label_3a9908:
    // 0x3a9908: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x3a9908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a990c: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a990cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9910: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a9910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a9914: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a9914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a9918: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A9918u;
    SET_GPR_U32(ctx, 31, 0x3A9920u);
    ctx->pc = 0x3A991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9918u;
    // 0x3a991c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A9918u, 0x3A9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9920u;
label_3a9920:
    // 0x3a9920: 0x1c40017b  bgtz        $v0, . + 4 + (0x17B << 2)
    ctx->pc = 0x3A9920u;
    {
        const bool branch_taken_0x3a9920 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a9920) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9928u;
    // 0x3a9928: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9928u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a992c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a992cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a9930: 0x24638e40  addiu       $v1, $v1, -0x71C0
    ctx->pc = 0x3a9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938176));
    // 0x3a9934: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3a9934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a9938: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a9938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a993c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a993cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a9940: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a9940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a9944: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x3a9944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a9948: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a9948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a994c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9950: 0x2861fffc  slti        $at, $v1, -0x4
    ctx->pc = 0x3a9950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x3a9954: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A9954u;
    {
        const bool branch_taken_0x3a9954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9954) {
            ctx->pc = 0x3A9970u;
            goto label_3a9970;
        }
    }
    ctx->pc = 0x3A995Cu;
    // 0x3a995c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a995cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9964: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x3a9964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9968: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x3A9968u;
    {
        const bool branch_taken_0x3a9968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9968u;
        // 0x3a996c: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9968) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9970u;
label_3a9970:
    // 0x3a9970: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3a9970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9978: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A9978u;
    {
        const bool branch_taken_0x3a9978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9978u;
        // 0x3a997c: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9978) {
            ctx->pc = 0x3A99B0u;
            goto label_3a99b0;
        }
    }
    ctx->pc = 0x3A9980u;
    // 0x3a9980: 0x24638e3c  addiu       $v1, $v1, -0x71C4
    ctx->pc = 0x3a9980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938172));
    // 0x3a9984: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a9984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a9988: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a9988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a998c: 0x28610137  slti        $at, $v1, 0x137
    ctx->pc = 0x3a998cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)311) ? 1 : 0);
    // 0x3a9990: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A9990u;
    {
        const bool branch_taken_0x3a9990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9990) {
            ctx->pc = 0x3A99B0u;
            goto label_3a99b0;
        }
    }
    ctx->pc = 0x3A9998u;
    // 0x3a9998: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a999c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3a999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a99a0: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3a99a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a99a4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x3A99A4u;
    {
        const bool branch_taken_0x3a99a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99A4u;
        // 0x3a99a8: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99a4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A99ACu;
    // 0x3a99ac: 0x0  nop
    ctx->pc = 0x3a99acu;
    // NOP
label_3a99b0:
    // 0x3a99b0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a99b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a99b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a99b8: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x3A99B8u;
    {
        const bool branch_taken_0x3a99b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99B8u;
        // 0x3a99bc: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99b8) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A99C0u;
label_3a99c0:
    // 0x3a99c0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a99c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a99c4: 0x14600152  bnez        $v1, . + 4 + (0x152 << 2)
    ctx->pc = 0x3A99C4u;
    {
        const bool branch_taken_0x3a99c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a99c4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A99CCu;
    // 0x3a99cc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3a99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a99d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a99d4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a99d8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A99D8u;
    SET_GPR_U32(ctx, 31, 0x3A99E0u);
    ctx->pc = 0x3A99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99D8u;
    // 0x3a99dc: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A99D8u, 0x3A99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99E0u;
label_3a99e0:
    // 0x3a99e0: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3a99e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a99e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a99e8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A99E8u;
    {
        const bool branch_taken_0x3a99e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a99e8) {
            ctx->pc = 0x3A9A28u;
            goto label_3a9a28;
        }
    }
    ctx->pc = 0x3A99F0u;
    // 0x3a99f0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a99f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a99f4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x3a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3a99f8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a99fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a99fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a00: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a04: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3a9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3a9a08: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a0c: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x3a9a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3a9a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a14: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9A14u;
    SET_GPR_U32(ctx, 31, 0x3A9A1Cu);
    ctx->pc = 0x3A9A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A14u;
    // 0x3a9a18: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9A14u, 0x3A9A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A1Cu;
label_3a9a1c:
    // 0x3a9a1c: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x3A9A1Cu;
    {
        const bool branch_taken_0x3a9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9a1c) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9A24u;
    // 0x3a9a24: 0x0  nop
    ctx->pc = 0x3a9a24u;
    // NOP
label_3a9a28:
    // 0x3a9a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a9a30: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3a9a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9a34: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9A34u;
    SET_GPR_U32(ctx, 31, 0x3A9A3Cu);
    ctx->pc = 0x3A9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A34u;
    // 0x3a9a38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9A34u, 0x3A9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A3Cu;
label_3a9a3c:
    // 0x3a9a3c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x3A9A3Cu;
    {
        const bool branch_taken_0x3a9a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9a3c) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9A44u;
    // 0x3a9a44: 0x0  nop
    ctx->pc = 0x3a9a44u;
    // NOP
label_3a9a48:
    // 0x3a9a48: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9a48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9a4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a9a50: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a9a54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3a9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a9a58: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a9a5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9a60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a9a64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a9a6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a9a70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A9A70u;
    {
        const bool branch_taken_0x3a9a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9a70) {
            ctx->pc = 0x3A9AA0u;
            goto label_3a9aa0;
        }
    }
    ctx->pc = 0x3A9A78u;
    // 0x3a9a78: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a7c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a80: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a84: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a88: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a9a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9a8c: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A9A8Cu;
    SET_GPR_U32(ctx, 31, 0x3A9A94u);
    ctx->pc = 0x3A9A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A8Cu;
    // 0x3a9a90: 0x82050007  lb          $a1, 0x7($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A9A8Cu, 0x3A9A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A94u;
label_3a9a94:
    // 0x3a9a94: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x3A9A94u;
    {
        const bool branch_taken_0x3a9a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9a94) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9A9Cu;
    // 0x3a9a9c: 0x0  nop
    ctx->pc = 0x3a9a9cu;
    // NOP
label_3a9aa0:
    // 0x3a9aa0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9aa4: 0xc095150  jal         func_254540
    ctx->pc = 0x3A9AA4u;
    SET_GPR_U32(ctx, 31, 0x3A9AACu);
    ctx->pc = 0x3A9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9AA4u;
    // 0x3a9aa8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A9AA4u, 0x3A9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9AACu;
label_3a9aac:
    // 0x3a9aac: 0x14400118  bnez        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x3A9AACu;
    {
        const bool branch_taken_0x3a9aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AACu;
        // 0x3a9ab0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9aac) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9AB4u;
    // 0x3a9ab4: 0xc095154  jal         func_254550
    ctx->pc = 0x3A9AB4u;
    SET_GPR_U32(ctx, 31, 0x3A9ABCu);
    ctx->pc = 0x3A9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9AB4u;
    // 0x3a9ab8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3A9AB4u, 0x3A9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9ABCu;
label_3a9abc:
    // 0x3a9abc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3a9abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3a9ac0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9ac4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3a9ac4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3a9ac8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A9AC8u;
    {
        const bool branch_taken_0x3a9ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AC8u;
        // 0x3a9acc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ac8) {
            ctx->pc = 0x3A9B58u;
            goto label_3a9b58;
        }
    }
    ctx->pc = 0x3A9AD0u;
    // 0x3a9ad0: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A9AD0u;
    {
        const bool branch_taken_0x3a9ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a9ad0) {
            ctx->pc = 0x3A9B58u;
            goto label_3a9b58;
        }
    }
    ctx->pc = 0x3A9AD8u;
    // 0x3a9ad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9AD8u;
    {
        const bool branch_taken_0x3a9ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ad8) {
            ctx->pc = 0x3A9AE8u;
            goto label_3a9ae8;
        }
    }
    ctx->pc = 0x3A9AE0u;
    // 0x3a9ae0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x3A9AE0u;
    {
        const bool branch_taken_0x3a9ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ae0) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9AE8u;
label_3a9ae8:
    // 0x3a9ae8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3a9ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9aec: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9af0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a9af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a9af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9af8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9AF8u;
    SET_GPR_U32(ctx, 31, 0x3A9B00u);
    ctx->pc = 0x3A9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9AF8u;
    // 0x3a9afc: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9AF8u, 0x3A9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9B00u;
label_3a9b00:
    // 0x3a9b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a9b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9b08: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x3a9b08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a9b0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3a9b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a9b10: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3a9b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a9b14: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9B14u;
    SET_GPR_U32(ctx, 31, 0x3A9B1Cu);
    ctx->pc = 0x3A9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9B14u;
    // 0x3a9b18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9B14u, 0x3A9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9B1Cu;
label_3a9b1c:
    // 0x3a9b1c: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x3a9b1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9b20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a9b24: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a9b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a9b28: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3a9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3a9b2c: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3a9b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3a9b30: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a9b34: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9b38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9b40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a9b48: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3A9B48u;
    SET_GPR_U32(ctx, 31, 0x3A9B50u);
    ctx->pc = 0x3A9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9B48u;
    // 0x3a9b4c: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3A9B48u, 0x3A9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9B50u;
label_3a9b50:
    // 0x3a9b50: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x3A9B50u;
    {
        const bool branch_taken_0x3a9b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9b50) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9B58u;
label_3a9b58:
    // 0x3a9b58: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9b58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9b5c: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x3a9b5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9b60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9b64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a9b68: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x3a9b68u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3a9b6c: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x3a9b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a9b70: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9b74: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9b78: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9b7c: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x3a9b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9b80: 0x146000e3  bnez        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x3A9B80u;
    {
        const bool branch_taken_0x3a9b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B80u;
        // 0x3a9b84: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b80) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9B88u;
    // 0x3a9b88: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9B88u;
    SET_GPR_U32(ctx, 31, 0x3A9B90u);
    ctx->pc = 0x3A9B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9B88u;
    // 0x3a9b8c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9B88u, 0x3A9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9B90u;
label_3a9b90:
    // 0x3a9b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9b94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3a9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a9b98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a9b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9b9c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9B9Cu;
    SET_GPR_U32(ctx, 31, 0x3A9BA4u);
    ctx->pc = 0x3A9BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9B9Cu;
    // 0x3a9ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9B9Cu, 0x3A9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9BA4u;
label_3a9ba4:
    // 0x3a9ba4: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x3A9BA4u;
    {
        const bool branch_taken_0x3a9ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ba4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9BACu;
    // 0x3a9bac: 0x0  nop
    ctx->pc = 0x3a9bacu;
    // NOP
label_3a9bb0:
    // 0x3a9bb0: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9bb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9bb4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a9bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a9bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9bbc: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A9BBCu;
    SET_GPR_U32(ctx, 31, 0x3A9BC4u);
    ctx->pc = 0x3A9BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9BBCu;
    // 0x3a9bc0: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A9BBCu, 0x3A9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9BC4u;
label_3a9bc4:
    // 0x3a9bc4: 0x1c4000d2  bgtz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3A9BC4u;
    {
        const bool branch_taken_0x3a9bc4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A9BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BC4u;
        // 0x3a9bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bc4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9BCCu;
    // 0x3a9bcc: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A9BCCu;
    SET_GPR_U32(ctx, 31, 0x3A9BD4u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A9BCCu, 0x3A9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9BD4u;
label_3a9bd4:
    // 0x3a9bd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9BD4u;
    {
        const bool branch_taken_0x3a9bd4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a9bd4) {
            ctx->pc = 0x3A9BE8u;
            goto label_3a9be8;
        }
    }
    ctx->pc = 0x3A9BDCu;
    // 0x3a9bdc: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a9bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9be0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9be4: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x3a9be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_3a9be8:
    // 0x3a9be8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9be8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9bec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a9becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a9bf0: 0x24638e44  addiu       $v1, $v1, -0x71BC
    ctx->pc = 0x3a9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938180));
    // 0x3a9bf4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3a9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a9bf8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a9bfc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a9c00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a9c04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a9c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9c0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9c10: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x3A9C10u;
    {
        const bool branch_taken_0x3a9c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C10u;
        // 0x3a9c14: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c10) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9C18u;
    // 0x3a9c18: 0x24638e3c  addiu       $v1, $v1, -0x71C4
    ctx->pc = 0x3a9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938172));
    // 0x3a9c1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9c20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9c24: 0x28610137  slti        $at, $v1, 0x137
    ctx->pc = 0x3a9c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)311) ? 1 : 0);
    // 0x3a9c28: 0x102000b9  beqz        $at, . + 4 + (0xB9 << 2)
    ctx->pc = 0x3A9C28u;
    {
        const bool branch_taken_0x3a9c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9c28) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9C30u;
    // 0x3a9c30: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9c38: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x3a9c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9c3c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3a9c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a9c40: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3A9C40u;
    {
        const bool branch_taken_0x3a9c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C40u;
        // 0x3a9c44: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c40) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9C48u;
label_3a9c48:
    // 0x3a9c48: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9c48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9c4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a9c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9c54: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x3A9C54u;
    SET_GPR_U32(ctx, 31, 0x3A9C5Cu);
    ctx->pc = 0x3A9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9C54u;
    // 0x3a9c58: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x3A9C54u, 0x3A9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9C5Cu;
label_3a9c5c:
    // 0x3a9c5c: 0x1c4000ac  bgtz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x3A9C5Cu;
    {
        const bool branch_taken_0x3a9c5c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a9c5c) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9C64u;
    // 0x3a9c64: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x3a9c64u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9c68: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a9c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a9c6c: 0x24848e40  addiu       $a0, $a0, -0x71C0
    ctx->pc = 0x3a9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938176));
    // 0x3a9c70: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3a9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3a9c74: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3a9c74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3a9c78: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3a9c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a9c7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a9c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a9c80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a9c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a9c84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a9c88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a9c8c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3a9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a9c90: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9C90u;
    {
        const bool branch_taken_0x3a9c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a9c90) {
            ctx->pc = 0x3A9CA8u;
            goto label_3a9ca8;
        }
    }
    ctx->pc = 0x3A9C98u;
    // 0x3a9c98: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a9c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9c9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9ca0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3A9CA0u;
    {
        const bool branch_taken_0x3a9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CA0u;
        // 0x3a9ca4: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ca0) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9CA8u;
label_3a9ca8:
    // 0x3a9ca8: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A9CA8u;
    SET_GPR_U32(ctx, 31, 0x3A9CB0u);
    ctx->pc = 0x3A9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CA8u;
    // 0x3a9cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A9CA8u, 0x3A9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CB0u;
label_3a9cb0:
    // 0x3a9cb0: 0x4400097  bltz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x3A9CB0u;
    {
        const bool branch_taken_0x3a9cb0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CB0u;
        // 0x3a9cb4: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cb0) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9CB8u;
    // 0x3a9cb8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x3A9CB8u;
    {
        const bool branch_taken_0x3a9cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CB8u;
        // 0x3a9cbc: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cb8) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9CC0u;
label_3a9cc0:
    // 0x3a9cc0: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a9cc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9cc4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a9cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a9cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9ccc: 0xc052b08  jal         func_14AC20
    ctx->pc = 0x3A9CCCu;
    SET_GPR_U32(ctx, 31, 0x3A9CD4u);
    ctx->pc = 0x3A9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CCCu;
    // 0x3a9cd0: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC20u, 0x3A9CCCu, 0x3A9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CD4u;
label_3a9cd4:
    // 0x3a9cd4: 0x1c40008e  bgtz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x3A9CD4u;
    {
        const bool branch_taken_0x3a9cd4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CD4u;
        // 0x3a9cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cd4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9CDCu;
    // 0x3a9cdc: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A9CDCu;
    SET_GPR_U32(ctx, 31, 0x3A9CE4u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A9CDCu, 0x3A9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CE4u;
label_3a9ce4:
    // 0x3a9ce4: 0x440008a  bltz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3A9CE4u;
    {
        const bool branch_taken_0x3a9ce4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CE4u;
        // 0x3a9ce8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ce4) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9CECu;
    // 0x3a9cec: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3A9CECu;
    {
        const bool branch_taken_0x3a9cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CECu;
        // 0x3a9cf0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cec) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9CF4u;
    // 0x3a9cf4: 0x0  nop
    ctx->pc = 0x3a9cf4u;
    // NOP
label_3a9cf8:
    // 0x3a9cf8: 0xc0ea9c4  jal         func_3AA710
    ctx->pc = 0x3A9CF8u;
    SET_GPR_U32(ctx, 31, 0x3A9D00u);
    ctx->pc = 0x3AA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA710u, 0x3A9CF8u, 0x3A9D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D00u;
label_3a9d00:
    // 0x3a9d00: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x3A9D00u;
    {
        const bool branch_taken_0x3a9d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9d00) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D08u;
    // 0x3a9d08: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a9d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9d10: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x3A9D10u;
    {
        const bool branch_taken_0x3a9d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D10u;
        // 0x3a9d14: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d10) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D18u;
label_3a9d18:
    // 0x3a9d18: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x3a9d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a9d1c: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x3a9d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3a9d20: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a9d24: 0xc0ea960  jal         func_3AA580
    ctx->pc = 0x3A9D24u;
    SET_GPR_U32(ctx, 31, 0x3A9D2Cu);
    ctx->pc = 0x3A9D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D24u;
    // 0x3a9d28: 0x24a528d0  addiu       $a1, $a1, 0x28D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA580u, 0x3A9D24u, 0x3A9D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D2Cu;
label_3a9d2c:
    // 0x3a9d2c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3A9D2Cu;
    {
        const bool branch_taken_0x3a9d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D2Cu;
        // 0x3a9d30: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d2c) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D34u;
    // 0x3a9d34: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3A9D34u;
    {
        const bool branch_taken_0x3a9d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D34u;
        // 0x3a9d38: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d34) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D3Cu;
    // 0x3a9d3c: 0x0  nop
    ctx->pc = 0x3a9d3cu;
    // NOP
label_3a9d40:
    // 0x3a9d40: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x3a9d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3a9d44: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x3a9d44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3a9d48: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a9d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a9d4c: 0xc0ea960  jal         func_3AA580
    ctx->pc = 0x3A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x3A9D54u);
    ctx->pc = 0x3A9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D4Cu;
    // 0x3a9d50: 0x24a528d0  addiu       $a1, $a1, 0x28D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA580u, 0x3A9D4Cu, 0x3A9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D54u;
label_3a9d54:
    // 0x3a9d54: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x3A9D54u;
    {
        const bool branch_taken_0x3a9d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9d54) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D5Cu;
    // 0x3a9d5c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a9d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9d60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9d64: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3A9D64u;
    {
        const bool branch_taken_0x3a9d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D64u;
        // 0x3a9d68: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d64) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D6Cu;
    // 0x3a9d6c: 0x0  nop
    ctx->pc = 0x3a9d6cu;
    // NOP
label_3a9d70:
    // 0x3a9d70: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x3a9d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3a9d74: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x3a9d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3a9d78: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a9d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a9d7c: 0xc0ea960  jal         func_3AA580
    ctx->pc = 0x3A9D7Cu;
    SET_GPR_U32(ctx, 31, 0x3A9D84u);
    ctx->pc = 0x3A9D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D7Cu;
    // 0x3a9d80: 0x24a528d0  addiu       $a1, $a1, 0x28D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA580u, 0x3A9D7Cu, 0x3A9D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D84u;
label_3a9d84:
    // 0x3a9d84: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3A9D84u;
    {
        const bool branch_taken_0x3a9d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9d84) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D8Cu;
    // 0x3a9d8c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x3a9d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9d94: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3A9D94u;
    {
        const bool branch_taken_0x3a9d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D94u;
        // 0x3a9d98: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d94) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9D9Cu;
    // 0x3a9d9c: 0x0  nop
    ctx->pc = 0x3a9d9cu;
    // NOP
label_3a9da0:
    // 0x3a9da0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a9da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a9da4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3a9da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3a9da8: 0x24a528e8  addiu       $a1, $a1, 0x28E8
    ctx->pc = 0x3a9da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10472));
    // 0x3a9dac: 0x24c6d210  addiu       $a2, $a2, -0x2DF0
    ctx->pc = 0x3a9dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955536));
    // 0x3a9db0: 0xc0ea960  jal         func_3AA580
    ctx->pc = 0x3A9DB0u;
    SET_GPR_U32(ctx, 31, 0x3A9DB8u);
    ctx->pc = 0x3A9DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DB0u;
    // 0x3a9db4: 0x240703c4  addiu       $a3, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA580u, 0x3A9DB0u, 0x3A9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DB8u;
label_3a9db8:
    // 0x3a9db8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3A9DB8u;
    {
        const bool branch_taken_0x3a9db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9db8) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9DC0u;
    // 0x3a9dc0: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3a9dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a9dc4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9dc8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a9dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9dd0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9DD0u;
    SET_GPR_U32(ctx, 31, 0x3A9DD8u);
    ctx->pc = 0x3A9DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DD0u;
    // 0x3a9dd4: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9DD0u, 0x3A9DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DD8u;
label_3a9dd8:
    // 0x3a9dd8: 0xc0eaef8  jal         func_3ABBE0
    ctx->pc = 0x3A9DD8u;
    SET_GPR_U32(ctx, 31, 0x3A9DE0u);
    ctx->pc = 0x3A9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DD8u;
    // 0x3a9ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABBE0u, 0x3A9DD8u, 0x3A9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DE0u;
label_3a9de0:
    // 0x3a9de0: 0xc0eaf18  jal         func_3ABC60
    ctx->pc = 0x3A9DE0u;
    SET_GPR_U32(ctx, 31, 0x3A9DE8u);
    ctx->pc = 0x3A9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DE0u;
    // 0x3a9de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABC60u, 0x3A9DE0u, 0x3A9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DE8u;
label_3a9de8:
    // 0x3a9de8: 0xc0eaf40  jal         func_3ABD00
    ctx->pc = 0x3A9DE8u;
    SET_GPR_U32(ctx, 31, 0x3A9DF0u);
    ctx->pc = 0x3A9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DE8u;
    // 0x3a9dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABD00u, 0x3A9DE8u, 0x3A9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DF0u;
label_3a9df0:
    // 0x3a9df0: 0xc0eaf78  jal         func_3ABDE0
    ctx->pc = 0x3A9DF0u;
    SET_GPR_U32(ctx, 31, 0x3A9DF8u);
    ctx->pc = 0x3A9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9DF0u;
    // 0x3a9df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDE0u, 0x3A9DF0u, 0x3A9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9DF8u;
label_3a9df8:
    // 0x3a9df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9dfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3a9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a9e00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a9e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9e04: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9E04u;
    SET_GPR_U32(ctx, 31, 0x3A9E0Cu);
    ctx->pc = 0x3A9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E04u;
    // 0x3a9e08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9E04u, 0x3A9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E0Cu;
label_3a9e0c:
    // 0x3a9e0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9e10: 0xa2030052  sb          $v1, 0x52($s0)
    ctx->pc = 0x3a9e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 82), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9e14: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3A9E14u;
    {
        const bool branch_taken_0x3a9e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E14u;
        // 0x3a9e18: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e14) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9E1Cu;
    // 0x3a9e1c: 0x0  nop
    ctx->pc = 0x3a9e1cu;
    // NOP
label_3a9e20:
    // 0x3a9e20: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a9e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a9e24: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3A9E24u;
    {
        const bool branch_taken_0x3a9e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9e24) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9E2Cu;
    // 0x3a9e2c: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x3a9e2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3a9e30: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A9E30u;
    {
        const bool branch_taken_0x3a9e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E30u;
        // 0x3a9e34: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e30) {
            ctx->pc = 0x3A9ED0u;
            goto label_3a9ed0;
        }
    }
    ctx->pc = 0x3A9E38u;
    // 0x3a9e38: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A9E38u;
    {
        const bool branch_taken_0x3a9e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a9e38) {
            ctx->pc = 0x3A9EB8u;
            goto label_3a9eb8;
        }
    }
    ctx->pc = 0x3A9E40u;
    // 0x3a9e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9e44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a9e48: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a9e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9e4c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a9e50: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9e54: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3a9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3a9e58: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9e58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9e5c: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3a9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3a9e60: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9e64: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a9e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9e68: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x3a9e68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a9e6c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a9e70: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9e74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9e78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a9e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a9e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a9e84: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3A9E84u;
    SET_GPR_U32(ctx, 31, 0x3A9E8Cu);
    ctx->pc = 0x3A9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E84u;
    // 0x3a9e88: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3A9E84u, 0x3A9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E8Cu;
label_3a9e8c:
    // 0x3a9e8c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9e90: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9E90u;
    SET_GPR_U32(ctx, 31, 0x3A9E98u);
    ctx->pc = 0x3A9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E90u;
    // 0x3a9e94: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9E90u, 0x3A9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E98u;
label_3a9e98:
    // 0x3a9e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9e9c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a9e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3a9ea0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a9ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a9ea4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9EA4u;
    SET_GPR_U32(ctx, 31, 0x3A9EACu);
    ctx->pc = 0x3A9EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9EA4u;
    // 0x3a9ea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9EA4u, 0x3A9EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9EACu;
label_3a9eac:
    // 0x3a9eac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A9EACu;
    {
        const bool branch_taken_0x3a9eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9eac) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9EB4u;
    // 0x3a9eb4: 0x0  nop
    ctx->pc = 0x3a9eb4u;
    // NOP
label_3a9eb8:
    // 0x3a9eb8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ebc: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ec0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ec4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ec8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A9EC8u;
    {
        const bool branch_taken_0x3a9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9EC8u;
        // 0x3a9ecc: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ec8) {
            ctx->pc = 0x3A9F10u;
            goto label_3a9f10;
        }
    }
    ctx->pc = 0x3A9ED0u;
label_3a9ed0:
    // 0x3a9ed0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a9ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ed4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9ed8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a9edc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a9edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9ee0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a9ee4: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a9ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ee8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a9ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9eec: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a9eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ef0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x3a9ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a9ef4: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A9EF4u;
    SET_GPR_U32(ctx, 31, 0x3A9EFCu);
    ctx->pc = 0x3A9EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9EF4u;
    // 0x3a9ef8: 0xa200000d  sb          $zero, 0xD($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A9EF4u, 0x3A9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9EFCu;
label_3a9efc:
    // 0x3a9efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9f00: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a9f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3a9f04: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a9f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a9f08: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A9F08u;
    SET_GPR_U32(ctx, 31, 0x3A9F10u);
    ctx->pc = 0x3A9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9F08u;
    // 0x3a9f0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A9F08u, 0x3A9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9F10u;
label_3a9f10:
    // 0x3a9f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a9f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9f18: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9F18u;
        // 0x3a9f1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9F20u;
}
