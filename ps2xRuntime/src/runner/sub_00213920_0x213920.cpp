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

// Function: sub_00213920
// Address: 0x213920 - 0x213ab0
void sub_00213920_0x213920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213920_0x213920");
#endif

    switch (ctx->pc) {
        case 0x213920u: goto label_213920;
        case 0x213924u: goto label_213924;
        case 0x213928u: goto label_213928;
        case 0x21392cu: goto label_21392c;
        case 0x213930u: goto label_213930;
        case 0x213934u: goto label_213934;
        case 0x213938u: goto label_213938;
        case 0x21393cu: goto label_21393c;
        case 0x213940u: goto label_213940;
        case 0x213944u: goto label_213944;
        case 0x213948u: goto label_213948;
        case 0x21394cu: goto label_21394c;
        case 0x213950u: goto label_213950;
        case 0x213954u: goto label_213954;
        case 0x213958u: goto label_213958;
        case 0x21395cu: goto label_21395c;
        case 0x213960u: goto label_213960;
        case 0x213964u: goto label_213964;
        case 0x213968u: goto label_213968;
        case 0x21396cu: goto label_21396c;
        case 0x213970u: goto label_213970;
        case 0x213974u: goto label_213974;
        case 0x213978u: goto label_213978;
        case 0x21397cu: goto label_21397c;
        case 0x213980u: goto label_213980;
        case 0x213984u: goto label_213984;
        case 0x213988u: goto label_213988;
        case 0x21398cu: goto label_21398c;
        case 0x213990u: goto label_213990;
        case 0x213994u: goto label_213994;
        case 0x213998u: goto label_213998;
        case 0x21399cu: goto label_21399c;
        case 0x2139a0u: goto label_2139a0;
        case 0x2139a4u: goto label_2139a4;
        case 0x2139a8u: goto label_2139a8;
        case 0x2139acu: goto label_2139ac;
        case 0x2139b0u: goto label_2139b0;
        case 0x2139b4u: goto label_2139b4;
        case 0x2139b8u: goto label_2139b8;
        case 0x2139bcu: goto label_2139bc;
        case 0x2139c0u: goto label_2139c0;
        case 0x2139c4u: goto label_2139c4;
        case 0x2139c8u: goto label_2139c8;
        case 0x2139ccu: goto label_2139cc;
        case 0x2139d0u: goto label_2139d0;
        case 0x2139d4u: goto label_2139d4;
        case 0x2139d8u: goto label_2139d8;
        case 0x2139dcu: goto label_2139dc;
        case 0x2139e0u: goto label_2139e0;
        case 0x2139e4u: goto label_2139e4;
        case 0x2139e8u: goto label_2139e8;
        case 0x2139ecu: goto label_2139ec;
        case 0x2139f0u: goto label_2139f0;
        case 0x2139f4u: goto label_2139f4;
        case 0x2139f8u: goto label_2139f8;
        case 0x2139fcu: goto label_2139fc;
        case 0x213a00u: goto label_213a00;
        case 0x213a04u: goto label_213a04;
        case 0x213a08u: goto label_213a08;
        case 0x213a0cu: goto label_213a0c;
        case 0x213a10u: goto label_213a10;
        case 0x213a14u: goto label_213a14;
        case 0x213a18u: goto label_213a18;
        case 0x213a1cu: goto label_213a1c;
        case 0x213a20u: goto label_213a20;
        case 0x213a24u: goto label_213a24;
        case 0x213a28u: goto label_213a28;
        case 0x213a2cu: goto label_213a2c;
        case 0x213a30u: goto label_213a30;
        case 0x213a34u: goto label_213a34;
        case 0x213a38u: goto label_213a38;
        case 0x213a3cu: goto label_213a3c;
        case 0x213a40u: goto label_213a40;
        case 0x213a44u: goto label_213a44;
        case 0x213a48u: goto label_213a48;
        case 0x213a4cu: goto label_213a4c;
        case 0x213a50u: goto label_213a50;
        case 0x213a54u: goto label_213a54;
        case 0x213a58u: goto label_213a58;
        case 0x213a5cu: goto label_213a5c;
        case 0x213a60u: goto label_213a60;
        case 0x213a64u: goto label_213a64;
        case 0x213a68u: goto label_213a68;
        case 0x213a6cu: goto label_213a6c;
        case 0x213a70u: goto label_213a70;
        case 0x213a74u: goto label_213a74;
        case 0x213a78u: goto label_213a78;
        case 0x213a7cu: goto label_213a7c;
        case 0x213a80u: goto label_213a80;
        case 0x213a84u: goto label_213a84;
        case 0x213a88u: goto label_213a88;
        case 0x213a8cu: goto label_213a8c;
        case 0x213a90u: goto label_213a90;
        case 0x213a94u: goto label_213a94;
        case 0x213a98u: goto label_213a98;
        case 0x213a9cu: goto label_213a9c;
        case 0x213aa0u: goto label_213aa0;
        case 0x213aa4u: goto label_213aa4;
        case 0x213aa8u: goto label_213aa8;
        case 0x213aacu: goto label_213aac;
        default: break;
    }

    ctx->pc = 0x213920u;

