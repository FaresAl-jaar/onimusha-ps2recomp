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

// Function: sub_001DE950
// Address: 0x1de950 - 0x1deb94
void sub_001DE950_0x1de950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE950_0x1de950");
#endif

    switch (ctx->pc) {
        case 0x1de950u: goto label_1de950;
        case 0x1de954u: goto label_1de954;
        case 0x1de958u: goto label_1de958;
        case 0x1de95cu: goto label_1de95c;
        case 0x1de960u: goto label_1de960;
        case 0x1de964u: goto label_1de964;
        case 0x1de968u: goto label_1de968;
        case 0x1de96cu: goto label_1de96c;
        case 0x1de970u: goto label_1de970;
        case 0x1de974u: goto label_1de974;
        case 0x1de978u: goto label_1de978;
        case 0x1de97cu: goto label_1de97c;
        case 0x1de980u: goto label_1de980;
        case 0x1de984u: goto label_1de984;
        case 0x1de988u: goto label_1de988;
        case 0x1de98cu: goto label_1de98c;
        case 0x1de990u: goto label_1de990;
        case 0x1de994u: goto label_1de994;
        case 0x1de998u: goto label_1de998;
        case 0x1de99cu: goto label_1de99c;
        case 0x1de9a0u: goto label_1de9a0;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9a8u: goto label_1de9a8;
        case 0x1de9acu: goto label_1de9ac;
        case 0x1de9b0u: goto label_1de9b0;
        case 0x1de9b4u: goto label_1de9b4;
        case 0x1de9b8u: goto label_1de9b8;
        case 0x1de9bcu: goto label_1de9bc;
        case 0x1de9c0u: goto label_1de9c0;
        case 0x1de9c4u: goto label_1de9c4;
        case 0x1de9c8u: goto label_1de9c8;
        case 0x1de9ccu: goto label_1de9cc;
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9d4u: goto label_1de9d4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9dcu: goto label_1de9dc;
        case 0x1de9e0u: goto label_1de9e0;
        case 0x1de9e4u: goto label_1de9e4;
        case 0x1de9e8u: goto label_1de9e8;
        case 0x1de9ecu: goto label_1de9ec;
        case 0x1de9f0u: goto label_1de9f0;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1de9fcu: goto label_1de9fc;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea04u: goto label_1dea04;
        case 0x1dea08u: goto label_1dea08;
        case 0x1dea0cu: goto label_1dea0c;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea14u: goto label_1dea14;
        case 0x1dea18u: goto label_1dea18;
        case 0x1dea1cu: goto label_1dea1c;
        case 0x1dea20u: goto label_1dea20;
        case 0x1dea24u: goto label_1dea24;
        case 0x1dea28u: goto label_1dea28;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea30u: goto label_1dea30;
        case 0x1dea34u: goto label_1dea34;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea3cu: goto label_1dea3c;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea44u: goto label_1dea44;
        case 0x1dea48u: goto label_1dea48;
        case 0x1dea4cu: goto label_1dea4c;
        case 0x1dea50u: goto label_1dea50;
        case 0x1dea54u: goto label_1dea54;
        case 0x1dea58u: goto label_1dea58;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1dea60u: goto label_1dea60;
        case 0x1dea64u: goto label_1dea64;
        case 0x1dea68u: goto label_1dea68;
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1dea70u: goto label_1dea70;
        case 0x1dea74u: goto label_1dea74;
        case 0x1dea78u: goto label_1dea78;
        case 0x1dea7cu: goto label_1dea7c;
        case 0x1dea80u: goto label_1dea80;
        case 0x1dea84u: goto label_1dea84;
        case 0x1dea88u: goto label_1dea88;
        case 0x1dea8cu: goto label_1dea8c;
        case 0x1dea90u: goto label_1dea90;
        case 0x1dea94u: goto label_1dea94;
        case 0x1dea98u: goto label_1dea98;
        case 0x1dea9cu: goto label_1dea9c;
        case 0x1deaa0u: goto label_1deaa0;
        case 0x1deaa4u: goto label_1deaa4;
        case 0x1deaa8u: goto label_1deaa8;
        case 0x1deaacu: goto label_1deaac;
        case 0x1deab0u: goto label_1deab0;
        case 0x1deab4u: goto label_1deab4;
        case 0x1deab8u: goto label_1deab8;
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac0u: goto label_1deac0;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deac8u: goto label_1deac8;
        case 0x1deaccu: goto label_1deacc;
        case 0x1dead0u: goto label_1dead0;
        case 0x1dead4u: goto label_1dead4;
        case 0x1dead8u: goto label_1dead8;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deae4u: goto label_1deae4;
        case 0x1deae8u: goto label_1deae8;
        case 0x1deaecu: goto label_1deaec;
        case 0x1deaf0u: goto label_1deaf0;
        case 0x1deaf4u: goto label_1deaf4;
        case 0x1deaf8u: goto label_1deaf8;
        case 0x1deafcu: goto label_1deafc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb04u: goto label_1deb04;
        case 0x1deb08u: goto label_1deb08;
        case 0x1deb0cu: goto label_1deb0c;
        case 0x1deb10u: goto label_1deb10;
        case 0x1deb14u: goto label_1deb14;
        case 0x1deb18u: goto label_1deb18;
        case 0x1deb1cu: goto label_1deb1c;
        case 0x1deb20u: goto label_1deb20;
        case 0x1deb24u: goto label_1deb24;
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb2cu: goto label_1deb2c;
        case 0x1deb30u: goto label_1deb30;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb38u: goto label_1deb38;
        case 0x1deb3cu: goto label_1deb3c;
        case 0x1deb40u: goto label_1deb40;
        case 0x1deb44u: goto label_1deb44;
        case 0x1deb48u: goto label_1deb48;
        case 0x1deb4cu: goto label_1deb4c;
        case 0x1deb50u: goto label_1deb50;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deb58u: goto label_1deb58;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb60u: goto label_1deb60;
        case 0x1deb64u: goto label_1deb64;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb6cu: goto label_1deb6c;
        case 0x1deb70u: goto label_1deb70;
        case 0x1deb74u: goto label_1deb74;
        case 0x1deb78u: goto label_1deb78;
        case 0x1deb7cu: goto label_1deb7c;
        case 0x1deb80u: goto label_1deb80;
        case 0x1deb84u: goto label_1deb84;
        case 0x1deb88u: goto label_1deb88;
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deb90u: goto label_1deb90;
        default: break;
    }

    ctx->pc = 0x1de950u;