label_213920:
    // 0x213920: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x213920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_213924:
    // 0x213924: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x213924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_213928:
    // 0x213928: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x213928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21392c:
    // 0x21392c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_213930:
    // 0x213930: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x213930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_213934:
    // 0x213934: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x213934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_213938:
    // 0x213938: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x213938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21393c:
    // 0x21393c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x21393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_213940:
    // 0x213940: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x213940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213944:
    // 0x213944: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x213944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_213948:
    // 0x213948: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x213948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21394c:
    // 0x21394c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x21394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_213950:
    // 0x213950: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x213950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_213954:
    // 0x213954: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x213954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_213958:
    // 0x213958: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x213958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_21395c:
    // 0x21395c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x21395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_213960:
    // 0x213960: 0xc083d3c  jal         func_20F4F0
label_213964:
    if (ctx->pc == 0x213964u) {
        ctx->pc = 0x213964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213960u;
        // 0x213964: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213968u;
        goto label_213968;
    }
    ctx->pc = 0x213960u;
    SET_GPR_U32(ctx, 31, 0x213968u);
    ctx->pc = 0x213964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213960u;
    // 0x213964: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F4F0u, 0x213960u, 0x213968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213968u;
label_213968:
    // 0x213968: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_21396c:
    if (ctx->pc == 0x21396Cu) {
        ctx->pc = 0x21396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213968u;
        // 0x21396c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213970u;
        goto label_213970;
    }
    ctx->pc = 0x213968u;
    {
        const bool branch_taken_0x213968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213968) {
            ctx->pc = 0x21396Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213968u;
            // 0x21396c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A84u;
            goto label_213a84;
        }
    }
    ctx->pc = 0x213970u;
label_213970:
    // 0x213970: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x213970u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_213974:
    // 0x213974: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_213978:
    // 0x213978: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x213978u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21397c:
    // 0x21397c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x21397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_213980:
    // 0x213980: 0x8fb70008  lw          $s7, 0x8($sp)
    ctx->pc = 0x213980u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_213984:
    // 0x213984: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x213984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_213988:
    // 0x213988: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_21398c:
    if (ctx->pc == 0x21398Cu) {
        ctx->pc = 0x21398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213988u;
        // 0x21398c: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213990u;
        goto label_213990;
    }
    ctx->pc = 0x213988u;
    {
        const bool branch_taken_0x213988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213988u;
        // 0x21398c: 0x8fbe0014  lw          $fp, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213988) {
            ctx->pc = 0x213A80u;
            goto label_213a80;
        }
    }
    ctx->pc = 0x213990u;
label_213990:
    // 0x213990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213994:
    // 0x213994: 0x56c20014  bnel        $s6, $v0, . + 4 + (0x14 << 2)