label_1de950:
    // 0x1de950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1de950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1de954:
    // 0x1de954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1de954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1de958:
    // 0x1de958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1de95c:
    // 0x1de95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de960:
    // 0x1de960: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1de960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1de964:
    // 0x1de964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1de968:
    if (ctx->pc == 0x1DE968u) {
        ctx->pc = 0x1DE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE964u;
        // 0x1de968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE96Cu;
        goto label_1de96c;
    }
    ctx->pc = 0x1DE964u;
    {
        const bool branch_taken_0x1de964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE964u;
        // 0x1de968: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de964) {
            ctx->pc = 0x1DE978u;
            goto label_1de978;
        }
    }
    ctx->pc = 0x1DE96Cu;
label_1de96c:
    // 0x1de96c: 0x10000084  b           . + 4 + (0x84 << 2)
label_1de970:
    if (ctx->pc == 0x1DE970u) {
        ctx->pc = 0x1DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE96Cu;
        // 0x1de970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE974u;
        goto label_1de974;
    }
    ctx->pc = 0x1DE96Cu;
    {
        const bool branch_taken_0x1de96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE96Cu;
        // 0x1de970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de96c) {
            ctx->pc = 0x1DEB80u;
            goto label_1deb80;
        }
    }
    ctx->pc = 0x1DE974u;
label_1de974:
    // 0x1de974: 0x0  nop
    ctx->pc = 0x1de974u;
    // NOP
label_1de978:
    // 0x1de978: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1de978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1de97c:
    // 0x1de97c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1de97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1de980:
    // 0x1de980: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1de980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1de984:
    // 0x1de984: 0x320f809  jalr        $t9
label_1de988:
    if (ctx->pc == 0x1DE988u) {
        ctx->pc = 0x1DE98Cu;
        goto label_1de98c;
    }
    ctx->pc = 0x1DE984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE98Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE984u, 0x1DE98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE98Cu;
label_1de98c:
    // 0x1de98c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de990:
    if (ctx->pc == 0x1DE990u) {
        ctx->pc = 0x1DE994u;
        goto label_1de994;
    }
    ctx->pc = 0x1DE98Cu;
    {
        const bool branch_taken_0x1de98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de98c) {
            ctx->pc = 0x1DE9B0u;
            goto label_1de9b0;
        }
    }
    ctx->pc = 0x1DE994u;