label_213998:
    if (ctx->pc == 0x213998u) {
        ctx->pc = 0x213998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213994u;
        // 0x213998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21399Cu;
        goto label_21399c;
    }
    ctx->pc = 0x213994u;
    {
        const bool branch_taken_0x213994 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x213994) {
            ctx->pc = 0x213998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213994u;
            // 0x213998: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2139E8u;
            goto label_2139e8;
        }
    }
    ctx->pc = 0x21399Cu;
label_21399c:
    // 0x21399c: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
label_2139a0:
    if (ctx->pc == 0x2139A0u) {
        ctx->pc = 0x2139A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21399Cu;
        // 0x2139a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139A4u;
        goto label_2139a4;
    }
    ctx->pc = 0x21399Cu;
    {
        const bool branch_taken_0x21399c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x2139A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21399Cu;
        // 0x2139a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21399c) {
            ctx->pc = 0x213A28u;
            goto label_213a28;
        }
    }
    ctx->pc = 0x2139A4u;
label_2139a4:
    // 0x2139a4: 0xc087a76  jal         func_21E9D8
label_2139a8:
    if (ctx->pc == 0x2139A8u) {
        ctx->pc = 0x2139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139A4u;
        // 0x2139a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139ACu;
        goto label_2139ac;
    }
    ctx->pc = 0x2139A4u;
    SET_GPR_U32(ctx, 31, 0x2139ACu);
    ctx->pc = 0x2139A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139A4u;
    // 0x2139a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E9D8u, 0x2139A4u, 0x2139ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139ACu;
label_2139ac:
    // 0x2139ac: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_2139b0:
    if (ctx->pc == 0x2139B0u) {
        ctx->pc = 0x2139B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139ACu;
        // 0x2139b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139B4u;
        goto label_2139b4;
    }
    ctx->pc = 0x2139ACu;
    {
        const bool branch_taken_0x2139ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2139ac) {
            ctx->pc = 0x2139B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2139ACu;
            // 0x2139b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A80u;
            goto label_213a80;
        }
    }
    ctx->pc = 0x2139B4u;
label_2139b4:
    // 0x2139b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2139b8:
    // 0x2139b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2139b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2139bc:
    // 0x2139bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2139bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2139c0:
    // 0x2139c0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2139c4:
    // 0x2139c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2139c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2139c8:
    // 0x2139c8: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x2139c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_2139cc:
    // 0x2139cc: 0xc0879b6  jal         func_21E6D8
label_2139d0:
    if (ctx->pc == 0x2139D0u) {
        ctx->pc = 0x2139D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139CCu;
        // 0x2139d0: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139D4u;
        goto label_2139d4;
    }
    ctx->pc = 0x2139CCu;
    SET_GPR_U32(ctx, 31, 0x2139D4u);
    ctx->pc = 0x2139D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139CCu;
    // 0x2139d0: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E6D8u, 0x2139CCu, 0x2139D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139D4u;
label_2139d4:
    // 0x2139d4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2139d8:
    if (ctx->pc == 0x2139D8u) {
        ctx->pc = 0x2139D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139D4u;
        // 0x2139d8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139DCu;
        goto label_2139dc;
    }
    ctx->pc = 0x2139D4u;
    {
        const bool branch_taken_0x2139d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2139d4) {
            ctx->pc = 0x2139D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2139D4u;
            // 0x2139d8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A2Cu;
            goto label_213a2c;
        }
    }
    ctx->pc = 0x2139DCu;
label_2139dc:
    // 0x2139dc: 0x10000029  b           . + 4 + (0x29 << 2)
label_2139e0:
    if (ctx->pc == 0x2139E0u) {
        ctx->pc = 0x2139E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139DCu;
        // 0x2139e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139E4u;
        goto label_2139e4;
    }
    ctx->pc = 0x2139DCu;
    {
        const bool branch_taken_0x2139dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139DCu;
        // 0x2139e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139dc) {
            ctx->pc = 0x213A84u;
            goto label_213a84;
        }
    }
    ctx->pc = 0x2139E4u;