label_1de994:
    // 0x1de994: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1de994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1de998:
    // 0x1de998: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de99c:
    // 0x1de99c: 0x320f809  jalr        $t9
label_1de9a0:
    if (ctx->pc == 0x1DE9A0u) {
        ctx->pc = 0x1DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE99Cu;
        // 0x1de9a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9A4u;
        goto label_1de9a4;
    }
    ctx->pc = 0x1DE99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE9A4u);
        ctx->pc = 0x1DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE99Cu;
        // 0x1de9a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE99Cu, 0x1DE9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE9A4u;
label_1de9a4:
    // 0x1de9a4: 0x10000076  b           . + 4 + (0x76 << 2)
label_1de9a8:
    if (ctx->pc == 0x1DE9A8u) {
        ctx->pc = 0x1DE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9A4u;
        // 0x1de9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9ACu;
        goto label_1de9ac;
    }
    ctx->pc = 0x1DE9A4u;
    {
        const bool branch_taken_0x1de9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9A4u;
        // 0x1de9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9a4) {
            ctx->pc = 0x1DEB80u;
            goto label_1deb80;
        }
    }
    ctx->pc = 0x1DE9ACu;
label_1de9ac:
    // 0x1de9ac: 0x0  nop
    ctx->pc = 0x1de9acu;
    // NOP
label_1de9b0:
    // 0x1de9b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1de9b4:
    // 0x1de9b4: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1de9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1de9b8:
    // 0x1de9b8: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1de9b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de9bc:
    // 0x1de9bc: 0x8507000e  lh          $a3, 0xE($t0)
    ctx->pc = 0x1de9bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_1de9c0:
    // 0x1de9c0: 0x8503000c  lh          $v1, 0xC($t0)
    ctx->pc = 0x1de9c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_1de9c4:
    // 0x1de9c4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1de9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1de9c8:
    // 0x1de9c8: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1de9c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1de9cc:
    // 0x1de9cc: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1de9ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1de9d0:
    // 0x1de9d0: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1de9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1de9d4:
    // 0x1de9d4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1de9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1de9d8:
    // 0x1de9d8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1de9d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1de9dc:
    // 0x1de9dc: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1de9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1de9e0:
    // 0x1de9e0: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1de9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1de9e4:
    // 0x1de9e4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1de9e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de9e8:
    // 0x1de9e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1de9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1de9ec:
    // 0x1de9ec: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1de9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1de9f0:
    // 0x1de9f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1de9f4:
    // 0x1de9f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1de9f8:
    // 0x1de9f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1de9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1de9fc:
    // 0x1de9fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dea00:
    if (ctx->pc == 0x1DEA00u) {
        ctx->pc = 0x1DEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9FCu;
        // 0x1dea00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA04u;
        goto label_1dea04;
    }
    ctx->pc = 0x1DE9FCu;
    {
        const bool branch_taken_0x1de9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9FCu;
        // 0x1dea00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9fc) {
            ctx->pc = 0x1DEA10u;
            goto label_1dea10;
        }
    }
    ctx->pc = 0x1DEA04u;
label_1dea04:
    // 0x1dea04: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1dea08:
    if (ctx->pc == 0x1DEA08u) {
        ctx->pc = 0x1DEA0Cu;
        goto label_1dea0c;
    }
    ctx->pc = 0x1DEA04u;
    {
        const bool branch_taken_0x1dea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea04) {
            ctx->pc = 0x1DEB80u;
            goto label_1deb80;
        }
    }
    ctx->pc = 0x1DEA0Cu;
label_1dea0c:
    // 0x1dea0c: 0x0  nop
    ctx->pc = 0x1dea0cu;
    // NOP
label_1dea10:
    // 0x1dea10: 0x25100010  addiu       $s0, $t0, 0x10
    ctx->pc = 0x1dea10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1dea14:
    // 0x1dea14: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x1dea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1dea18:
    // 0x1dea18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dea1c:
    // 0x1dea1c: 0xc0766b8  jal         func_1D9AE0
label_1dea20:
    if (ctx->pc == 0x1DEA20u) {
        ctx->pc = 0x1DEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA1Cu;
        // 0x1dea20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA24u;
        goto label_1dea24;
    }
    ctx->pc = 0x1DEA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA24u);
    ctx->pc = 0x1DEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA1Cu;
    // 0x1dea20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1DEA1Cu, 0x1DEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA24u;
label_1dea24:
    // 0x1dea24: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1dea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dea28:
    // 0x1dea28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dea28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dea2c:
    // 0x1dea2c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dea30:
    // 0x1dea30: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1dea30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dea34:
    // 0x1dea34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dea38:
    // 0x1dea38: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dea38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dea3c:
    // 0x1dea3c: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1dea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dea40:
    // 0x1dea40: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x1dea40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1dea44:
    // 0x1dea44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1dea48:
    if (ctx->pc == 0x1DEA48u) {
        ctx->pc = 0x1DEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA44u;
        // 0x1dea48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA4Cu;
        goto label_1dea4c;
    }
    ctx->pc = 0x1DEA44u;
    {
        const bool branch_taken_0x1dea44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA44u;
        // 0x1dea48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea44) {
            ctx->pc = 0x1DEA58u;
            goto label_1dea58;
        }
    }
    ctx->pc = 0x1DEA4Cu;
label_1dea4c:
    // 0x1dea4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dea50:
    // 0x1dea50: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dea54:
    if (ctx->pc == 0x1DEA54u) {
        ctx->pc = 0x1DEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA50u;
        // 0x1dea54: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA58u;
        goto label_1dea58;
    }
    ctx->pc = 0x1DEA50u;
    {
        const bool branch_taken_0x1dea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA50u;
        // 0x1dea54: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea50) {
            ctx->pc = 0x1DEA70u;
            goto label_1dea70;
        }
    }
    ctx->pc = 0x1DEA58u;
label_1dea58:
    // 0x1dea58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dea58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dea5c:
    // 0x1dea5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dea60:
    // 0x1dea60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dea60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dea64:
    // 0x1dea64: 0x0  nop
    ctx->pc = 0x1dea64u;
    // NOP
label_1dea68:
    // 0x1dea68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1dea68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dea6c:
    // 0x1dea6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dea6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dea70:
    // 0x1dea70: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1dea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1dea74:
    // 0x1dea74: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1dea74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1dea78:
    // 0x1dea78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dea78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dea7c:
    // 0x1dea7c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dea80:
    // 0x1dea80: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1dea80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dea84:
    // 0x1dea84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dea84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dea88:
    // 0x1dea88: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1dea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dea8c:
    // 0x1dea8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1dea8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1dea90:
    // 0x1dea90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dea94:
    // 0x1dea94: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dea94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dea98:
    // 0x1dea98: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dea9c:
    // 0x1dea9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dea9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1deaa0:
    // 0x1deaa0: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1deaa4:
    // 0x1deaa4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1deaa8:
    if (ctx->pc == 0x1DEAA8u) {
        ctx->pc = 0x1DEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAA4u;
        // 0x1deaa8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAACu;
        goto label_1deaac;
    }
    ctx->pc = 0x1DEAA4u;
    {
        const bool branch_taken_0x1deaa4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAA4u;
        // 0x1deaa8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deaa4) {
            ctx->pc = 0x1DEAB8u;
            goto label_1deab8;
        }
    }
    ctx->pc = 0x1DEAACu;
label_1deaac:
    // 0x1deaac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1deaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deab0:
    // 0x1deab0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1deab4:
    if (ctx->pc == 0x1DEAB4u) {
        ctx->pc = 0x1DEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAB0u;
        // 0x1deab4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAB8u;
        goto label_1deab8;
    }
    ctx->pc = 0x1DEAB0u;
    {
        const bool branch_taken_0x1deab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAB0u;
        // 0x1deab4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deab0) {
            ctx->pc = 0x1DEAD4u;
            goto label_1dead4;
        }
    }
    ctx->pc = 0x1DEAB8u;
label_1deab8:
    // 0x1deab8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1deab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1deabc:
    // 0x1deabc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1deabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1deac0:
    // 0x1deac0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1deac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1deac4:
    // 0x1deac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1deac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deac8:
    // 0x1deac8: 0x0  nop
    ctx->pc = 0x1deac8u;
    // NOP