label_2139e4:
    // 0x2139e4: 0x0  nop
    ctx->pc = 0x2139e4u;
    // NOP
label_2139e8:
    // 0x2139e8: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
label_2139ec:
    if (ctx->pc == 0x2139ECu) {
        ctx->pc = 0x2139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139E8u;
        // 0x2139ec: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139F0u;
        goto label_2139f0;
    }
    ctx->pc = 0x2139E8u;
    {
        const bool branch_taken_0x2139e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139E8u;
        // 0x2139ec: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139e8) {
            ctx->pc = 0x213A2Cu;
            goto label_213a2c;
        }
    }
    ctx->pc = 0x2139F0u;
label_2139f0:
    // 0x2139f0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2139f4:
    // 0x2139f4: 0x8c42a20c  lw          $v0, -0x5DF4($v0)
    ctx->pc = 0x2139f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943244)));
label_2139f8:
    // 0x2139f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2139fc:
    if (ctx->pc == 0x2139FCu) {
        ctx->pc = 0x2139FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139F8u;
        // 0x2139fc: 0x268412e0  addiu       $a0, $s4, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A00u;
        goto label_213a00;
    }
    ctx->pc = 0x2139F8u;
    {
        const bool branch_taken_0x2139f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139F8u;
        // 0x2139fc: 0x268412e0  addiu       $a0, $s4, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139f8) {
            ctx->pc = 0x213A28u;
            goto label_213a28;
        }
    }
    ctx->pc = 0x213A00u;
label_213a00:
    // 0x213a00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x213a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_213a04:
    // 0x213a04: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x213a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_213a08:
    // 0x213a08: 0x40f809  jalr        $v0
label_213a0c:
    if (ctx->pc == 0x213A0Cu) {
        ctx->pc = 0x213A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A08u;
        // 0x213a0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A10u;
        goto label_213a10;
    }
    ctx->pc = 0x213A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213A10u);
        ctx->pc = 0x213A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A08u;
        // 0x213a0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213A08u, 0x213A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213A10u;
label_213a10:
    // 0x213a10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x213a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_213a14:
    // 0x213a14: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_213a18:
    if (ctx->pc == 0x213A18u) {
        ctx->pc = 0x213A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A14u;
        // 0x213a18: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A1Cu;
        goto label_213a1c;
    }
    ctx->pc = 0x213A14u;
    {
        const bool branch_taken_0x213a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x213a14) {
            ctx->pc = 0x213A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213A14u;
            // 0x213a18: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A2Cu;
            goto label_213a2c;
        }
    }
    ctx->pc = 0x213A1Cu;
label_213a1c:
    // 0x213a1c: 0x10000018  b           . + 4 + (0x18 << 2)
label_213a20:
    if (ctx->pc == 0x213A20u) {
        ctx->pc = 0x213A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A1Cu;
        // 0x213a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A24u;
        goto label_213a24;
    }
    ctx->pc = 0x213A1Cu;
    {
        const bool branch_taken_0x213a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A1Cu;
        // 0x213a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a1c) {
            ctx->pc = 0x213A80u;
            goto label_213a80;
        }
    }
    ctx->pc = 0x213A24u;
label_213a24:
    // 0x213a24: 0x0  nop
    ctx->pc = 0x213a24u;
    // NOP
label_213a28:
    // 0x213a28: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x213a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_213a2c:
    // 0x213a2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_213a30:
    if (ctx->pc == 0x213A30u) {
        ctx->pc = 0x213A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A2Cu;
        // 0x213a30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A34u;
        goto label_213a34;
    }
    ctx->pc = 0x213A2Cu;
    {
        const bool branch_taken_0x213a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A2Cu;
        // 0x213a30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a2c) {
            ctx->pc = 0x213A48u;
            goto label_213a48;
        }
    }
    ctx->pc = 0x213A34u;