label_1deacc:
    // 0x1deacc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1deaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dead0:
    // 0x1dead0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dead0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dead4:
    // 0x1dead4: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1dead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1dead8:
    // 0x1dead8: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1dead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1deadc:
    // 0x1deadc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1deadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1deae0:
    // 0x1deae0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1deae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1deae4:
    // 0x1deae4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1deae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1deae8:
    // 0x1deae8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1deae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1deaec:
    // 0x1deaec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1deaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1deaf0:
    // 0x1deaf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1deaf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1deaf4:
    // 0x1deaf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1deaf8:
    // 0x1deaf8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1deaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1deafc:
    // 0x1deafc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1deb00:
    // 0x1deb00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1deb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1deb04:
    // 0x1deb04: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1deb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1deb08:
    // 0x1deb08: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1deb0c:
    if (ctx->pc == 0x1DEB0Cu) {
        ctx->pc = 0x1DEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB08u;
        // 0x1deb0c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB10u;
        goto label_1deb10;
    }
    ctx->pc = 0x1DEB08u;
    {
        const bool branch_taken_0x1deb08 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB08u;
        // 0x1deb0c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb08) {
            ctx->pc = 0x1DEB1Cu;
            goto label_1deb1c;
        }
    }
    ctx->pc = 0x1DEB10u;
label_1deb10:
    // 0x1deb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1deb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deb14:
    // 0x1deb14: 0x10000008  b           . + 4 + (0x8 << 2)
label_1deb18:
    if (ctx->pc == 0x1DEB18u) {
        ctx->pc = 0x1DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB14u;
        // 0x1deb18: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB1Cu;
        goto label_1deb1c;
    }
    ctx->pc = 0x1DEB14u;
    {
        const bool branch_taken_0x1deb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB14u;
        // 0x1deb18: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb14) {
            ctx->pc = 0x1DEB38u;
            goto label_1deb38;
        }
    }
    ctx->pc = 0x1DEB1Cu;
label_1deb1c:
    // 0x1deb1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1deb20:
    // 0x1deb20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1deb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1deb24:
    // 0x1deb24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1deb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1deb28:
    // 0x1deb28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1deb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deb2c:
    // 0x1deb2c: 0x0  nop
    ctx->pc = 0x1deb2cu;
    // NOP
label_1deb30:
    // 0x1deb30: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1deb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1deb34:
    // 0x1deb34: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1deb34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1deb38:
    // 0x1deb38: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1deb3c:
    // 0x1deb3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1deb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1deb40:
    // 0x1deb40: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1deb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1deb44:
    // 0x1deb44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1deb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1deb48:
    // 0x1deb48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1deb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1deb4c:
    // 0x1deb4c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1deb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1deb50:
    // 0x1deb50: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1deb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1deb54:
    // 0x1deb54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1deb54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1deb58:
    // 0x1deb58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1deb58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1deb5c:
    // 0x1deb5c: 0xc0766a8  jal         func_1D9AA0
label_1deb60:
    if (ctx->pc == 0x1DEB60u) {
        ctx->pc = 0x1DEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB5Cu;
        // 0x1deb60: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB64u;
        goto label_1deb64;
    }
    ctx->pc = 0x1DEB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB64u);
    ctx->pc = 0x1DEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB5Cu;
    // 0x1deb60: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DEB5Cu, 0x1DEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB64u;
label_1deb64:
    // 0x1deb64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1deb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1deb68:
    // 0x1deb68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1deb6c:
    // 0x1deb6c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1deb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1deb70:
    // 0x1deb70: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1deb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1deb74:
    // 0x1deb74: 0xc0766a8  jal         func_1D9AA0
label_1deb78:
    if (ctx->pc == 0x1DEB78u) {
        ctx->pc = 0x1DEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB74u;
        // 0x1deb78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB7Cu;
        goto label_1deb7c;
    }
    ctx->pc = 0x1DEB74u;
    SET_GPR_U32(ctx, 31, 0x1DEB7Cu);
    ctx->pc = 0x1DEB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB74u;
    // 0x1deb78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DEB74u, 0x1DEB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB7Cu;
label_1deb7c:
    // 0x1deb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb80:
    // 0x1deb80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1deb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1deb84:
    // 0x1deb84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1deb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1deb88:
    // 0x1deb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1deb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1deb8c:
    // 0x1deb8c: 0x3e00008  jr          $ra
label_1deb90:
    if (ctx->pc == 0x1DEB90u) {
        ctx->pc = 0x1DEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB8Cu;
        // 0x1deb90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB94u;
        goto label_fallthrough_0x1deb8c;
    }
    ctx->pc = 0x1DEB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB8Cu;
        // 0x1deb90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1deb8c:
    ctx->pc = 0x1DEB94u;
}