label_213a34:
    // 0x213a34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x213a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_213a38:
    // 0x213a38: 0xc07eb68  jal         func_1FADA0
label_213a3c:
    if (ctx->pc == 0x213A3Cu) {
        ctx->pc = 0x213A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A38u;
        // 0x213a3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A40u;
        goto label_213a40;
    }
    ctx->pc = 0x213A38u;
    SET_GPR_U32(ctx, 31, 0x213A40u);
    ctx->pc = 0x213A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A38u;
    // 0x213a3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x213A38u, 0x213A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A40u;
label_213a40:
    // 0x213a40: 0x10000009  b           . + 4 + (0x9 << 2)
label_213a44:
    if (ctx->pc == 0x213A44u) {
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A48u;
        goto label_213a48;
    }
    ctx->pc = 0x213A40u;
    {
        const bool branch_taken_0x213a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a40) {
            ctx->pc = 0x213A68u;
            goto label_213a68;
        }
    }
    ctx->pc = 0x213A48u;
label_213a48:
    // 0x213a48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x213a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_213a4c:
    // 0x213a4c: 0xc07eb68  jal         func_1FADA0
label_213a50:
    if (ctx->pc == 0x213A50u) {
        ctx->pc = 0x213A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A4Cu;
        // 0x213a50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A54u;
        goto label_213a54;
    }
    ctx->pc = 0x213A4Cu;
    SET_GPR_U32(ctx, 31, 0x213A54u);
    ctx->pc = 0x213A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A4Cu;
    // 0x213a50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x213A4Cu, 0x213A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A54u;
label_213a54:
    // 0x213a54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x213a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213a58:
    // 0x213a58: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x213a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_213a5c:
    // 0x213a5c: 0xc07eb68  jal         func_1FADA0
label_213a60:
    if (ctx->pc == 0x213A60u) {
        ctx->pc = 0x213A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A5Cu;
        // 0x213a60: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A64u;
        goto label_213a64;
    }
    ctx->pc = 0x213A5Cu;
    SET_GPR_U32(ctx, 31, 0x213A64u);
    ctx->pc = 0x213A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A5Cu;
    // 0x213a60: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x213A5Cu, 0x213A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A64u;
label_213a64:
    // 0x213a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213a68:
    // 0x213a68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x213a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_213a6c:
    // 0x213a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x213a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213a70:
    // 0x213a70: 0xc083d72  jal         func_20F5C8
label_213a74:
    if (ctx->pc == 0x213A74u) {
        ctx->pc = 0x213A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A70u;
        // 0x213a74: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A78u;
        goto label_213a78;
    }
    ctx->pc = 0x213A70u;
    SET_GPR_U32(ctx, 31, 0x213A78u);
    ctx->pc = 0x213A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A70u;
    // 0x213a74: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F5C8u, 0x213A70u, 0x213A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A78u;
label_213a78:
    // 0x213a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213a7c:
    // 0x213a7c: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x213a7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_213a80:
    // 0x213a80: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x213a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_213a84:
    // 0x213a84: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x213a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_213a88:
    // 0x213a88: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x213a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_213a8c:
    // 0x213a8c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x213a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_213a90:
    // 0x213a90: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x213a90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_213a94:
    // 0x213a94: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x213a94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_213a98:
    // 0x213a98: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x213a98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_213a9c:
    // 0x213a9c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x213a9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_213aa0:
    // 0x213aa0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x213aa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_213aa4:
    // 0x213aa4: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x213aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_213aa8:
    // 0x213aa8: 0x3e00008  jr          $ra
label_213aac:
    if (ctx->pc == 0x213AACu) {
        ctx->pc = 0x213AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AA8u;
        // 0x213aac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213AB0u;
        goto label_fallthrough_0x213aa8;
    }
    ctx->pc = 0x213AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AA8u;
        // 0x213aac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x213aa8:
    ctx->pc = 0x213AB0u;
}
