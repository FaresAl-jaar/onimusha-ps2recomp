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

// Function: sub_0036C960
// Address: 0x36c960 - 0x36e308
void sub_0036C960_0x36c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C960_0x36c960");
#endif

    switch (ctx->pc) {
        case 0x36c994u: goto label_36c994;
        case 0x36c9acu: goto label_36c9ac;
        case 0x36c9d0u: goto label_36c9d0;
        case 0x36ca40u: goto label_36ca40;
        case 0x36e200u: goto label_36e200;
        case 0x36e2a0u: goto label_36e2a0;
        case 0x36e2a8u: goto label_36e2a8;
        case 0x36e2c4u: goto label_36e2c4;
        default: break;
    }

    ctx->pc = 0x36c960u;

    // 0x36c960: 0x27bdfa20  addiu       $sp, $sp, -0x5E0
    ctx->pc = 0x36c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965792));
    // 0x36c964: 0x240423a0  addiu       $a0, $zero, 0x23A0
    ctx->pc = 0x36c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9120));
    // 0x36c968: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x36c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x36c96c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x36c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x36c970: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36c970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x36c974: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36c974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36c978: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36c97c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36c980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36c984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36c988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c98c: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x36C98Cu;
    SET_GPR_U32(ctx, 31, 0x36C994u);
    ctx->pc = 0x36C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C98Cu;
    // 0x36c990: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x36C98Cu, 0x36C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C994u;
label_36c994:
    // 0x36c994: 0xaf828c00  sw          $v0, -0x7400($gp)
    ctx->pc = 0x36c994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937600), GPR_U32(ctx, 2));
    // 0x36c998: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c99c: 0x1080064e  beqz        $a0, . + 4 + (0x64E << 2)
    ctx->pc = 0x36C99Cu;
    {
        const bool branch_taken_0x36c99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C99Cu;
        // 0x36c9a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c99c) {
            ctx->pc = 0x36E2D8u;
            goto label_36e2d8;
        }
    }
    ctx->pc = 0x36C9A4u;
    // 0x36c9a4: 0xc049590  jal         func_125640
    ctx->pc = 0x36C9A4u;
    SET_GPR_U32(ctx, 31, 0x36C9ACu);
    ctx->pc = 0x36C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9A4u;
    // 0x36c9a8: 0x240623a0  addiu       $a2, $zero, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x36C9A4u, 0x36C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9ACu;
label_36c9ac:
    // 0x36c9ac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x36c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x36c9b0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c9b4: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x36c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x36c9b8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x36c9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36c9bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x36c9c0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c9c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c9c8: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x36C9C8u;
    SET_GPR_U32(ctx, 31, 0x36C9D0u);
    ctx->pc = 0x36C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C9C8u;
    // 0x36c9cc: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x36C9C8u, 0x36C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C9D0u;
label_36c9d0:
    // 0x36c9d0: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36c9d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c9d4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x36c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x36c9d8: 0x94420068  lhu         $v0, 0x68($v0)
    ctx->pc = 0x36c9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x36c9dc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x36c9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36c9e0: 0x10200125  beqz        $at, . + 4 + (0x125 << 2)
    ctx->pc = 0x36C9E0u;
    {
        const bool branch_taken_0x36c9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C9E0u;
        // 0x36c9e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c9e0) {
            ctx->pc = 0x36CE78u;
            goto label_36ce78;
        }
    }
    ctx->pc = 0x36C9E8u;
    // 0x36c9e8: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x36c9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36c9ec: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x36c9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36c9f0: 0x2411002a  addiu       $s1, $zero, 0x2A
    ctx->pc = 0x36c9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x36c9f4: 0x24100035  addiu       $s0, $zero, 0x35
    ctx->pc = 0x36c9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x36c9f8: 0x240f003c  addiu       $t7, $zero, 0x3C
    ctx->pc = 0x36c9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x36c9fc: 0x240e003d  addiu       $t6, $zero, 0x3D
    ctx->pc = 0x36c9fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x36ca00: 0x240d003e  addiu       $t5, $zero, 0x3E
    ctx->pc = 0x36ca00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x36ca04: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x36ca04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36ca08: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x36ca08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca0c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x36ca0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ca10: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x36ca10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ca14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x36ca14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ca18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x36ca18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36ca1c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36ca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36ca20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36ca24: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36ca28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x36ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36ca2c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36ca30: 0x2418000c  addiu       $t8, $zero, 0xC
    ctx->pc = 0x36ca30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36ca34: 0x2419000d  addiu       $t9, $zero, 0xD
    ctx->pc = 0x36ca34u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36ca38: 0x241e000e  addiu       $fp, $zero, 0xE
    ctx->pc = 0x36ca38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36ca3c: 0x0  nop
    ctx->pc = 0x36ca3cu;
    // NOP
label_36ca40:
    // 0x36ca40: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x36ca40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36ca44: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CA44u;
    {
        const bool branch_taken_0x36ca44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        ctx->pc = 0x36CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA44u;
        // 0x36ca48: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ca44) {
            ctx->pc = 0x36CA50u;
            goto label_36ca50;
        }
    }
    ctx->pc = 0x36CA4Cu;
    // 0x36ca4c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x36ca4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ca50:
    // 0x36ca50: 0x16930003  bne         $s4, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CA50u;
    {
        const bool branch_taken_0x36ca50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x36ca50) {
            ctx->pc = 0x36CA60u;
            goto label_36ca60;
        }
    }
    ctx->pc = 0x36CA58u;
    // 0x36ca58: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x36ca58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ca5c: 0x0  nop
    ctx->pc = 0x36ca5cu;
    // NOP
label_36ca60:
    // 0x36ca60: 0x16920003  bne         $s4, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CA60u;
    {
        const bool branch_taken_0x36ca60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        if (branch_taken_0x36ca60) {
            ctx->pc = 0x36CA70u;
            goto label_36ca70;
        }
    }
    ctx->pc = 0x36CA68u;
    // 0x36ca68: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x36ca68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ca6c: 0x0  nop
    ctx->pc = 0x36ca6cu;
    // NOP
label_36ca70:
    // 0x36ca70: 0x16910003  bne         $s4, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CA70u;
    {
        const bool branch_taken_0x36ca70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        if (branch_taken_0x36ca70) {
            ctx->pc = 0x36CA80u;
            goto label_36ca80;
        }
    }
    ctx->pc = 0x36CA78u;
    // 0x36ca78: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x36ca78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ca7c: 0x0  nop
    ctx->pc = 0x36ca7cu;
    // NOP
label_36ca80:
    // 0x36ca80: 0x16900003  bne         $s4, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CA80u;
    {
        const bool branch_taken_0x36ca80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        if (branch_taken_0x36ca80) {
            ctx->pc = 0x36CA90u;
            goto label_36ca90;
        }
    }
    ctx->pc = 0x36CA88u;
    // 0x36ca88: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x36ca88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36ca8c: 0x0  nop
    ctx->pc = 0x36ca8cu;
    // NOP
label_36ca90:
    // 0x36ca90: 0x168f0003  bne         $s4, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CA90u;
    {
        const bool branch_taken_0x36ca90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 15));
        if (branch_taken_0x36ca90) {
            ctx->pc = 0x36CAA0u;
            goto label_36caa0;
        }
    }
    ctx->pc = 0x36CA98u;
    // 0x36ca98: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x36ca98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36ca9c: 0x0  nop
    ctx->pc = 0x36ca9cu;
    // NOP
label_36caa0:
    // 0x36caa0: 0x168e0003  bne         $s4, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CAA0u;
    {
        const bool branch_taken_0x36caa0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 14));
        if (branch_taken_0x36caa0) {
            ctx->pc = 0x36CAB0u;
            goto label_36cab0;
        }
    }
    ctx->pc = 0x36CAA8u;
    // 0x36caa8: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x36caa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36caac: 0x0  nop
    ctx->pc = 0x36caacu;
    // NOP
label_36cab0:
    // 0x36cab0: 0x168d0003  bne         $s4, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CAB0u;
    {
        const bool branch_taken_0x36cab0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 13));
        if (branch_taken_0x36cab0) {
            ctx->pc = 0x36CAC0u;
            goto label_36cac0;
        }
    }
    ctx->pc = 0x36CAB8u;
    // 0x36cab8: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x36cab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36cabc: 0x0  nop
    ctx->pc = 0x36cabcu;
    // NOP
label_36cac0:
    // 0x36cac0: 0x168c0003  bne         $s4, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CAC0u;
    {
        const bool branch_taken_0x36cac0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 12));
        if (branch_taken_0x36cac0) {
            ctx->pc = 0x36CAD0u;
            goto label_36cad0;
        }
    }
    ctx->pc = 0x36CAC8u;
    // 0x36cac8: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x36cac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36cacc: 0x0  nop
    ctx->pc = 0x36caccu;
    // NOP
label_36cad0:
    // 0x36cad0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CAD0u;
    {
        const bool branch_taken_0x36cad0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x36cad0) {
            ctx->pc = 0x36CAE0u;
            goto label_36cae0;
        }
    }
    ctx->pc = 0x36CAD8u;
    // 0x36cad8: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x36cad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36cadc: 0x0  nop
    ctx->pc = 0x36cadcu;
    // NOP
label_36cae0:
    // 0x36cae0: 0x168b0003  bne         $s4, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CAE0u;
    {
        const bool branch_taken_0x36cae0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 11));
        if (branch_taken_0x36cae0) {
            ctx->pc = 0x36CAF0u;
            goto label_36caf0;
        }
    }
    ctx->pc = 0x36CAE8u;
    // 0x36cae8: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x36cae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36caec: 0x0  nop
    ctx->pc = 0x36caecu;
    // NOP
label_36caf0:
    // 0x36caf0: 0x168a0003  bne         $s4, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CAF0u;
    {
        const bool branch_taken_0x36caf0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 10));
        if (branch_taken_0x36caf0) {
            ctx->pc = 0x36CB00u;
            goto label_36cb00;
        }
    }
    ctx->pc = 0x36CAF8u;
    // 0x36caf8: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x36caf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36cafc: 0x0  nop
    ctx->pc = 0x36cafcu;
    // NOP
label_36cb00:
    // 0x36cb00: 0x16890003  bne         $s4, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB00u;
    {
        const bool branch_taken_0x36cb00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 9));
        if (branch_taken_0x36cb00) {
            ctx->pc = 0x36CB10u;
            goto label_36cb10;
        }
    }
    ctx->pc = 0x36CB08u;
    // 0x36cb08: 0x2415000e  addiu       $s5, $zero, 0xE
    ctx->pc = 0x36cb08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36cb0c: 0x0  nop
    ctx->pc = 0x36cb0cu;
    // NOP
label_36cb10:
    // 0x36cb10: 0x16880003  bne         $s4, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB10u;
    {
        const bool branch_taken_0x36cb10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 8));
        if (branch_taken_0x36cb10) {
            ctx->pc = 0x36CB20u;
            goto label_36cb20;
        }
    }
    ctx->pc = 0x36CB18u;
    // 0x36cb18: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x36cb18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36cb1c: 0x0  nop
    ctx->pc = 0x36cb1cu;
    // NOP
label_36cb20:
    // 0x36cb20: 0x16870003  bne         $s4, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB20u;
    {
        const bool branch_taken_0x36cb20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 7));
        if (branch_taken_0x36cb20) {
            ctx->pc = 0x36CB30u;
            goto label_36cb30;
        }
    }
    ctx->pc = 0x36CB28u;
    // 0x36cb28: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x36cb28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36cb2c: 0x0  nop
    ctx->pc = 0x36cb2cu;
    // NOP
label_36cb30:
    // 0x36cb30: 0x16860003  bne         $s4, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB30u;
    {
        const bool branch_taken_0x36cb30 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 6));
        if (branch_taken_0x36cb30) {
            ctx->pc = 0x36CB40u;
            goto label_36cb40;
        }
    }
    ctx->pc = 0x36CB38u;
    // 0x36cb38: 0x24150011  addiu       $s5, $zero, 0x11
    ctx->pc = 0x36cb38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36cb3c: 0x0  nop
    ctx->pc = 0x36cb3cu;
    // NOP
label_36cb40:
    // 0x36cb40: 0x16850003  bne         $s4, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB40u;
    {
        const bool branch_taken_0x36cb40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        if (branch_taken_0x36cb40) {
            ctx->pc = 0x36CB50u;
            goto label_36cb50;
        }
    }
    ctx->pc = 0x36CB48u;
    // 0x36cb48: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x36cb48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36cb4c: 0x0  nop
    ctx->pc = 0x36cb4cu;
    // NOP
label_36cb50:
    // 0x36cb50: 0x16840003  bne         $s4, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB50u;
    {
        const bool branch_taken_0x36cb50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        if (branch_taken_0x36cb50) {
            ctx->pc = 0x36CB60u;
            goto label_36cb60;
        }
    }
    ctx->pc = 0x36CB58u;
    // 0x36cb58: 0x24150013  addiu       $s5, $zero, 0x13
    ctx->pc = 0x36cb58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36cb5c: 0x0  nop
    ctx->pc = 0x36cb5cu;
    // NOP
label_36cb60:
    // 0x36cb60: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB60u;
    {
        const bool branch_taken_0x36cb60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x36cb60) {
            ctx->pc = 0x36CB70u;
            goto label_36cb70;
        }
    }
    ctx->pc = 0x36CB68u;
    // 0x36cb68: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x36cb68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36cb6c: 0x0  nop
    ctx->pc = 0x36cb6cu;
    // NOP
label_36cb70:
    // 0x36cb70: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB70u;
    {
        const bool branch_taken_0x36cb70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x36cb70) {
            ctx->pc = 0x36CB80u;
            goto label_36cb80;
        }
    }
    ctx->pc = 0x36CB78u;
    // 0x36cb78: 0x24150015  addiu       $s5, $zero, 0x15
    ctx->pc = 0x36cb78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36cb7c: 0x0  nop
    ctx->pc = 0x36cb7cu;
    // NOP
label_36cb80:
    // 0x36cb80: 0x16980003  bne         $s4, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB80u;
    {
        const bool branch_taken_0x36cb80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 24));
        if (branch_taken_0x36cb80) {
            ctx->pc = 0x36CB90u;
            goto label_36cb90;
        }
    }
    ctx->pc = 0x36CB88u;
    // 0x36cb88: 0x24150016  addiu       $s5, $zero, 0x16
    ctx->pc = 0x36cb88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36cb8c: 0x0  nop
    ctx->pc = 0x36cb8cu;
    // NOP
label_36cb90:
    // 0x36cb90: 0x16990003  bne         $s4, $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CB90u;
    {
        const bool branch_taken_0x36cb90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 25));
        if (branch_taken_0x36cb90) {
            ctx->pc = 0x36CBA0u;
            goto label_36cba0;
        }
    }
    ctx->pc = 0x36CB98u;
    // 0x36cb98: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x36cb98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x36cb9c: 0x0  nop
    ctx->pc = 0x36cb9cu;
    // NOP
label_36cba0:
    // 0x36cba0: 0x169e0003  bne         $s4, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x36CBA0u;
    {
        const bool branch_taken_0x36cba0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        if (branch_taken_0x36cba0) {
            ctx->pc = 0x36CBB0u;
            goto label_36cbb0;
        }
    }
    ctx->pc = 0x36CBA8u;
    // 0x36cba8: 0x24150018  addiu       $s5, $zero, 0x18
    ctx->pc = 0x36cba8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x36cbac: 0x0  nop
    ctx->pc = 0x36cbacu;
    // NOP
label_36cbb0:
    // 0x36cbb0: 0x2417000f  addiu       $s7, $zero, 0xF
    ctx->pc = 0x36cbb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36cbb4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CBB4u;
    {
        const bool branch_taken_0x36cbb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cbb4) {
            ctx->pc = 0x36CBC0u;
            goto label_36cbc0;
        }
    }
    ctx->pc = 0x36CBBCu;
    // 0x36cbbc: 0x24150019  addiu       $s5, $zero, 0x19
    ctx->pc = 0x36cbbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_36cbc0:
    // 0x36cbc0: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x36cbc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36cbc4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CBC4u;
    {
        const bool branch_taken_0x36cbc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cbc4) {
            ctx->pc = 0x36CBD0u;
            goto label_36cbd0;
        }
    }
    ctx->pc = 0x36CBCCu;
    // 0x36cbcc: 0x2415001a  addiu       $s5, $zero, 0x1A
    ctx->pc = 0x36cbccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_36cbd0:
    // 0x36cbd0: 0x24170011  addiu       $s7, $zero, 0x11
    ctx->pc = 0x36cbd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36cbd4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CBD4u;
    {
        const bool branch_taken_0x36cbd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cbd4) {
            ctx->pc = 0x36CBE0u;
            goto label_36cbe0;
        }
    }
    ctx->pc = 0x36CBDCu;
    // 0x36cbdc: 0x2415001b  addiu       $s5, $zero, 0x1B
    ctx->pc = 0x36cbdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_36cbe0:
    // 0x36cbe0: 0x24170012  addiu       $s7, $zero, 0x12
    ctx->pc = 0x36cbe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36cbe4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CBE4u;
    {
        const bool branch_taken_0x36cbe4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cbe4) {
            ctx->pc = 0x36CBF0u;
            goto label_36cbf0;
        }
    }
    ctx->pc = 0x36CBECu;
    // 0x36cbec: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x36cbecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_36cbf0:
    // 0x36cbf0: 0x24170013  addiu       $s7, $zero, 0x13
    ctx->pc = 0x36cbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36cbf4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CBF4u;
    {
        const bool branch_taken_0x36cbf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cbf4) {
            ctx->pc = 0x36CC00u;
            goto label_36cc00;
        }
    }
    ctx->pc = 0x36CBFCu;
    // 0x36cbfc: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x36cbfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_36cc00:
    // 0x36cc00: 0x24170015  addiu       $s7, $zero, 0x15
    ctx->pc = 0x36cc00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36cc04: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC04u;
    {
        const bool branch_taken_0x36cc04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc04) {
            ctx->pc = 0x36CC10u;
            goto label_36cc10;
        }
    }
    ctx->pc = 0x36CC0Cu;
    // 0x36cc0c: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x36cc0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_36cc10:
    // 0x36cc10: 0x24170016  addiu       $s7, $zero, 0x16
    ctx->pc = 0x36cc10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36cc14: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC14u;
    {
        const bool branch_taken_0x36cc14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc14) {
            ctx->pc = 0x36CC20u;
            goto label_36cc20;
        }
    }
    ctx->pc = 0x36CC1Cu;
    // 0x36cc1c: 0x2415001f  addiu       $s5, $zero, 0x1F
    ctx->pc = 0x36cc1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36cc20:
    // 0x36cc20: 0x24170017  addiu       $s7, $zero, 0x17
    ctx->pc = 0x36cc20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x36cc24: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC24u;
    {
        const bool branch_taken_0x36cc24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc24) {
            ctx->pc = 0x36CC30u;
            goto label_36cc30;
        }
    }
    ctx->pc = 0x36CC2Cu;
    // 0x36cc2c: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x36cc2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_36cc30:
    // 0x36cc30: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x36cc30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x36cc34: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC34u;
    {
        const bool branch_taken_0x36cc34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc34) {
            ctx->pc = 0x36CC40u;
            goto label_36cc40;
        }
    }
    ctx->pc = 0x36CC3Cu;
    // 0x36cc3c: 0x24150021  addiu       $s5, $zero, 0x21
    ctx->pc = 0x36cc3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_36cc40:
    // 0x36cc40: 0x24170019  addiu       $s7, $zero, 0x19
    ctx->pc = 0x36cc40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x36cc44: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC44u;
    {
        const bool branch_taken_0x36cc44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc44) {
            ctx->pc = 0x36CC50u;
            goto label_36cc50;
        }
    }
    ctx->pc = 0x36CC4Cu;
    // 0x36cc4c: 0x24150022  addiu       $s5, $zero, 0x22
    ctx->pc = 0x36cc4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_36cc50:
    // 0x36cc50: 0x2417001a  addiu       $s7, $zero, 0x1A
    ctx->pc = 0x36cc50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x36cc54: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC54u;
    {
        const bool branch_taken_0x36cc54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc54) {
            ctx->pc = 0x36CC60u;
            goto label_36cc60;
        }
    }
    ctx->pc = 0x36CC5Cu;
    // 0x36cc5c: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x36cc5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_36cc60:
    // 0x36cc60: 0x2417001b  addiu       $s7, $zero, 0x1B
    ctx->pc = 0x36cc60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36cc64: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC64u;
    {
        const bool branch_taken_0x36cc64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc64) {
            ctx->pc = 0x36CC70u;
            goto label_36cc70;
        }
    }
    ctx->pc = 0x36CC6Cu;
    // 0x36cc6c: 0x24150024  addiu       $s5, $zero, 0x24
    ctx->pc = 0x36cc6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_36cc70:
    // 0x36cc70: 0x2417001c  addiu       $s7, $zero, 0x1C
    ctx->pc = 0x36cc70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x36cc74: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC74u;
    {
        const bool branch_taken_0x36cc74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc74) {
            ctx->pc = 0x36CC80u;
            goto label_36cc80;
        }
    }
    ctx->pc = 0x36CC7Cu;
    // 0x36cc7c: 0x24150025  addiu       $s5, $zero, 0x25
    ctx->pc = 0x36cc7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_36cc80:
    // 0x36cc80: 0x2417001d  addiu       $s7, $zero, 0x1D
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x36cc84: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC84u;
    {
        const bool branch_taken_0x36cc84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc84) {
            ctx->pc = 0x36CC90u;
            goto label_36cc90;
        }
    }
    ctx->pc = 0x36CC8Cu;
    // 0x36cc8c: 0x24150026  addiu       $s5, $zero, 0x26
    ctx->pc = 0x36cc8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_36cc90:
    // 0x36cc90: 0x2417001e  addiu       $s7, $zero, 0x1E
    ctx->pc = 0x36cc90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36cc94: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CC94u;
    {
        const bool branch_taken_0x36cc94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cc94) {
            ctx->pc = 0x36CCA0u;
            goto label_36cca0;
        }
    }
    ctx->pc = 0x36CC9Cu;
    // 0x36cc9c: 0x24150027  addiu       $s5, $zero, 0x27
    ctx->pc = 0x36cc9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_36cca0:
    // 0x36cca0: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x36cca0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36cca4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CCA4u;
    {
        const bool branch_taken_0x36cca4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cca4) {
            ctx->pc = 0x36CCB0u;
            goto label_36ccb0;
        }
    }
    ctx->pc = 0x36CCACu;
    // 0x36ccac: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x36ccacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_36ccb0:
    // 0x36ccb0: 0x24170021  addiu       $s7, $zero, 0x21
    ctx->pc = 0x36ccb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x36ccb4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CCB4u;
    {
        const bool branch_taken_0x36ccb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ccb4) {
            ctx->pc = 0x36CCC0u;
            goto label_36ccc0;
        }
    }
    ctx->pc = 0x36CCBCu;
    // 0x36ccbc: 0x24150029  addiu       $s5, $zero, 0x29
    ctx->pc = 0x36ccbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_36ccc0:
    // 0x36ccc0: 0x24170022  addiu       $s7, $zero, 0x22
    ctx->pc = 0x36ccc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x36ccc4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CCC4u;
    {
        const bool branch_taken_0x36ccc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ccc4) {
            ctx->pc = 0x36CCD0u;
            goto label_36ccd0;
        }
    }
    ctx->pc = 0x36CCCCu;
    // 0x36cccc: 0x2415002a  addiu       $s5, $zero, 0x2A
    ctx->pc = 0x36ccccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_36ccd0:
    // 0x36ccd0: 0x24170023  addiu       $s7, $zero, 0x23
    ctx->pc = 0x36ccd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x36ccd4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CCD4u;
    {
        const bool branch_taken_0x36ccd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ccd4) {
            ctx->pc = 0x36CCE0u;
            goto label_36cce0;
        }
    }
    ctx->pc = 0x36CCDCu;
    // 0x36ccdc: 0x2415002b  addiu       $s5, $zero, 0x2B
    ctx->pc = 0x36ccdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_36cce0:
    // 0x36cce0: 0x24170024  addiu       $s7, $zero, 0x24
    ctx->pc = 0x36cce0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x36cce4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CCE4u;
    {
        const bool branch_taken_0x36cce4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cce4) {
            ctx->pc = 0x36CCF0u;
            goto label_36ccf0;
        }
    }
    ctx->pc = 0x36CCECu;
    // 0x36ccec: 0x2415002c  addiu       $s5, $zero, 0x2C
    ctx->pc = 0x36ccecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_36ccf0:
    // 0x36ccf0: 0x24170025  addiu       $s7, $zero, 0x25
    ctx->pc = 0x36ccf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x36ccf4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CCF4u;
    {
        const bool branch_taken_0x36ccf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ccf4) {
            ctx->pc = 0x36CD00u;
            goto label_36cd00;
        }
    }
    ctx->pc = 0x36CCFCu;
    // 0x36ccfc: 0x2415002d  addiu       $s5, $zero, 0x2D
    ctx->pc = 0x36ccfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_36cd00:
    // 0x36cd00: 0x24170026  addiu       $s7, $zero, 0x26
    ctx->pc = 0x36cd00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x36cd04: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD04u;
    {
        const bool branch_taken_0x36cd04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd04) {
            ctx->pc = 0x36CD10u;
            goto label_36cd10;
        }
    }
    ctx->pc = 0x36CD0Cu;
    // 0x36cd0c: 0x2415002e  addiu       $s5, $zero, 0x2E
    ctx->pc = 0x36cd0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_36cd10:
    // 0x36cd10: 0x24170027  addiu       $s7, $zero, 0x27
    ctx->pc = 0x36cd10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x36cd14: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD14u;
    {
        const bool branch_taken_0x36cd14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd14) {
            ctx->pc = 0x36CD20u;
            goto label_36cd20;
        }
    }
    ctx->pc = 0x36CD1Cu;
    // 0x36cd1c: 0x2415002f  addiu       $s5, $zero, 0x2F
    ctx->pc = 0x36cd1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_36cd20:
    // 0x36cd20: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x36cd20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x36cd24: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD24u;
    {
        const bool branch_taken_0x36cd24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd24) {
            ctx->pc = 0x36CD30u;
            goto label_36cd30;
        }
    }
    ctx->pc = 0x36CD2Cu;
    // 0x36cd2c: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x36cd2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_36cd30:
    // 0x36cd30: 0x24170029  addiu       $s7, $zero, 0x29
    ctx->pc = 0x36cd30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x36cd34: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD34u;
    {
        const bool branch_taken_0x36cd34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd34) {
            ctx->pc = 0x36CD40u;
            goto label_36cd40;
        }
    }
    ctx->pc = 0x36CD3Cu;
    // 0x36cd3c: 0x24150031  addiu       $s5, $zero, 0x31
    ctx->pc = 0x36cd3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_36cd40:
    // 0x36cd40: 0x2417002b  addiu       $s7, $zero, 0x2B
    ctx->pc = 0x36cd40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x36cd44: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD44u;
    {
        const bool branch_taken_0x36cd44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd44) {
            ctx->pc = 0x36CD50u;
            goto label_36cd50;
        }
    }
    ctx->pc = 0x36CD4Cu;
    // 0x36cd4c: 0x24150032  addiu       $s5, $zero, 0x32
    ctx->pc = 0x36cd4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_36cd50:
    // 0x36cd50: 0x2417002c  addiu       $s7, $zero, 0x2C
    ctx->pc = 0x36cd50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x36cd54: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD54u;
    {
        const bool branch_taken_0x36cd54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd54) {
            ctx->pc = 0x36CD60u;
            goto label_36cd60;
        }
    }
    ctx->pc = 0x36CD5Cu;
    // 0x36cd5c: 0x24150033  addiu       $s5, $zero, 0x33
    ctx->pc = 0x36cd5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_36cd60:
    // 0x36cd60: 0x2417002d  addiu       $s7, $zero, 0x2D
    ctx->pc = 0x36cd60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x36cd64: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD64u;
    {
        const bool branch_taken_0x36cd64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd64) {
            ctx->pc = 0x36CD70u;
            goto label_36cd70;
        }
    }
    ctx->pc = 0x36CD6Cu;
    // 0x36cd6c: 0x24150034  addiu       $s5, $zero, 0x34
    ctx->pc = 0x36cd6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_36cd70:
    // 0x36cd70: 0x2417002e  addiu       $s7, $zero, 0x2E
    ctx->pc = 0x36cd70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x36cd74: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD74u;
    {
        const bool branch_taken_0x36cd74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd74) {
            ctx->pc = 0x36CD80u;
            goto label_36cd80;
        }
    }
    ctx->pc = 0x36CD7Cu;
    // 0x36cd7c: 0x24150035  addiu       $s5, $zero, 0x35
    ctx->pc = 0x36cd7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_36cd80:
    // 0x36cd80: 0x2417002f  addiu       $s7, $zero, 0x2F
    ctx->pc = 0x36cd80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x36cd84: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD84u;
    {
        const bool branch_taken_0x36cd84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd84) {
            ctx->pc = 0x36CD90u;
            goto label_36cd90;
        }
    }
    ctx->pc = 0x36CD8Cu;
    // 0x36cd8c: 0x24150036  addiu       $s5, $zero, 0x36
    ctx->pc = 0x36cd8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_36cd90:
    // 0x36cd90: 0x24170030  addiu       $s7, $zero, 0x30
    ctx->pc = 0x36cd90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x36cd94: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CD94u;
    {
        const bool branch_taken_0x36cd94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cd94) {
            ctx->pc = 0x36CDA0u;
            goto label_36cda0;
        }
    }
    ctx->pc = 0x36CD9Cu;
    // 0x36cd9c: 0x24150037  addiu       $s5, $zero, 0x37
    ctx->pc = 0x36cd9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_36cda0:
    // 0x36cda0: 0x24170031  addiu       $s7, $zero, 0x31
    ctx->pc = 0x36cda0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x36cda4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CDA4u;
    {
        const bool branch_taken_0x36cda4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cda4) {
            ctx->pc = 0x36CDB0u;
            goto label_36cdb0;
        }
    }
    ctx->pc = 0x36CDACu;
    // 0x36cdac: 0x24150038  addiu       $s5, $zero, 0x38
    ctx->pc = 0x36cdacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_36cdb0:
    // 0x36cdb0: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x36cdb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x36cdb4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CDB4u;
    {
        const bool branch_taken_0x36cdb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cdb4) {
            ctx->pc = 0x36CDC0u;
            goto label_36cdc0;
        }
    }
    ctx->pc = 0x36CDBCu;
    // 0x36cdbc: 0x24150039  addiu       $s5, $zero, 0x39
    ctx->pc = 0x36cdbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_36cdc0:
    // 0x36cdc0: 0x24170033  addiu       $s7, $zero, 0x33
    ctx->pc = 0x36cdc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x36cdc4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CDC4u;
    {
        const bool branch_taken_0x36cdc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cdc4) {
            ctx->pc = 0x36CDD0u;
            goto label_36cdd0;
        }
    }
    ctx->pc = 0x36CDCCu;
    // 0x36cdcc: 0x2415003a  addiu       $s5, $zero, 0x3A
    ctx->pc = 0x36cdccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_36cdd0:
    // 0x36cdd0: 0x24170034  addiu       $s7, $zero, 0x34
    ctx->pc = 0x36cdd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x36cdd4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CDD4u;
    {
        const bool branch_taken_0x36cdd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cdd4) {
            ctx->pc = 0x36CDE0u;
            goto label_36cde0;
        }
    }
    ctx->pc = 0x36CDDCu;
    // 0x36cddc: 0x2415003b  addiu       $s5, $zero, 0x3B
    ctx->pc = 0x36cddcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_36cde0:
    // 0x36cde0: 0x24170036  addiu       $s7, $zero, 0x36
    ctx->pc = 0x36cde0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x36cde4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CDE4u;
    {
        const bool branch_taken_0x36cde4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cde4) {
            ctx->pc = 0x36CDF0u;
            goto label_36cdf0;
        }
    }
    ctx->pc = 0x36CDECu;
    // 0x36cdec: 0x2415003c  addiu       $s5, $zero, 0x3C
    ctx->pc = 0x36cdecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_36cdf0:
    // 0x36cdf0: 0x24170037  addiu       $s7, $zero, 0x37
    ctx->pc = 0x36cdf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x36cdf4: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CDF4u;
    {
        const bool branch_taken_0x36cdf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36cdf4) {
            ctx->pc = 0x36CE00u;
            goto label_36ce00;
        }
    }
    ctx->pc = 0x36CDFCu;
    // 0x36cdfc: 0x2415003d  addiu       $s5, $zero, 0x3D
    ctx->pc = 0x36cdfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_36ce00:
    // 0x36ce00: 0x24170038  addiu       $s7, $zero, 0x38
    ctx->pc = 0x36ce00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x36ce04: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CE04u;
    {
        const bool branch_taken_0x36ce04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ce04) {
            ctx->pc = 0x36CE10u;
            goto label_36ce10;
        }
    }
    ctx->pc = 0x36CE0Cu;
    // 0x36ce0c: 0x2415003e  addiu       $s5, $zero, 0x3E
    ctx->pc = 0x36ce0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_36ce10:
    // 0x36ce10: 0x24170039  addiu       $s7, $zero, 0x39
    ctx->pc = 0x36ce10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x36ce14: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CE14u;
    {
        const bool branch_taken_0x36ce14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ce14) {
            ctx->pc = 0x36CE20u;
            goto label_36ce20;
        }
    }
    ctx->pc = 0x36CE1Cu;
    // 0x36ce1c: 0x2415003f  addiu       $s5, $zero, 0x3F
    ctx->pc = 0x36ce1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_36ce20:
    // 0x36ce20: 0x2417003a  addiu       $s7, $zero, 0x3A
    ctx->pc = 0x36ce20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x36ce24: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CE24u;
    {
        const bool branch_taken_0x36ce24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ce24) {
            ctx->pc = 0x36CE30u;
            goto label_36ce30;
        }
    }
    ctx->pc = 0x36CE2Cu;
    // 0x36ce2c: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x36ce2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_36ce30:
    // 0x36ce30: 0x2417003b  addiu       $s7, $zero, 0x3B
    ctx->pc = 0x36ce30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x36ce34: 0x16970002  bne         $s4, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x36CE34u;
    {
        const bool branch_taken_0x36ce34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x36ce34) {
            ctx->pc = 0x36CE40u;
            goto label_36ce40;
        }
    }
    ctx->pc = 0x36CE3Cu;
    // 0x36ce3c: 0x24150041  addiu       $s5, $zero, 0x41
    ctx->pc = 0x36ce3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_36ce40:
    // 0x36ce40: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x36ce40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36ce44: 0x12b70004  beq         $s5, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x36CE44u;
    {
        const bool branch_taken_0x36ce44 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x36ce44) {
            ctx->pc = 0x36CE58u;
            goto label_36ce58;
        }
    }
    ctx->pc = 0x36CE4Cu;
    // 0x36ce4c: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x36ce4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x36ce50: 0xa2b41eac  sb          $s4, 0x1EAC($s5)
    ctx->pc = 0x36ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 7852), (uint8_t)GPR_U32(ctx, 20));
    // 0x36ce54: 0x0  nop
    ctx->pc = 0x36ce54u;
    // NOP
label_36ce58:
    // 0x36ce58: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36ce58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ce5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36ce5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x36ce60: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x36ce60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x36ce64: 0x96b50068  lhu         $s5, 0x68($s5)
    ctx->pc = 0x36ce64u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x36ce68: 0x295a82a  slt         $s5, $s4, $s5
    ctx->pc = 0x36ce68u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x36ce6c: 0x16a0fef4  bnez        $s5, . + 4 + (-0x10C << 2)
    ctx->pc = 0x36CE6Cu;
    {
        const bool branch_taken_0x36ce6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ce6c) {
            ctx->pc = 0x36CA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ca40;
        }
    }
    ctx->pc = 0x36CE74u;
    // 0x36ce74: 0x0  nop
    ctx->pc = 0x36ce74u;
    // NOP
label_36ce78:
    // 0x36ce78: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x36ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x36ce7c: 0x8c22b870  lw          $v0, -0x4790($at)
    ctx->pc = 0x36ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80B870u));
    // 0x36ce80: 0x3c044662  lui         $a0, 0x4662
    ctx->pc = 0x36ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18018 << 16));
    // 0x36ce84: 0x3c05465a  lui         $a1, 0x465A
    ctx->pc = 0x36ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18010 << 16));
    // 0x36ce88: 0x3c1e464a  lui         $fp, 0x464A
    ctx->pc = 0x36ce88u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)17994 << 16));
    // 0x36ce8c: 0x34b0c000  ori         $s0, $a1, 0xC000
    ctx->pc = 0x36ce8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x36ce90: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x36ce90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ce94: 0x3c05465e  lui         $a1, 0x465E
    ctx->pc = 0x36ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18014 << 16));
    // 0x36ce98: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x36ce98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ce9c: 0x3c07454c  lui         $a3, 0x454C
    ctx->pc = 0x36ce9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17740 << 16));
    // 0x36cea0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x36cea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cea4: 0x34899000  ori         $t1, $a0, 0x9000
    ctx->pc = 0x36cea4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36864);
    // 0x36cea8: 0x37ca5800  ori         $t2, $fp, 0x5800
    ctx->pc = 0x36cea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)22528);
    // 0x36ceac: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x36ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x36ceb0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ceb4: 0x3c164538  lui         $s6, 0x4538
    ctx->pc = 0x36ceb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17720 << 16));
    // 0x36ceb8: 0xa0551e2d  sb          $s5, 0x1E2D($v0)
    ctx->pc = 0x36ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7725), (uint8_t)GPR_U32(ctx, 21));
    // 0x36cebc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36cec0: 0x3c024535  lui         $v0, 0x4535
    ctx->pc = 0x36cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17717 << 16));
    // 0x36cec4: 0x34524000  ori         $s2, $v0, 0x4000
    ctx->pc = 0x36cec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36cec8: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x36cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x36cecc: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x36ceccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x36ced0: 0xa0601e6f  sb          $zero, 0x1E6F($v1)
    ctx->pc = 0x36ced0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7791), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ced4: 0x7fa205c0  sq          $v0, 0x5C0($sp)
    ctx->pc = 0x36ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 2));
    // 0x36ced8: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x36ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x36cedc: 0x3c024649  lui         $v0, 0x4649
    ctx->pc = 0x36cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17993 << 16));
    // 0x36cee0: 0x34710a92  ori         $s1, $v1, 0xA92
    ctx->pc = 0x36cee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x36cee4: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x36cee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36cee8: 0x8f868c00  lw          $a2, -0x7400($gp)
    ctx->pc = 0x36cee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ceec: 0x7fa305b0  sq          $v1, 0x5B0($sp)
    ctx->pc = 0x36ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 3));
    // 0x36cef0: 0x344c9000  ori         $t4, $v0, 0x9000
    ctx->pc = 0x36cef0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x36cef4: 0x3c03454a  lui         $v1, 0x454A
    ctx->pc = 0x36cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17738 << 16));
    // 0x36cef8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x36cef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x36cefc: 0x7fa305a0  sq          $v1, 0x5A0($sp)
    ctx->pc = 0x36cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 3));
    // 0x36cf00: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x36cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
    // 0x36cf04: 0x3479b8c3  ori         $t9, $v1, 0xB8C3
    ctx->pc = 0x36cf04u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
    // 0x36cf08: 0xa0d51e36  sb          $s5, 0x1E36($a2)
    ctx->pc = 0x36cf08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7734), (uint8_t)GPR_U32(ctx, 21));
    // 0x36cf0c: 0x34a33000  ori         $v1, $a1, 0x3000
    ctx->pc = 0x36cf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x36cf10: 0x8f868c00  lw          $a2, -0x7400($gp)
    ctx->pc = 0x36cf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36cf14: 0x7fa30590  sq          $v1, 0x590($sp)
    ctx->pc = 0x36cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 3));
    // 0x36cf18: 0x34a3a800  ori         $v1, $a1, 0xA800
    ctx->pc = 0x36cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43008);
    // 0x36cf1c: 0x7fa303c0  sq          $v1, 0x3C0($sp)
    ctx->pc = 0x36cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 3));
    // 0x36cf20: 0x3c054525  lui         $a1, 0x4525
    ctx->pc = 0x36cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17701 << 16));
    // 0x36cf24: 0x37c3a800  ori         $v1, $fp, 0xA800
    ctx->pc = 0x36cf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)43008);
    // 0x36cf28: 0x34afa000  ori         $t7, $a1, 0xA000
    ctx->pc = 0x36cf28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x36cf2c: 0x7fa30580  sq          $v1, 0x580($sp)
    ctx->pc = 0x36cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 3));
    // 0x36cf30: 0x37c53000  ori         $a1, $fp, 0x3000
    ctx->pc = 0x36cf30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)12288);
    // 0x36cf34: 0x3c034532  lui         $v1, 0x4532
    ctx->pc = 0x36cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17714 << 16));
    // 0x36cf38: 0x34782000  ori         $t8, $v1, 0x2000
    ctx->pc = 0x36cf38u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x36cf3c: 0x3c03464e  lui         $v1, 0x464E
    ctx->pc = 0x36cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17998 << 16));
    // 0x36cf40: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x36cf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x36cf44: 0x7fa30570  sq          $v1, 0x570($sp)
    ctx->pc = 0x36cf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 3));
    // 0x36cf48: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x36cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x36cf4c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x36cf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x36cf50: 0x7fa30560  sq          $v1, 0x560($sp)
    ctx->pc = 0x36cf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 3));
    // 0x36cf54: 0xa0d51e78  sb          $s5, 0x1E78($a2)
    ctx->pc = 0x36cf54u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7800), (uint8_t)GPR_U32(ctx, 21));
    // 0x36cf58: 0x3c034661  lui         $v1, 0x4661
    ctx->pc = 0x36cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18017 << 16));
    // 0x36cf5c: 0x7fa50540  sq          $a1, 0x540($sp)
    ctx->pc = 0x36cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 5));
    // 0x36cf60: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x36cf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x36cf64: 0x3c054011  lui         $a1, 0x4011
    ctx->pc = 0x36cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16401 << 16));
    // 0x36cf68: 0x7fa30550  sq          $v1, 0x550($sp)
    ctx->pc = 0x36cf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 3));
    // 0x36cf6c: 0x34a5361e  ori         $a1, $a1, 0x361E
    ctx->pc = 0x36cf6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13854);
    // 0x36cf70: 0x3c064660  lui         $a2, 0x4660
    ctx->pc = 0x36cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18016 << 16));
    // 0x36cf74: 0x7fa50530  sq          $a1, 0x530($sp)
    ctx->pc = 0x36cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 5));
    // 0x36cf78: 0x34c5d800  ori         $a1, $a2, 0xD800
    ctx->pc = 0x36cf78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55296);
    // 0x36cf7c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36cf80: 0x7fa50520  sq          $a1, 0x520($sp)
    ctx->pc = 0x36cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 5));
    // 0x36cf84: 0x34c53800  ori         $a1, $a2, 0x3800
    ctx->pc = 0x36cf84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14336);
    // 0x36cf88: 0x7fa50330  sq          $a1, 0x330($sp)
    ctx->pc = 0x36cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 5));
    // 0x36cf8c: 0x3c06465f  lui         $a2, 0x465F
    ctx->pc = 0x36cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18015 << 16));
    // 0x36cf90: 0x3c054648  lui         $a1, 0x4648
    ctx->pc = 0x36cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17992 << 16));
    // 0x36cf94: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x36cf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x36cf98: 0x7fa50510  sq          $a1, 0x510($sp)
    ctx->pc = 0x36cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 5));
    // 0x36cf9c: 0x3c053f9c  lui         $a1, 0x3F9C
    ctx->pc = 0x36cf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16284 << 16));
    // 0x36cfa0: 0xa0751e29  sb          $s5, 0x1E29($v1)
    ctx->pc = 0x36cfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7721), (uint8_t)GPR_U32(ctx, 21));
    // 0x36cfa4: 0x34a361ab  ori         $v1, $a1, 0x61AB
    ctx->pc = 0x36cfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25003);
    // 0x36cfa8: 0x34456800  ori         $a1, $v0, 0x6800
    ctx->pc = 0x36cfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
    // 0x36cfac: 0x7fa30500  sq          $v1, 0x500($sp)
    ctx->pc = 0x36cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 3));
    // 0x36cfb0: 0x3c024539  lui         $v0, 0x4539
    ctx->pc = 0x36cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17721 << 16));
    // 0x36cfb4: 0x7fa504f0  sq          $a1, 0x4F0($sp)
    ctx->pc = 0x36cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 5));
    // 0x36cfb8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x36cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x36cfbc: 0x3c05bf5f  lui         $a1, 0xBF5F
    ctx->pc = 0x36cfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48991 << 16));
    // 0x36cfc0: 0x7fa204e0  sq          $v0, 0x4E0($sp)
    ctx->pc = 0x36cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 2));
    // 0x36cfc4: 0x34a566f4  ori         $a1, $a1, 0x66F4
    ctx->pc = 0x36cfc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26356);
    // 0x36cfc8: 0x3c024648  lui         $v0, 0x4648
    ctx->pc = 0x36cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17992 << 16));
    // 0x36cfcc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36cfd0: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x36cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x36cfd4: 0x7fa504c0  sq          $a1, 0x4C0($sp)
    ctx->pc = 0x36cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 5));
    // 0x36cfd8: 0x7fa204d0  sq          $v0, 0x4D0($sp)
    ctx->pc = 0x36cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 2));
    // 0x36cfdc: 0x3c02464d  lui         $v0, 0x464D
    ctx->pc = 0x36cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17997 << 16));
    // 0x36cfe0: 0x3445a000  ori         $a1, $v0, 0xA000
    ctx->pc = 0x36cfe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x36cfe4: 0x7fa504b0  sq          $a1, 0x4B0($sp)
    ctx->pc = 0x36cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 5));
    // 0x36cfe8: 0x3c054522  lui         $a1, 0x4522
    ctx->pc = 0x36cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17698 << 16));
    // 0x36cfec: 0xa0741e6b  sb          $s4, 0x1E6B($v1)
    ctx->pc = 0x36cfecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7787), (uint8_t)GPR_U32(ctx, 20));
    // 0x36cff0: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x36cff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x36cff4: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x36cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
    // 0x36cff8: 0x34c3c000  ori         $v1, $a2, 0xC000
    ctx->pc = 0x36cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x36cffc: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d000: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x36d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
    // 0x36d004: 0x34c37000  ori         $v1, $a2, 0x7000
    ctx->pc = 0x36d004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28672);
    // 0x36d008: 0x3c06bfb2  lui         $a2, 0xBFB2
    ctx->pc = 0x36d008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49074 << 16));
    // 0x36d00c: 0x34ceb8c3  ori         $t6, $a2, 0xB8C3
    ctx->pc = 0x36d00cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47299);
    // 0x36d010: 0x3c064648  lui         $a2, 0x4648
    ctx->pc = 0x36d010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17992 << 16));
    // 0x36d014: 0x34cdc800  ori         $t5, $a2, 0xC800
    ctx->pc = 0x36d014u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51200);
    // 0x36d018: 0x34462800  ori         $a2, $v0, 0x2800
    ctx->pc = 0x36d018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x36d01c: 0x7fa60470  sq          $a2, 0x470($sp)
    ctx->pc = 0x36d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 6));
    // 0x36d020: 0x34427800  ori         $v0, $v0, 0x7800
    ctx->pc = 0x36d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x36d024: 0x34e66000  ori         $a2, $a3, 0x6000
    ctx->pc = 0x36d024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24576);
    // 0x36d028: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x36d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x36d02c: 0x7fa60480  sq          $a2, 0x480($sp)
    ctx->pc = 0x36d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
    // 0x36d030: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x36d030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x36d034: 0xa0b51e2c  sb          $s5, 0x1E2C($a1)
    ctx->pc = 0x36d034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7724), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d038: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x36d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x36d03c: 0x3c054032  lui         $a1, 0x4032
    ctx->pc = 0x36d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16434 << 16));
    // 0x36d040: 0x3c06464c  lui         $a2, 0x464C
    ctx->pc = 0x36d040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17996 << 16));
    // 0x36d044: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x36d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    // 0x36d048: 0x34a5b8c3  ori         $a1, $a1, 0xB8C3
    ctx->pc = 0x36d048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47299);
    // 0x36d04c: 0x34c2b000  ori         $v0, $a2, 0xB000
    ctx->pc = 0x36d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x36d050: 0x7fa50440  sq          $a1, 0x440($sp)
    ctx->pc = 0x36d050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 5));
    // 0x36d054: 0x3c064651  lui         $a2, 0x4651
    ctx->pc = 0x36d054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18001 << 16));
    // 0x36d058: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x36d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    // 0x36d05c: 0x34c56000  ori         $a1, $a2, 0x6000
    ctx->pc = 0x36d05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24576);
    // 0x36d060: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d064: 0x7fa50430  sq          $a1, 0x430($sp)
    ctx->pc = 0x36d064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 5));
    // 0x36d068: 0x3c064641  lui         $a2, 0x4641
    ctx->pc = 0x36d068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17985 << 16));
    // 0x36d06c: 0x3c054528  lui         $a1, 0x4528
    ctx->pc = 0x36d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17704 << 16));
    // 0x36d070: 0x3c07452d  lui         $a3, 0x452D
    ctx->pc = 0x36d070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17709 << 16));
    // 0x36d074: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x36d074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x36d078: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x36d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x36d07c: 0x34c5c000  ori         $a1, $a2, 0xC000
    ctx->pc = 0x36d07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x36d080: 0x7fa50420  sq          $a1, 0x420($sp)
    ctx->pc = 0x36d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 5));
    // 0x36d084: 0x3c06c027  lui         $a2, 0xC027
    ctx->pc = 0x36d084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49191 << 16));
    // 0x36d088: 0xa0531e6e  sb          $s3, 0x1E6E($v0)
    ctx->pc = 0x36d088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7790), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d08c: 0x3c054526  lui         $a1, 0x4526
    ctx->pc = 0x36d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17702 << 16));
    // 0x36d090: 0x34c28d37  ori         $v0, $a2, 0x8D37
    ctx->pc = 0x36d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36151);
    // 0x36d094: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x36d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    // 0x36d098: 0x3c064653  lui         $a2, 0x4653
    ctx->pc = 0x36d098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18003 << 16));
    // 0x36d09c: 0x34a2e000  ori         $v0, $a1, 0xE000
    ctx->pc = 0x36d09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57344);
    // 0x36d0a0: 0x3c054655  lui         $a1, 0x4655
    ctx->pc = 0x36d0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18005 << 16));
    // 0x36d0a4: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x36d0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
    // 0x36d0a8: 0x34a54800  ori         $a1, $a1, 0x4800
    ctx->pc = 0x36d0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18432);
    // 0x36d0ac: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d0b0: 0x7fa503f0  sq          $a1, 0x3F0($sp)
    ctx->pc = 0x36d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 5));
    // 0x36d0b4: 0x34c5b800  ori         $a1, $a2, 0xB800
    ctx->pc = 0x36d0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)47104);
    // 0x36d0b8: 0x7fa503e0  sq          $a1, 0x3E0($sp)
    ctx->pc = 0x36d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 5));
    // 0x36d0bc: 0x3c06464f  lui         $a2, 0x464F
    ctx->pc = 0x36d0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17999 << 16));
    // 0x36d0c0: 0x3c05452b  lui         $a1, 0x452B
    ctx->pc = 0x36d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17707 << 16));
    // 0x36d0c4: 0x34a5e000  ori         $a1, $a1, 0xE000
    ctx->pc = 0x36d0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57344);
    // 0x36d0c8: 0x7fa503d0  sq          $a1, 0x3D0($sp)
    ctx->pc = 0x36d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 5));
    // 0x36d0cc: 0x34c50800  ori         $a1, $a2, 0x800
    ctx->pc = 0x36d0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x36d0d0: 0x7fa503b0  sq          $a1, 0x3B0($sp)
    ctx->pc = 0x36d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 5));
    // 0x36d0d4: 0x34c5d000  ori         $a1, $a2, 0xD000
    ctx->pc = 0x36d0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53248);
    // 0x36d0d8: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x36d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x36d0dc: 0x3c06c006  lui         $a2, 0xC006
    ctx->pc = 0x36d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49158 << 16));
    // 0x36d0e0: 0x3c05bfdf  lui         $a1, 0xBFDF
    ctx->pc = 0x36d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49119 << 16));
    // 0x36d0e4: 0xa0551e3c  sb          $s5, 0x1E3C($v0)
    ctx->pc = 0x36d0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7740), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d0e8: 0x34a266f4  ori         $v0, $a1, 0x66F4
    ctx->pc = 0x36d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26356);
    // 0x36d0ec: 0x34c60a92  ori         $a2, $a2, 0xA92
    ctx->pc = 0x36d0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2706);
    // 0x36d0f0: 0x7fa60390  sq          $a2, 0x390($sp)
    ctx->pc = 0x36d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 6));
    // 0x36d0f4: 0x34e62000  ori         $a2, $a3, 0x2000
    ctx->pc = 0x36d0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8192);
    // 0x36d0f8: 0x7fa203a0  sq          $v0, 0x3A0($sp)
    ctx->pc = 0x36d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 2));
    // 0x36d0fc: 0x3c02464b  lui         $v0, 0x464B
    ctx->pc = 0x36d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17995 << 16));
    // 0x36d100: 0x7fa60380  sq          $a2, 0x380($sp)
    ctx->pc = 0x36d100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 6));
    // 0x36d104: 0x34469800  ori         $a2, $v0, 0x9800
    ctx->pc = 0x36d104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38912);
    // 0x36d108: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36d108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d10c: 0x7fa60370  sq          $a2, 0x370($sp)
    ctx->pc = 0x36d10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 6));
    // 0x36d110: 0x344be800  ori         $t3, $v0, 0xE800
    ctx->pc = 0x36d110u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    // 0x36d114: 0x34462000  ori         $a2, $v0, 0x2000
    ctx->pc = 0x36d114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x36d118: 0x3c074546  lui         $a3, 0x4546
    ctx->pc = 0x36d118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17734 << 16));
    // 0x36d11c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d120: 0xa0a21e7e  sb          $v0, 0x1E7E($a1)
    ctx->pc = 0x36d120u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7806), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d124: 0x7fa40110  sq          $a0, 0x110($sp)
    ctx->pc = 0x36d124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 4));
    // 0x36d128: 0x34e22000  ori         $v0, $a3, 0x2000
    ctx->pc = 0x36d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8192);
    // 0x36d12c: 0x3c04c011  lui         $a0, 0xC011
    ctx->pc = 0x36d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49169 << 16));
    // 0x36d130: 0x7fa20360  sq          $v0, 0x360($sp)
    ctx->pc = 0x36d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 2));
    // 0x36d134: 0x3484361e  ori         $a0, $a0, 0x361E
    ctx->pc = 0x36d134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13854);
    // 0x36d138: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d13c: 0x7fa40340  sq          $a0, 0x340($sp)
    ctx->pc = 0x36d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 4));
    // 0x36d140: 0x3c05bff5  lui         $a1, 0xBFF5
    ctx->pc = 0x36d140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49141 << 16));
    // 0x36d144: 0x3c044027  lui         $a0, 0x4027
    ctx->pc = 0x36d144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16423 << 16));
    // 0x36d148: 0x34a5be0c  ori         $a1, $a1, 0xBE0C
    ctx->pc = 0x36d148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48652);
    // 0x36d14c: 0x34848d37  ori         $a0, $a0, 0x8D37
    ctx->pc = 0x36d14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36151);
    // 0x36d150: 0x7fa50350  sq          $a1, 0x350($sp)
    ctx->pc = 0x36d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 5));
    // 0x36d154: 0x7fa40320  sq          $a0, 0x320($sp)
    ctx->pc = 0x36d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 4));
    // 0x36d158: 0x3c054659  lui         $a1, 0x4659
    ctx->pc = 0x36d158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18009 << 16));
    // 0x36d15c: 0x3c04465c  lui         $a0, 0x465C
    ctx->pc = 0x36d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18012 << 16));
    // 0x36d160: 0x34885000  ori         $t0, $a0, 0x5000
    ctx->pc = 0x36d160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x36d164: 0x3484c800  ori         $a0, $a0, 0xC800
    ctx->pc = 0x36d164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51200);
    // 0x36d168: 0x7fa401b0  sq          $a0, 0x1B0($sp)
    ctx->pc = 0x36d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 4));
    // 0x36d16c: 0xa0551e4c  sb          $s5, 0x1E4C($v0)
    ctx->pc = 0x36d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7756), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d170: 0x34a43000  ori         $a0, $a1, 0x3000
    ctx->pc = 0x36d170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x36d174: 0x7fa40310  sq          $a0, 0x310($sp)
    ctx->pc = 0x36d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 4));
    // 0x36d178: 0x34a4f800  ori         $a0, $a1, 0xF800
    ctx->pc = 0x36d178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63488);
    // 0x36d17c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d180: 0x7fa40290  sq          $a0, 0x290($sp)
    ctx->pc = 0x36d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 4));
    // 0x36d184: 0x3c044541  lui         $a0, 0x4541
    ctx->pc = 0x36d184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17729 << 16));
    // 0x36d188: 0x3487c000  ori         $a3, $a0, 0xC000
    ctx->pc = 0x36d188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x36d18c: 0x3c04401c  lui         $a0, 0x401C
    ctx->pc = 0x36d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16412 << 16));
    // 0x36d190: 0x348461ab  ori         $a0, $a0, 0x61AB
    ctx->pc = 0x36d190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25003);
    // 0x36d194: 0x7fa40300  sq          $a0, 0x300($sp)
    ctx->pc = 0x36d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 4));
    // 0x36d198: 0x3c04465d  lui         $a0, 0x465D
    ctx->pc = 0x36d198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18013 << 16));
    // 0x36d19c: 0x34851800  ori         $a1, $a0, 0x1800
    ctx->pc = 0x36d19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6144);
    // 0x36d1a0: 0x3c044657  lui         $a0, 0x4657
    ctx->pc = 0x36d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18007 << 16));
    // 0x36d1a4: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x36d1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x36d1a8: 0x7fa402f0  sq          $a0, 0x2F0($sp)
    ctx->pc = 0x36d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 4));
    // 0x36d1ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d1b0: 0xa0441e8e  sb          $a0, 0x1E8E($v0)
    ctx->pc = 0x36d1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7822), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d1b4: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x36d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x36d1b8: 0x36c46000  ori         $a0, $s6, 0x6000
    ctx->pc = 0x36d1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)24576);
    // 0x36d1bc: 0x344266f4  ori         $v0, $v0, 0x66F4
    ctx->pc = 0x36d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26356);
    // 0x36d1c0: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d1c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d1c4: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x36d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    // 0x36d1c8: 0x3c024656  lui         $v0, 0x4656
    ctx->pc = 0x36d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18006 << 16));
    // 0x36d1cc: 0x34428800  ori         $v0, $v0, 0x8800
    ctx->pc = 0x36d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    // 0x36d1d0: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x36d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
    // 0x36d1d4: 0x3c024654  lui         $v0, 0x4654
    ctx->pc = 0x36d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18004 << 16));
    // 0x36d1d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36d1dc: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x36d1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x36d1e0: 0x3c02453e  lui         $v0, 0x453E
    ctx->pc = 0x36d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17726 << 16));
    // 0x36d1e4: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x36d1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x36d1e8: 0x7fa202b0  sq          $v0, 0x2B0($sp)
    ctx->pc = 0x36d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
    // 0x36d1ec: 0x3c02bf9c  lui         $v0, 0xBF9C
    ctx->pc = 0x36d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49052 << 16));
    // 0x36d1f0: 0x344261ab  ori         $v0, $v0, 0x61AB
    ctx->pc = 0x36d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25003);
    // 0x36d1f4: 0x7fa202a0  sq          $v0, 0x2A0($sp)
    ctx->pc = 0x36d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
    // 0x36d1f8: 0x3c02465b  lui         $v0, 0x465B
    ctx->pc = 0x36d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18011 << 16));
    // 0x36d1fc: 0xa2d51e5f  sb          $s5, 0x1E5F($s6)
    ctx->pc = 0x36d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7775), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d200: 0x34578800  ori         $s7, $v0, 0x8800
    ctx->pc = 0x36d200u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
    // 0x36d204: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d204u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d208: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x36d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x36d20c: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x36d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
    // 0x36d210: 0x3c02454e  lui         $v0, 0x454E
    ctx->pc = 0x36d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17742 << 16));
    // 0x36d214: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36d214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36d218: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x36d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    // 0x36d21c: 0x3c023f5f  lui         $v0, 0x3F5F
    ctx->pc = 0x36d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16223 << 16));
    // 0x36d220: 0x344266f4  ori         $v0, $v0, 0x66F4
    ctx->pc = 0x36d220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26356);
    // 0x36d224: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x36d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    // 0x36d228: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x36d228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
    // 0x36d22c: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x36d22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x36d230: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x36d230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x36d234: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x36d234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x36d238: 0x344266f4  ori         $v0, $v0, 0x66F4
    ctx->pc = 0x36d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26356);
    // 0x36d23c: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x36d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x36d240: 0x3c024661  lui         $v0, 0x4661
    ctx->pc = 0x36d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18017 << 16));
    // 0x36d244: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x36d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
    // 0x36d248: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x36d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x36d24c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36d250: 0xa2c21ea1  sb          $v0, 0x1EA1($s6)
    ctx->pc = 0x36d250u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7841), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d254: 0x3c024544  lui         $v0, 0x4544
    ctx->pc = 0x36d254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17732 << 16));
    // 0x36d258: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d258u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d25c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x36d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x36d260: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x36d260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x36d264: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x36d264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x36d268: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x36d268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x36d26c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x36d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x36d270: 0x3c024551  lui         $v0, 0x4551
    ctx->pc = 0x36d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17745 << 16));
    // 0x36d274: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x36d274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x36d278: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x36d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x36d27c: 0x3c02465d  lui         $v0, 0x465D
    ctx->pc = 0x36d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18013 << 16));
    // 0x36d280: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x36d280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x36d284: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x36d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x36d288: 0x3c02be32  lui         $v0, 0xBE32
    ctx->pc = 0x36d288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48690 << 16));
    // 0x36d28c: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x36d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x36d290: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x36d290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x36d294: 0x3c02465d  lui         $v0, 0x465D
    ctx->pc = 0x36d294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18013 << 16));
    // 0x36d298: 0x34426800  ori         $v0, $v0, 0x6800
    ctx->pc = 0x36d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
    // 0x36d29c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x36d29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x36d2a0: 0x3c024647  lui         $v0, 0x4647
    ctx->pc = 0x36d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17991 << 16));
    // 0x36d2a4: 0xa2d51e54  sb          $s5, 0x1E54($s6)
    ctx->pc = 0x36d2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7764), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d2a8: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x36d2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x36d2ac: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d2acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d2b0: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x36d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x36d2b4: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x36d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x36d2b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d2bc: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x36d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x36d2c0: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x36d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x36d2c4: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x36d2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x36d2c8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x36d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x36d2cc: 0x3c024545  lui         $v0, 0x4545
    ctx->pc = 0x36d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17733 << 16));
    // 0x36d2d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36d2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36d2d4: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x36d2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x36d2d8: 0x3c023ff5  lui         $v0, 0x3FF5
    ctx->pc = 0x36d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16373 << 16));
    // 0x36d2dc: 0x3442be0c  ori         $v0, $v0, 0xBE0C
    ctx->pc = 0x36d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48652);
    // 0x36d2e0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x36d2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x36d2e4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x36d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x36d2e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36d2ec: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x36d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x36d2f0: 0x37c2d000  ori         $v0, $fp, 0xD000
    ctx->pc = 0x36d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53248);
    // 0x36d2f4: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x36d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x36d2f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x36d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36d2fc: 0xa2c21e96  sb          $v0, 0x1E96($s6)
    ctx->pc = 0x36d2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7830), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d300: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x36d300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x36d304: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d304u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d308: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x36d308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x36d30c: 0xafa005d0  sw          $zero, 0x5D0($sp)
    ctx->pc = 0x36d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1488), GPR_U32(ctx, 0));
    // 0x36d310: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x36d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x36d314: 0x37c20800  ori         $v0, $fp, 0x800
    ctx->pc = 0x36d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2048);
    // 0x36d318: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x36d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x36d31c: 0x3c1e3fc9  lui         $fp, 0x3FC9
    ctx->pc = 0x36d31cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16329 << 16));
    // 0x36d320: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36d324: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x36d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x36d328: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x36d328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x36d32c: 0x37c20fdb  ori         $v0, $fp, 0xFDB
    ctx->pc = 0x36d32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4059);
    // 0x36d330: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x36d330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x36d334: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x36d334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d338: 0x3c024644  lui         $v0, 0x4644
    ctx->pc = 0x36d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17988 << 16));
    // 0x36d33c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x36d33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x36d340: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x36d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x36d344: 0x3c02c032  lui         $v0, 0xC032
    ctx->pc = 0x36d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49202 << 16));
    // 0x36d348: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x36d348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x36d34c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x36d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x36d350: 0x3c02bf32  lui         $v0, 0xBF32
    ctx->pc = 0x36d350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48946 << 16));
    // 0x36d354: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x36d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x36d358: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x36d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x36d35c: 0xa2d51e68  sb          $s5, 0x1E68($s6)
    ctx->pc = 0x36d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7784), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d360: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36d364: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d364u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d368: 0xa2c21eaa  sb          $v0, 0x1EAA($s6)
    ctx->pc = 0x36d368u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7850), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d36c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d370: 0xa0551e51  sb          $s5, 0x1E51($v0)
    ctx->pc = 0x36d370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7761), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d374: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d374u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d378: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x36d378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36d37c: 0xa2c21e93  sb          $v0, 0x1E93($s6)
    ctx->pc = 0x36d37cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7827), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d380: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d384: 0xa0551e5d  sb          $s5, 0x1E5D($v0)
    ctx->pc = 0x36d384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7773), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d388: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d388u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d38c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x36d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36d390: 0xa2c21e9f  sb          $v0, 0x1E9F($s6)
    ctx->pc = 0x36d390u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7839), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d394: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d398: 0xa0551e64  sb          $s5, 0x1E64($v0)
    ctx->pc = 0x36d398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7780), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d39c: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d39cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3a0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36d3a4: 0xa2c21ea6  sb          $v0, 0x1EA6($s6)
    ctx->pc = 0x36d3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7846), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d3a8: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d3a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x36d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36d3b0: 0xa2c21f73  sb          $v0, 0x1F73($s6)
    ctx->pc = 0x36d3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 8051), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d3b4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3b8: 0xa0541e38  sb          $s4, 0x1E38($v0)
    ctx->pc = 0x36d3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7736), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d3bc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3c0: 0xa0401e7a  sb          $zero, 0x1E7A($v0)
    ctx->pc = 0x36d3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7802), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d3c4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3c8: 0xa0541e45  sb          $s4, 0x1E45($v0)
    ctx->pc = 0x36d3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7749), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d3cc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3d0: 0xa0551e87  sb          $s5, 0x1E87($v0)
    ctx->pc = 0x36d3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7815), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d3d4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3d8: 0xa0541e30  sb          $s4, 0x1E30($v0)
    ctx->pc = 0x36d3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7728), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d3dc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3e0: 0xa0541e72  sb          $s4, 0x1E72($v0)
    ctx->pc = 0x36d3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7794), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d3e4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3e8: 0xa0541e44  sb          $s4, 0x1E44($v0)
    ctx->pc = 0x36d3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7748), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d3ec: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3f0: 0xa0531e86  sb          $s3, 0x1E86($v0)
    ctx->pc = 0x36d3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7814), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d3f4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d3f8: 0xa0541e3d  sb          $s4, 0x1E3D($v0)
    ctx->pc = 0x36d3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7741), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d3fc: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d3fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d400: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d404: 0xa2c21e7f  sb          $v0, 0x1E7F($s6)
    ctx->pc = 0x36d404u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7807), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d408: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d40c: 0xa0541e41  sb          $s4, 0x1E41($v0)
    ctx->pc = 0x36d40cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7745), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d410: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d410u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d414: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d418: 0xa2c21e83  sb          $v0, 0x1E83($s6)
    ctx->pc = 0x36d418u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7811), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d41c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d420: 0xa0541e3f  sb          $s4, 0x1E3F($v0)
    ctx->pc = 0x36d420u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7743), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d424: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d424u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d428: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36d42c: 0xa2c21e81  sb          $v0, 0x1E81($s6)
    ctx->pc = 0x36d42cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7809), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d430: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d434: 0xa0541e31  sb          $s4, 0x1E31($v0)
    ctx->pc = 0x36d434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7729), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d438: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d438u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d43c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x36d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36d440: 0xa2c21e73  sb          $v0, 0x1E73($s6)
    ctx->pc = 0x36d440u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7795), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d444: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d448: 0xa0541e2e  sb          $s4, 0x1E2E($v0)
    ctx->pc = 0x36d448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7726), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d44c: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d44cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d450: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36d454: 0xa2c21e70  sb          $v0, 0x1E70($s6)
    ctx->pc = 0x36d454u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7792), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d458: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d45c: 0xa0541e34  sb          $s4, 0x1E34($v0)
    ctx->pc = 0x36d45cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7732), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d460: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d460u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d464: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x36d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36d468: 0xa2c21e76  sb          $v0, 0x1E76($s6)
    ctx->pc = 0x36d468u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7798), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d46c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d470: 0xa0541e47  sb          $s4, 0x1E47($v0)
    ctx->pc = 0x36d470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7751), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d474: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d474u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d478: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x36d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36d47c: 0xa2c21e89  sb          $v0, 0x1E89($s6)
    ctx->pc = 0x36d47cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7817), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d480: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d484: 0xa0541e4f  sb          $s4, 0x1E4F($v0)
    ctx->pc = 0x36d484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7759), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d488: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d488u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d48c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36d490: 0xa2c21e91  sb          $v0, 0x1E91($s6)
    ctx->pc = 0x36d490u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7825), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d494: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d498: 0xa0541e57  sb          $s4, 0x1E57($v0)
    ctx->pc = 0x36d498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7767), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d49c: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d49cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x36d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36d4a4: 0xa2c21e99  sb          $v0, 0x1E99($s6)
    ctx->pc = 0x36d4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7833), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d4a8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4ac: 0xa0541e59  sb          $s4, 0x1E59($v0)
    ctx->pc = 0x36d4acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7769), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d4b0: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x36d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36d4b8: 0xa2c21e9b  sb          $v0, 0x1E9B($s6)
    ctx->pc = 0x36d4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7835), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d4bc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4c0: 0xa0541e5a  sb          $s4, 0x1E5A($v0)
    ctx->pc = 0x36d4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7770), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d4c4: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d4c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4c8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x36d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36d4cc: 0xa2c21e9c  sb          $v0, 0x1E9C($s6)
    ctx->pc = 0x36d4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7836), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d4d0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4d4: 0xa0541e3e  sb          $s4, 0x1E3E($v0)
    ctx->pc = 0x36d4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7742), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d4d8: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d4d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4dc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x36d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36d4e0: 0xa2c21e80  sb          $v0, 0x1E80($s6)
    ctx->pc = 0x36d4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7808), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d4e4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4e8: 0xa0541e52  sb          $s4, 0x1E52($v0)
    ctx->pc = 0x36d4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7762), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d4ec: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d4ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36d4f4: 0xa2c21e94  sb          $v0, 0x1E94($s6)
    ctx->pc = 0x36d4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7828), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d4f8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d4fc: 0xa0541e65  sb          $s4, 0x1E65($v0)
    ctx->pc = 0x36d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7781), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d500: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d500u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d504: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x36d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36d508: 0xa2c21ea7  sb          $v0, 0x1EA7($s6)
    ctx->pc = 0x36d508u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7847), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d50c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d510: 0xa0541e69  sb          $s4, 0x1E69($v0)
    ctx->pc = 0x36d510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7785), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d514: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d514u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d518: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x36d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36d51c: 0xa2c21eab  sb          $v0, 0x1EAB($s6)
    ctx->pc = 0x36d51cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7851), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d520: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d524: 0xa0541e4e  sb          $s4, 0x1E4E($v0)
    ctx->pc = 0x36d524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7758), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d528: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d528u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d52c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x36d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36d530: 0xa2c21e90  sb          $v0, 0x1E90($s6)
    ctx->pc = 0x36d530u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 7824), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d534: 0x8f968c00  lw          $s6, -0x7400($gp)
    ctx->pc = 0x36d534u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d538: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x36d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36d53c: 0xa2c21f74  sb          $v0, 0x1F74($s6)
    ctx->pc = 0x36d53cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 8052), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d540: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d544: 0xa0531e32  sb          $s3, 0x1E32($v0)
    ctx->pc = 0x36d544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7730), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d548: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d54c: 0xa0401e74  sb          $zero, 0x1E74($v0)
    ctx->pc = 0x36d54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7796), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d550: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d554: 0xa0531e3a  sb          $s3, 0x1E3A($v0)
    ctx->pc = 0x36d554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7738), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d558: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d55c: 0xa0551e7c  sb          $s5, 0x1E7C($v0)
    ctx->pc = 0x36d55cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7804), (uint8_t)GPR_U32(ctx, 21));
    // 0x36d560: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d564: 0xa0531e39  sb          $s3, 0x1E39($v0)
    ctx->pc = 0x36d564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7737), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d568: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d56c: 0xa0541e7b  sb          $s4, 0x1E7B($v0)
    ctx->pc = 0x36d56cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7803), (uint8_t)GPR_U32(ctx, 20));
    // 0x36d570: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d574: 0xa0531e42  sb          $s3, 0x1E42($v0)
    ctx->pc = 0x36d574u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7746), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d578: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d57c: 0xa0531e84  sb          $s3, 0x1E84($v0)
    ctx->pc = 0x36d57cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7812), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d580: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d584: 0xa0531e46  sb          $s3, 0x1E46($v0)
    ctx->pc = 0x36d584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7750), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d588: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d588u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d58c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d590: 0xa2821e88  sb          $v0, 0x1E88($s4)
    ctx->pc = 0x36d590u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7816), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d594: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d598: 0xa0531e2f  sb          $s3, 0x1E2F($v0)
    ctx->pc = 0x36d598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7727), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d59c: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d59cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d5a4: 0xa2821e71  sb          $v0, 0x1E71($s4)
    ctx->pc = 0x36d5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7793), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d5a8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5ac: 0xa0531e3b  sb          $s3, 0x1E3B($v0)
    ctx->pc = 0x36d5acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7739), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d5b0: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d5b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36d5b8: 0xa2821e7d  sb          $v0, 0x1E7D($s4)
    ctx->pc = 0x36d5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7805), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d5bc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5c0: 0xa0531e49  sb          $s3, 0x1E49($v0)
    ctx->pc = 0x36d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7753), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d5c4: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d5c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x36d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36d5cc: 0xa2821e8b  sb          $v0, 0x1E8B($s4)
    ctx->pc = 0x36d5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7819), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d5d0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5d4: 0xa0531e48  sb          $s3, 0x1E48($v0)
    ctx->pc = 0x36d5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7752), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d5d8: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36d5e0: 0xa2821e8a  sb          $v0, 0x1E8A($s4)
    ctx->pc = 0x36d5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7818), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d5e4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5e8: 0xa0531e37  sb          $s3, 0x1E37($v0)
    ctx->pc = 0x36d5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7735), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d5ec: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d5ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x36d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36d5f4: 0xa2821e79  sb          $v0, 0x1E79($s4)
    ctx->pc = 0x36d5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7801), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d5f8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d5fc: 0xa0531e35  sb          $s3, 0x1E35($v0)
    ctx->pc = 0x36d5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7733), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d600: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d600u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d604: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x36d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36d608: 0xa2821e77  sb          $v0, 0x1E77($s4)
    ctx->pc = 0x36d608u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7799), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d60c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d610: 0xa0531e40  sb          $s3, 0x1E40($v0)
    ctx->pc = 0x36d610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7744), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d614: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d614u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d618: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36d61c: 0xa2821e82  sb          $v0, 0x1E82($s4)
    ctx->pc = 0x36d61cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7810), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d620: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d624: 0xa0531e2b  sb          $s3, 0x1E2B($v0)
    ctx->pc = 0x36d624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7723), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d628: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d628u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d62c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x36d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x36d630: 0xa2821e6d  sb          $v0, 0x1E6D($s4)
    ctx->pc = 0x36d630u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7789), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d634: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d638: 0xa0531e43  sb          $s3, 0x1E43($v0)
    ctx->pc = 0x36d638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7747), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d63c: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d63cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d640: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x36d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36d644: 0xa2821e85  sb          $v0, 0x1E85($s4)
    ctx->pc = 0x36d644u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7813), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d648: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d64c: 0xa0531e2a  sb          $s3, 0x1E2A($v0)
    ctx->pc = 0x36d64cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7722), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d650: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d650u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d654: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x36d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36d658: 0xa2821e6c  sb          $v0, 0x1E6C($s4)
    ctx->pc = 0x36d658u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7788), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d65c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d660: 0xa0531e4d  sb          $s3, 0x1E4D($v0)
    ctx->pc = 0x36d660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7757), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d664: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d664u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d668: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x36d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36d66c: 0xa2821e8f  sb          $v0, 0x1E8F($s4)
    ctx->pc = 0x36d66cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7823), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d670: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d674: 0xa0531e58  sb          $s3, 0x1E58($v0)
    ctx->pc = 0x36d674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7768), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d678: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d678u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d67c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36d680: 0xa2821e9a  sb          $v0, 0x1E9A($s4)
    ctx->pc = 0x36d680u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7834), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d684: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d688: 0xa0531e56  sb          $s3, 0x1E56($v0)
    ctx->pc = 0x36d688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7766), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d68c: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d68cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d690: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x36d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36d694: 0xa2821e98  sb          $v0, 0x1E98($s4)
    ctx->pc = 0x36d694u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7832), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d698: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d69c: 0xa0531e67  sb          $s3, 0x1E67($v0)
    ctx->pc = 0x36d69cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7783), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d6a0: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d6a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6a4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x36d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36d6a8: 0xa2821ea9  sb          $v0, 0x1EA9($s4)
    ctx->pc = 0x36d6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7849), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d6ac: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6b0: 0xa0531e50  sb          $s3, 0x1E50($v0)
    ctx->pc = 0x36d6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7760), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d6b4: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d6b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6b8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x36d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36d6bc: 0xa2821e92  sb          $v0, 0x1E92($s4)
    ctx->pc = 0x36d6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7826), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d6c0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6c4: 0xa0531e4a  sb          $s3, 0x1E4A($v0)
    ctx->pc = 0x36d6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7754), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d6c8: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d6c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x36d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36d6d0: 0xa2821e8c  sb          $v0, 0x1E8C($s4)
    ctx->pc = 0x36d6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7820), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d6d4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6d8: 0xa0531e5c  sb          $s3, 0x1E5C($v0)
    ctx->pc = 0x36d6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7772), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d6dc: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6e0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x36d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36d6e4: 0xa2821e9e  sb          $v0, 0x1E9E($s4)
    ctx->pc = 0x36d6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7838), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d6e8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6ec: 0xa0531e61  sb          $s3, 0x1E61($v0)
    ctx->pc = 0x36d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7777), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d6f0: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d6f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d6f4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x36d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36d6f8: 0xa2821ea3  sb          $v0, 0x1EA3($s4)
    ctx->pc = 0x36d6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7843), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d6fc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d700: 0xa0531e62  sb          $s3, 0x1E62($v0)
    ctx->pc = 0x36d700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7778), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d704: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d704u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d708: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x36d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x36d70c: 0xa2821ea4  sb          $v0, 0x1EA4($s4)
    ctx->pc = 0x36d70cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7844), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d710: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d714: 0xa0531e63  sb          $s3, 0x1E63($v0)
    ctx->pc = 0x36d714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7779), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d718: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d718u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d71c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x36d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x36d720: 0xa2821ea5  sb          $v0, 0x1EA5($s4)
    ctx->pc = 0x36d720u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7845), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d724: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d728: 0xa0531e55  sb          $s3, 0x1E55($v0)
    ctx->pc = 0x36d728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7765), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d72c: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d72cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d730: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x36d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x36d734: 0xa2821e97  sb          $v0, 0x1E97($s4)
    ctx->pc = 0x36d734u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7831), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d738: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d73c: 0xa0531e53  sb          $s3, 0x1E53($v0)
    ctx->pc = 0x36d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7763), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d740: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d740u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d744: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x36d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x36d748: 0xa2821e95  sb          $v0, 0x1E95($s4)
    ctx->pc = 0x36d748u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7829), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d74c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d750: 0xa0531e5b  sb          $s3, 0x1E5B($v0)
    ctx->pc = 0x36d750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7771), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d754: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d754u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d758: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x36d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36d75c: 0xa2821e9d  sb          $v0, 0x1E9D($s4)
    ctx->pc = 0x36d75cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7837), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d760: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d764: 0xa0531e60  sb          $s3, 0x1E60($v0)
    ctx->pc = 0x36d764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7776), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d768: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d768u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d76c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x36d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x36d770: 0xa2821ea2  sb          $v0, 0x1EA2($s4)
    ctx->pc = 0x36d770u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7842), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d774: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d778: 0xa0531e4b  sb          $s3, 0x1E4B($v0)
    ctx->pc = 0x36d778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7755), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d77c: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d77cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d780: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x36d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x36d784: 0xa2821e8d  sb          $v0, 0x1E8D($s4)
    ctx->pc = 0x36d784u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7821), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d788: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d78c: 0xa0531e5e  sb          $s3, 0x1E5E($v0)
    ctx->pc = 0x36d78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7774), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d790: 0x8f948c00  lw          $s4, -0x7400($gp)
    ctx->pc = 0x36d790u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d794: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x36d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36d798: 0xa2821ea0  sb          $v0, 0x1EA0($s4)
    ctx->pc = 0x36d798u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7840), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d79c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7a0: 0xa0531e66  sb          $s3, 0x1E66($v0)
    ctx->pc = 0x36d7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7782), (uint8_t)GPR_U32(ctx, 19));
    // 0x36d7a4: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7a8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x36d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36d7ac: 0xa2621ea8  sb          $v0, 0x1EA8($s3)
    ctx->pc = 0x36d7acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7848), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d7b0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x36d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d7b8: 0xa2621f75  sb          $v0, 0x1F75($s3)
    ctx->pc = 0x36d7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8053), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d7bc: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7c0: 0x7ba205c0  lq          $v0, 0x5C0($sp)
    ctx->pc = 0x36d7c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x36d7c4: 0xae621f88  sw          $v0, 0x1F88($s3)
    ctx->pc = 0x36d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8072), GPR_U32(ctx, 2));
    // 0x36d7c8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7cc: 0xac521f8c  sw          $s2, 0x1F8C($v0)
    ctx->pc = 0x36d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8076), GPR_U32(ctx, 18));
    // 0x36d7d0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7d4: 0x7ba205b0  lq          $v0, 0x5B0($sp)
    ctx->pc = 0x36d7d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x36d7d8: 0xae621f90  sw          $v0, 0x1F90($s3)
    ctx->pc = 0x36d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8080), GPR_U32(ctx, 2));
    // 0x36d7dc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7e0: 0xac511f94  sw          $s1, 0x1F94($v0)
    ctx->pc = 0x36d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8084), GPR_U32(ctx, 17));
    // 0x36d7e4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7e8: 0xac501f98  sw          $s0, 0x1F98($v0)
    ctx->pc = 0x36d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8088), GPR_U32(ctx, 16));
    // 0x36d7ec: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d7ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7f0: 0x7ba205a0  lq          $v0, 0x5A0($sp)
    ctx->pc = 0x36d7f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x36d7f4: 0xae621f9c  sw          $v0, 0x1F9C($s3)
    ctx->pc = 0x36d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8092), GPR_U32(ctx, 2));
    // 0x36d7f8: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d7fc: 0x7ba20590  lq          $v0, 0x590($sp)
    ctx->pc = 0x36d7fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x36d800: 0xae621fa0  sw          $v0, 0x1FA0($s3)
    ctx->pc = 0x36d800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8096), GPR_U32(ctx, 2));
    // 0x36d804: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d808: 0xac591fa4  sw          $t9, 0x1FA4($v0)
    ctx->pc = 0x36d808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8100), GPR_U32(ctx, 25));
    // 0x36d80c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d80cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d810: 0x7ba20580  lq          $v0, 0x580($sp)
    ctx->pc = 0x36d810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x36d814: 0xae621fa8  sw          $v0, 0x1FA8($s3)
    ctx->pc = 0x36d814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8104), GPR_U32(ctx, 2));
    // 0x36d818: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d81c: 0xac581fac  sw          $t8, 0x1FAC($v0)
    ctx->pc = 0x36d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8108), GPR_U32(ctx, 24));
    // 0x36d820: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d820u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d824: 0x7ba20570  lq          $v0, 0x570($sp)
    ctx->pc = 0x36d824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x36d828: 0xae621fb0  sw          $v0, 0x1FB0($s3)
    ctx->pc = 0x36d828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8112), GPR_U32(ctx, 2));
    // 0x36d82c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d82cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d830: 0x7ba20560  lq          $v0, 0x560($sp)
    ctx->pc = 0x36d830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x36d834: 0xae621fb4  sw          $v0, 0x1FB4($s3)
    ctx->pc = 0x36d834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8116), GPR_U32(ctx, 2));
    // 0x36d838: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d838u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d83c: 0x7ba20550  lq          $v0, 0x550($sp)
    ctx->pc = 0x36d83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x36d840: 0xae621fb8  sw          $v0, 0x1FB8($s3)
    ctx->pc = 0x36d840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8120), GPR_U32(ctx, 2));
    // 0x36d844: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d848: 0xac4f1fbc  sw          $t7, 0x1FBC($v0)
    ctx->pc = 0x36d848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8124), GPR_U32(ctx, 15));
    // 0x36d84c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d84cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d850: 0x7ba20540  lq          $v0, 0x540($sp)
    ctx->pc = 0x36d850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x36d854: 0xae621fc0  sw          $v0, 0x1FC0($s3)
    ctx->pc = 0x36d854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8128), GPR_U32(ctx, 2));
    // 0x36d858: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d858u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d85c: 0x7ba20530  lq          $v0, 0x530($sp)
    ctx->pc = 0x36d85cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x36d860: 0xae621fc4  sw          $v0, 0x1FC4($s3)
    ctx->pc = 0x36d860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8132), GPR_U32(ctx, 2));
    // 0x36d864: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d864u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d868: 0x7ba20520  lq          $v0, 0x520($sp)
    ctx->pc = 0x36d868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x36d86c: 0xae621fc8  sw          $v0, 0x1FC8($s3)
    ctx->pc = 0x36d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8136), GPR_U32(ctx, 2));
    // 0x36d870: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d870u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d874: 0x3c024525  lui         $v0, 0x4525
    ctx->pc = 0x36d874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17701 << 16));
    // 0x36d878: 0xae621fcc  sw          $v0, 0x1FCC($s3)
    ctx->pc = 0x36d878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8140), GPR_U32(ctx, 2));
    // 0x36d87c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d87cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d880: 0x7ba20510  lq          $v0, 0x510($sp)
    ctx->pc = 0x36d880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x36d884: 0xae621fd0  sw          $v0, 0x1FD0($s3)
    ctx->pc = 0x36d884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8144), GPR_U32(ctx, 2));
    // 0x36d888: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d888u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d88c: 0x7ba20500  lq          $v0, 0x500($sp)
    ctx->pc = 0x36d88cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x36d890: 0xae621fd4  sw          $v0, 0x1FD4($s3)
    ctx->pc = 0x36d890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8148), GPR_U32(ctx, 2));
    // 0x36d894: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d894u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d898: 0x7ba204f0  lq          $v0, 0x4F0($sp)
    ctx->pc = 0x36d898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x36d89c: 0xae621fd8  sw          $v0, 0x1FD8($s3)
    ctx->pc = 0x36d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8152), GPR_U32(ctx, 2));
    // 0x36d8a0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8a4: 0x7ba204e0  lq          $v0, 0x4E0($sp)
    ctx->pc = 0x36d8a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x36d8a8: 0xae621fdc  sw          $v0, 0x1FDC($s3)
    ctx->pc = 0x36d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8156), GPR_U32(ctx, 2));
    // 0x36d8ac: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8b0: 0x7ba204d0  lq          $v0, 0x4D0($sp)
    ctx->pc = 0x36d8b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x36d8b4: 0xae621fe0  sw          $v0, 0x1FE0($s3)
    ctx->pc = 0x36d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8160), GPR_U32(ctx, 2));
    // 0x36d8b8: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8bc: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x36d8bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x36d8c0: 0xae621fe4  sw          $v0, 0x1FE4($s3)
    ctx->pc = 0x36d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8164), GPR_U32(ctx, 2));
    // 0x36d8c4: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8c8: 0x7ba204b0  lq          $v0, 0x4B0($sp)
    ctx->pc = 0x36d8c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x36d8cc: 0xae621fe8  sw          $v0, 0x1FE8($s3)
    ctx->pc = 0x36d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8168), GPR_U32(ctx, 2));
    // 0x36d8d0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8d4: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x36d8d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x36d8d8: 0xae621fec  sw          $v0, 0x1FEC($s3)
    ctx->pc = 0x36d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8172), GPR_U32(ctx, 2));
    // 0x36d8dc: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8e0: 0x7ba20490  lq          $v0, 0x490($sp)
    ctx->pc = 0x36d8e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x36d8e4: 0xae621ff0  sw          $v0, 0x1FF0($s3)
    ctx->pc = 0x36d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8176), GPR_U32(ctx, 2));
    // 0x36d8e8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8ec: 0xac4e1ff4  sw          $t6, 0x1FF4($v0)
    ctx->pc = 0x36d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8180), GPR_U32(ctx, 14));
    // 0x36d8f0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8f4: 0xac4d1ff8  sw          $t5, 0x1FF8($v0)
    ctx->pc = 0x36d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8184), GPR_U32(ctx, 13));
    // 0x36d8f8: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d8fc: 0x7ba20480  lq          $v0, 0x480($sp)
    ctx->pc = 0x36d8fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x36d900: 0xae621ffc  sw          $v0, 0x1FFC($s3)
    ctx->pc = 0x36d900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8188), GPR_U32(ctx, 2));
    // 0x36d904: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d904u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d908: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x36d908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x36d90c: 0xae622000  sw          $v0, 0x2000($s3)
    ctx->pc = 0x36d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8192), GPR_U32(ctx, 2));
    // 0x36d910: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d914: 0xac4e2004  sw          $t6, 0x2004($v0)
    ctx->pc = 0x36d914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8196), GPR_U32(ctx, 14));
    // 0x36d918: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d918u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d91c: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x36d91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x36d920: 0xae622008  sw          $v0, 0x2008($s3)
    ctx->pc = 0x36d920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8200), GPR_U32(ctx, 2));
    // 0x36d924: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d928: 0xac58200c  sw          $t8, 0x200C($v0)
    ctx->pc = 0x36d928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8204), GPR_U32(ctx, 24));
    // 0x36d92c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d92cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d930: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x36d930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x36d934: 0xae622010  sw          $v0, 0x2010($s3)
    ctx->pc = 0x36d934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8208), GPR_U32(ctx, 2));
    // 0x36d938: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d938u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d93c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x36d93cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x36d940: 0xae622014  sw          $v0, 0x2014($s3)
    ctx->pc = 0x36d940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8212), GPR_U32(ctx, 2));
    // 0x36d944: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d948: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x36d948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x36d94c: 0xae622018  sw          $v0, 0x2018($s3)
    ctx->pc = 0x36d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8216), GPR_U32(ctx, 2));
    // 0x36d950: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d950u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d954: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x36d954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36d958: 0xae62201c  sw          $v0, 0x201C($s3)
    ctx->pc = 0x36d958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8220), GPR_U32(ctx, 2));
    // 0x36d95c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d95cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d960: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x36d960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x36d964: 0xae622020  sw          $v0, 0x2020($s3)
    ctx->pc = 0x36d964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8224), GPR_U32(ctx, 2));
    // 0x36d968: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d968u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d96c: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x36d96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x36d970: 0xae622024  sw          $v0, 0x2024($s3)
    ctx->pc = 0x36d970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8228), GPR_U32(ctx, 2));
    // 0x36d974: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d974u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d978: 0x7ba20520  lq          $v0, 0x520($sp)
    ctx->pc = 0x36d978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x36d97c: 0xae622038  sw          $v0, 0x2038($s3)
    ctx->pc = 0x36d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8248), GPR_U32(ctx, 2));
    // 0x36d980: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d980u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d984: 0x7ba20400  lq          $v0, 0x400($sp)
    ctx->pc = 0x36d984u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x36d988: 0xae62203c  sw          $v0, 0x203C($s3)
    ctx->pc = 0x36d988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8252), GPR_U32(ctx, 2));
    // 0x36d98c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d98cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d990: 0x7ba203f0  lq          $v0, 0x3F0($sp)
    ctx->pc = 0x36d990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x36d994: 0xae622040  sw          $v0, 0x2040($s3)
    ctx->pc = 0x36d994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8256), GPR_U32(ctx, 2));
    // 0x36d998: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d998u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d99c: 0x7ba20500  lq          $v0, 0x500($sp)
    ctx->pc = 0x36d99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x36d9a0: 0xae622044  sw          $v0, 0x2044($s3)
    ctx->pc = 0x36d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8260), GPR_U32(ctx, 2));
    // 0x36d9a4: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9a8: 0x7ba203e0  lq          $v0, 0x3E0($sp)
    ctx->pc = 0x36d9a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x36d9ac: 0xae622048  sw          $v0, 0x2048($s3)
    ctx->pc = 0x36d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8264), GPR_U32(ctx, 2));
    // 0x36d9b0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9b4: 0x7ba203d0  lq          $v0, 0x3D0($sp)
    ctx->pc = 0x36d9b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x36d9b8: 0xae62204c  sw          $v0, 0x204C($s3)
    ctx->pc = 0x36d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8268), GPR_U32(ctx, 2));
    // 0x36d9bc: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9c0: 0x7ba203c0  lq          $v0, 0x3C0($sp)
    ctx->pc = 0x36d9c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x36d9c4: 0xae622050  sw          $v0, 0x2050($s3)
    ctx->pc = 0x36d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8272), GPR_U32(ctx, 2));
    // 0x36d9c8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9cc: 0xac592054  sw          $t9, 0x2054($v0)
    ctx->pc = 0x36d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8276), GPR_U32(ctx, 25));
    // 0x36d9d0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9d4: 0xac4c2058  sw          $t4, 0x2058($v0)
    ctx->pc = 0x36d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8280), GPR_U32(ctx, 12));
    // 0x36d9d8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9dc: 0xac58205c  sw          $t8, 0x205C($v0)
    ctx->pc = 0x36d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8284), GPR_U32(ctx, 24));
    // 0x36d9e0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9e4: 0x7ba203b0  lq          $v0, 0x3B0($sp)
    ctx->pc = 0x36d9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x36d9e8: 0xae622060  sw          $v0, 0x2060($s3)
    ctx->pc = 0x36d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8288), GPR_U32(ctx, 2));
    // 0x36d9ec: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36d9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9f0: 0x7ba203a0  lq          $v0, 0x3A0($sp)
    ctx->pc = 0x36d9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x36d9f4: 0xae622064  sw          $v0, 0x2064($s3)
    ctx->pc = 0x36d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8292), GPR_U32(ctx, 2));
    // 0x36d9f8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36d9fc: 0xac4b2068  sw          $t3, 0x2068($v0)
    ctx->pc = 0x36d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8296), GPR_U32(ctx, 11));
    // 0x36da00: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da04: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36da04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36da08: 0xae62206c  sw          $v0, 0x206C($s3)
    ctx->pc = 0x36da08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8300), GPR_U32(ctx, 2));
    // 0x36da0c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da10: 0xac4d2070  sw          $t5, 0x2070($v0)
    ctx->pc = 0x36da10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8304), GPR_U32(ctx, 13));
    // 0x36da14: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da18: 0x7ba20390  lq          $v0, 0x390($sp)
    ctx->pc = 0x36da18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x36da1c: 0xae622074  sw          $v0, 0x2074($s3)
    ctx->pc = 0x36da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8308), GPR_U32(ctx, 2));
    // 0x36da20: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da24: 0xac4b2078  sw          $t3, 0x2078($v0)
    ctx->pc = 0x36da24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8312), GPR_U32(ctx, 11));
    // 0x36da28: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da2c: 0x7ba20380  lq          $v0, 0x380($sp)
    ctx->pc = 0x36da2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x36da30: 0xae62207c  sw          $v0, 0x207C($s3)
    ctx->pc = 0x36da30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8316), GPR_U32(ctx, 2));
    // 0x36da34: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da38: 0xac4d2080  sw          $t5, 0x2080($v0)
    ctx->pc = 0x36da38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8320), GPR_U32(ctx, 13));
    // 0x36da3c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da40: 0xac4e2084  sw          $t6, 0x2084($v0)
    ctx->pc = 0x36da40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8324), GPR_U32(ctx, 14));
    // 0x36da44: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da48: 0x7ba20370  lq          $v0, 0x370($sp)
    ctx->pc = 0x36da48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x36da4c: 0xae622088  sw          $v0, 0x2088($s3)
    ctx->pc = 0x36da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8328), GPR_U32(ctx, 2));
    // 0x36da50: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da54: 0x7ba20360  lq          $v0, 0x360($sp)
    ctx->pc = 0x36da54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x36da58: 0xae62208c  sw          $v0, 0x208C($s3)
    ctx->pc = 0x36da58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8332), GPR_U32(ctx, 2));
    // 0x36da5c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da60: 0xac4a2090  sw          $t2, 0x2090($v0)
    ctx->pc = 0x36da60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8336), GPR_U32(ctx, 10));
    // 0x36da64: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da68: 0x7ba20350  lq          $v0, 0x350($sp)
    ctx->pc = 0x36da68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x36da6c: 0xae622094  sw          $v0, 0x2094($s3)
    ctx->pc = 0x36da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8340), GPR_U32(ctx, 2));
    // 0x36da70: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da74: 0xac492098  sw          $t1, 0x2098($v0)
    ctx->pc = 0x36da74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8344), GPR_U32(ctx, 9));
    // 0x36da78: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da7c: 0xac4f209c  sw          $t7, 0x209C($v0)
    ctx->pc = 0x36da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8348), GPR_U32(ctx, 15));
    // 0x36da80: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da84: 0xac4b20a0  sw          $t3, 0x20A0($v0)
    ctx->pc = 0x36da84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8352), GPR_U32(ctx, 11));
    // 0x36da88: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da8c: 0x7ba20340  lq          $v0, 0x340($sp)
    ctx->pc = 0x36da8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x36da90: 0xae6220a4  sw          $v0, 0x20A4($s3)
    ctx->pc = 0x36da90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8356), GPR_U32(ctx, 2));
    // 0x36da94: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36da94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36da98: 0x7ba20330  lq          $v0, 0x330($sp)
    ctx->pc = 0x36da98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x36da9c: 0xae6220a8  sw          $v0, 0x20A8($s3)
    ctx->pc = 0x36da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8360), GPR_U32(ctx, 2));
    // 0x36daa0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36daa4: 0xac5820ac  sw          $t8, 0x20AC($v0)
    ctx->pc = 0x36daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8364), GPR_U32(ctx, 24));
    // 0x36daa8: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36daa8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36daac: 0x3c024648  lui         $v0, 0x4648
    ctx->pc = 0x36daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17992 << 16));
    // 0x36dab0: 0xae6220b0  sw          $v0, 0x20B0($s3)
    ctx->pc = 0x36dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8368), GPR_U32(ctx, 2));
    // 0x36dab4: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dab8: 0x7ba20320  lq          $v0, 0x320($sp)
    ctx->pc = 0x36dab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x36dabc: 0xae6220b4  sw          $v0, 0x20B4($s3)
    ctx->pc = 0x36dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8372), GPR_U32(ctx, 2));
    // 0x36dac0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dac4: 0xac4820b8  sw          $t0, 0x20B8($v0)
    ctx->pc = 0x36dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8376), GPR_U32(ctx, 8));
    // 0x36dac8: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dac8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dacc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x36daccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36dad0: 0xae6220bc  sw          $v0, 0x20BC($s3)
    ctx->pc = 0x36dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8380), GPR_U32(ctx, 2));
    // 0x36dad4: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dad8: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x36dad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x36dadc: 0xae6220c0  sw          $v0, 0x20C0($s3)
    ctx->pc = 0x36dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8384), GPR_U32(ctx, 2));
    // 0x36dae0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dae4: 0xac5120c4  sw          $s1, 0x20C4($v0)
    ctx->pc = 0x36dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8388), GPR_U32(ctx, 17));
    // 0x36dae8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36daec: 0xac4920c8  sw          $t1, 0x20C8($v0)
    ctx->pc = 0x36daecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8392), GPR_U32(ctx, 9));
    // 0x36daf0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36daf4: 0xac4720cc  sw          $a3, 0x20CC($v0)
    ctx->pc = 0x36daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8396), GPR_U32(ctx, 7));
    // 0x36daf8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dafc: 0xac4620d0  sw          $a2, 0x20D0($v0)
    ctx->pc = 0x36dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8400), GPR_U32(ctx, 6));
    // 0x36db00: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36db00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db04: 0x7ba20320  lq          $v0, 0x320($sp)
    ctx->pc = 0x36db04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x36db08: 0xae6220d4  sw          $v0, 0x20D4($s3)
    ctx->pc = 0x36db08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8404), GPR_U32(ctx, 2));
    // 0x36db0c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db10: 0xac4920d8  sw          $t1, 0x20D8($v0)
    ctx->pc = 0x36db10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8408), GPR_U32(ctx, 9));
    // 0x36db14: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db18: 0xac4f20dc  sw          $t7, 0x20DC($v0)
    ctx->pc = 0x36db18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8412), GPR_U32(ctx, 15));
    // 0x36db1c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db20: 0xac4b20e0  sw          $t3, 0x20E0($v0)
    ctx->pc = 0x36db20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8416), GPR_U32(ctx, 11));
    // 0x36db24: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36db24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db28: 0x7ba20300  lq          $v0, 0x300($sp)
    ctx->pc = 0x36db28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x36db2c: 0xae6220e4  sw          $v0, 0x20E4($s3)
    ctx->pc = 0x36db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8420), GPR_U32(ctx, 2));
    // 0x36db30: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db34: 0xac4520e8  sw          $a1, 0x20E8($v0)
    ctx->pc = 0x36db34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8424), GPR_U32(ctx, 5));
    // 0x36db38: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db3c: 0xac5220ec  sw          $s2, 0x20EC($v0)
    ctx->pc = 0x36db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8428), GPR_U32(ctx, 18));
    // 0x36db40: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36db40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db44: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x36db44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x36db48: 0xae6220f0  sw          $v0, 0x20F0($s3)
    ctx->pc = 0x36db48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8432), GPR_U32(ctx, 2));
    // 0x36db4c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db50: 0xac5120f4  sw          $s1, 0x20F4($v0)
    ctx->pc = 0x36db50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8436), GPR_U32(ctx, 17));
    // 0x36db54: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db58: 0xac4520f8  sw          $a1, 0x20F8($v0)
    ctx->pc = 0x36db58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8440), GPR_U32(ctx, 5));
    // 0x36db5c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db60: 0xac4420fc  sw          $a0, 0x20FC($v0)
    ctx->pc = 0x36db60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8444), GPR_U32(ctx, 4));
    // 0x36db64: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36db64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db68: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x36db68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x36db6c: 0xae622100  sw          $v0, 0x2100($s3)
    ctx->pc = 0x36db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8448), GPR_U32(ctx, 2));
    // 0x36db70: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36db70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db74: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x36db74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x36db78: 0xae622104  sw          $v0, 0x2104($s3)
    ctx->pc = 0x36db78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8452), GPR_U32(ctx, 2));
    // 0x36db7c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db80: 0xac462108  sw          $a2, 0x2108($v0)
    ctx->pc = 0x36db80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8456), GPR_U32(ctx, 6));
    // 0x36db84: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db88: 0xac52210c  sw          $s2, 0x210C($v0)
    ctx->pc = 0x36db88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8460), GPR_U32(ctx, 18));
    // 0x36db8c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db90: 0xac462110  sw          $a2, 0x2110($v0)
    ctx->pc = 0x36db90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8464), GPR_U32(ctx, 6));
    // 0x36db94: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36db98: 0xac4e2114  sw          $t6, 0x2114($v0)
    ctx->pc = 0x36db98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8468), GPR_U32(ctx, 14));
    // 0x36db9c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36db9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dba0: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x36dba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x36dba4: 0xae622118  sw          $v0, 0x2118($s3)
    ctx->pc = 0x36dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8472), GPR_U32(ctx, 2));
    // 0x36dba8: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dba8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbac: 0x7ba203d0  lq          $v0, 0x3D0($sp)
    ctx->pc = 0x36dbacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x36dbb0: 0xae62211c  sw          $v0, 0x211C($s3)
    ctx->pc = 0x36dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8476), GPR_U32(ctx, 2));
    // 0x36dbb4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbb8: 0xac502120  sw          $s0, 0x2120($v0)
    ctx->pc = 0x36dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8480), GPR_U32(ctx, 16));
    // 0x36dbbc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbc0: 0xac4e2124  sw          $t6, 0x2124($v0)
    ctx->pc = 0x36dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8484), GPR_U32(ctx, 14));
    // 0x36dbc4: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dbc4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbc8: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x36dbc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x36dbcc: 0xae622128  sw          $v0, 0x2128($s3)
    ctx->pc = 0x36dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8488), GPR_U32(ctx, 2));
    // 0x36dbd0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbd4: 0xac58212c  sw          $t8, 0x212C($v0)
    ctx->pc = 0x36dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8492), GPR_U32(ctx, 24));
    // 0x36dbd8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbdc: 0xac432130  sw          $v1, 0x2130($v0)
    ctx->pc = 0x36dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8496), GPR_U32(ctx, 3));
    // 0x36dbe0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbe4: 0xac402134  sw          $zero, 0x2134($v0)
    ctx->pc = 0x36dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8500), GPR_U32(ctx, 0));
    // 0x36dbe8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbec: 0xac4d2138  sw          $t5, 0x2138($v0)
    ctx->pc = 0x36dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8504), GPR_U32(ctx, 13));
    // 0x36dbf0: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dbf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dbf4: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x36dbf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x36dbf8: 0xae62213c  sw          $v0, 0x213C($s3)
    ctx->pc = 0x36dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8508), GPR_U32(ctx, 2));
    // 0x36dbfc: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dbfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc00: 0x3c024648  lui         $v0, 0x4648
    ctx->pc = 0x36dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17992 << 16));
    // 0x36dc04: 0xae622140  sw          $v0, 0x2140($s3)
    ctx->pc = 0x36dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8512), GPR_U32(ctx, 2));
    // 0x36dc08: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dc08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc0c: 0x7ba202a0  lq          $v0, 0x2A0($sp)
    ctx->pc = 0x36dc0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x36dc10: 0xae622144  sw          $v0, 0x2144($s3)
    ctx->pc = 0x36dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8516), GPR_U32(ctx, 2));
    // 0x36dc14: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dc14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc18: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x36dc18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x36dc1c: 0xae622148  sw          $v0, 0x2148($s3)
    ctx->pc = 0x36dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8520), GPR_U32(ctx, 2));
    // 0x36dc20: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc24: 0xac52214c  sw          $s2, 0x214C($v0)
    ctx->pc = 0x36dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8524), GPR_U32(ctx, 18));
    // 0x36dc28: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc2c: 0xac432150  sw          $v1, 0x2150($v0)
    ctx->pc = 0x36dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8528), GPR_U32(ctx, 3));
    // 0x36dc30: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc34: 0xac512154  sw          $s1, 0x2154($v0)
    ctx->pc = 0x36dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8532), GPR_U32(ctx, 17));
    // 0x36dc38: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc3c: 0xac4c2158  sw          $t4, 0x2158($v0)
    ctx->pc = 0x36dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8536), GPR_U32(ctx, 12));
    // 0x36dc40: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dc40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc44: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x36dc44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x36dc48: 0xae62215c  sw          $v0, 0x215C($s3)
    ctx->pc = 0x36dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8540), GPR_U32(ctx, 2));
    // 0x36dc4c: 0x8f938c00  lw          $s3, -0x7400($gp)
    ctx->pc = 0x36dc4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc50: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x36dc50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x36dc54: 0xae622160  sw          $v0, 0x2160($s3)
    ctx->pc = 0x36dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8544), GPR_U32(ctx, 2));
    // 0x36dc58: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc5c: 0xac4e2164  sw          $t6, 0x2164($v0)
    ctx->pc = 0x36dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8548), GPR_U32(ctx, 14));
    // 0x36dc60: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc64: 0xac572168  sw          $s7, 0x2168($v0)
    ctx->pc = 0x36dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8552), GPR_U32(ctx, 23));
    // 0x36dc68: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dc68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc6c: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x36dc6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x36dc70: 0xadc2216c  sw          $v0, 0x216C($t6)
    ctx->pc = 0x36dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8556), GPR_U32(ctx, 2));
    // 0x36dc74: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc78: 0xac432170  sw          $v1, 0x2170($v0)
    ctx->pc = 0x36dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8560), GPR_U32(ctx, 3));
    // 0x36dc7c: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dc7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc80: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x36dc80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x36dc84: 0xadc22174  sw          $v0, 0x2174($t6)
    ctx->pc = 0x36dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8564), GPR_U32(ctx, 2));
    // 0x36dc88: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dc88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc8c: 0x3c024661  lui         $v0, 0x4661
    ctx->pc = 0x36dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18017 << 16));
    // 0x36dc90: 0xadc22178  sw          $v0, 0x2178($t6)
    ctx->pc = 0x36dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8568), GPR_U32(ctx, 2));
    // 0x36dc94: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dc98: 0xac47217c  sw          $a3, 0x217C($v0)
    ctx->pc = 0x36dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8572), GPR_U32(ctx, 7));
    // 0x36dc9c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dca0: 0xac502180  sw          $s0, 0x2180($v0)
    ctx->pc = 0x36dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8576), GPR_U32(ctx, 16));
    // 0x36dca4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dca8: 0xac592184  sw          $t9, 0x2184($v0)
    ctx->pc = 0x36dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8580), GPR_U32(ctx, 25));
    // 0x36dcac: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcb0: 0xac482188  sw          $t0, 0x2188($v0)
    ctx->pc = 0x36dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8584), GPR_U32(ctx, 8));
    // 0x36dcb4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcb8: 0xac44218c  sw          $a0, 0x218C($v0)
    ctx->pc = 0x36dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8588), GPR_U32(ctx, 4));
    // 0x36dcbc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcc0: 0xac482190  sw          $t0, 0x2190($v0)
    ctx->pc = 0x36dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8592), GPR_U32(ctx, 8));
    // 0x36dcc4: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dcc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcc8: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x36dcc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x36dccc: 0xadc22194  sw          $v0, 0x2194($t6)
    ctx->pc = 0x36dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8596), GPR_U32(ctx, 2));
    // 0x36dcd0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcd4: 0xac502198  sw          $s0, 0x2198($v0)
    ctx->pc = 0x36dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8600), GPR_U32(ctx, 16));
    // 0x36dcd8: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dcd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcdc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x36dcdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36dce0: 0xadc2219c  sw          $v0, 0x219C($t6)
    ctx->pc = 0x36dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8604), GPR_U32(ctx, 2));
    // 0x36dce4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dce8: 0xac5721a0  sw          $s7, 0x21A0($v0)
    ctx->pc = 0x36dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8608), GPR_U32(ctx, 23));
    // 0x36dcec: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dcecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcf0: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x36dcf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x36dcf4: 0xadc221a4  sw          $v0, 0x21A4($t6)
    ctx->pc = 0x36dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8612), GPR_U32(ctx, 2));
    // 0x36dcf8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dcfc: 0xac4321a8  sw          $v1, 0x21A8($v0)
    ctx->pc = 0x36dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8616), GPR_U32(ctx, 3));
    // 0x36dd00: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd04: 0xac4421ac  sw          $a0, 0x21AC($v0)
    ctx->pc = 0x36dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8620), GPR_U32(ctx, 4));
    // 0x36dd08: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd0c: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x36dd0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x36dd10: 0xadc221b0  sw          $v0, 0x21B0($t6)
    ctx->pc = 0x36dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8624), GPR_U32(ctx, 2));
    // 0x36dd14: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd18: 0xac5121b4  sw          $s1, 0x21B4($v0)
    ctx->pc = 0x36dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8628), GPR_U32(ctx, 17));
    // 0x36dd1c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd20: 0xac4521b8  sw          $a1, 0x21B8($v0)
    ctx->pc = 0x36dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8632), GPR_U32(ctx, 5));
    // 0x36dd24: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd28: 0xac5221bc  sw          $s2, 0x21BC($v0)
    ctx->pc = 0x36dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8636), GPR_U32(ctx, 18));
    // 0x36dd2c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd30: 0xac5721c0  sw          $s7, 0x21C0($v0)
    ctx->pc = 0x36dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8640), GPR_U32(ctx, 23));
    // 0x36dd34: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd38: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x36dd38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x36dd3c: 0xadc221c4  sw          $v0, 0x21C4($t6)
    ctx->pc = 0x36dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8644), GPR_U32(ctx, 2));
    // 0x36dd40: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd44: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x36dd44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x36dd48: 0xadc221c8  sw          $v0, 0x21C8($t6)
    ctx->pc = 0x36dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8648), GPR_U32(ctx, 2));
    // 0x36dd4c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd50: 0xac5821cc  sw          $t8, 0x21CC($v0)
    ctx->pc = 0x36dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8652), GPR_U32(ctx, 24));
    // 0x36dd54: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd58: 0xac4521d0  sw          $a1, 0x21D0($v0)
    ctx->pc = 0x36dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8656), GPR_U32(ctx, 5));
    // 0x36dd5c: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd60: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x36dd60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x36dd64: 0xadc221d4  sw          $v0, 0x21D4($t6)
    ctx->pc = 0x36dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8660), GPR_U32(ctx, 2));
    // 0x36dd68: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd6c: 0xac4a21d8  sw          $t2, 0x21D8($v0)
    ctx->pc = 0x36dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8664), GPR_U32(ctx, 10));
    // 0x36dd70: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd74: 0x3c024548  lui         $v0, 0x4548
    ctx->pc = 0x36dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17736 << 16));
    // 0x36dd78: 0xadc221dc  sw          $v0, 0x21DC($t6)
    ctx->pc = 0x36dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8668), GPR_U32(ctx, 2));
    // 0x36dd7c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd80: 0xac4621e0  sw          $a2, 0x21E0($v0)
    ctx->pc = 0x36dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8672), GPR_U32(ctx, 6));
    // 0x36dd84: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd88: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x36dd88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x36dd8c: 0xadc221e4  sw          $v0, 0x21E4($t6)
    ctx->pc = 0x36dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8676), GPR_U32(ctx, 2));
    // 0x36dd90: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dd94: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x36dd94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x36dd98: 0xadc221e8  sw          $v0, 0x21E8($t6)
    ctx->pc = 0x36dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8680), GPR_U32(ctx, 2));
    // 0x36dd9c: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36dd9cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dda0: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x36dda0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x36dda4: 0xadc221ec  sw          $v0, 0x21EC($t6)
    ctx->pc = 0x36dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8684), GPR_U32(ctx, 2));
    // 0x36dda8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddac: 0xac4621f0  sw          $a2, 0x21F0($v0)
    ctx->pc = 0x36ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8688), GPR_U32(ctx, 6));
    // 0x36ddb0: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36ddb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddb4: 0x7ba20320  lq          $v0, 0x320($sp)
    ctx->pc = 0x36ddb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x36ddb8: 0xadc221f4  sw          $v0, 0x21F4($t6)
    ctx->pc = 0x36ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8692), GPR_U32(ctx, 2));
    // 0x36ddbc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddc0: 0xac4921f8  sw          $t1, 0x21F8($v0)
    ctx->pc = 0x36ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8696), GPR_U32(ctx, 9));
    // 0x36ddc4: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36ddc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddc8: 0x7ba20380  lq          $v0, 0x380($sp)
    ctx->pc = 0x36ddc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x36ddcc: 0xadc221fc  sw          $v0, 0x21FC($t6)
    ctx->pc = 0x36ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8700), GPR_U32(ctx, 2));
    // 0x36ddd0: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36ddd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddd4: 0x7ba203f0  lq          $v0, 0x3F0($sp)
    ctx->pc = 0x36ddd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x36ddd8: 0xadc22200  sw          $v0, 0x2200($t6)
    ctx->pc = 0x36ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8704), GPR_U32(ctx, 2));
    // 0x36dddc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dde0: 0xac592204  sw          $t9, 0x2204($v0)
    ctx->pc = 0x36dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8708), GPR_U32(ctx, 25));
    // 0x36dde4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dde8: 0xac492208  sw          $t1, 0x2208($v0)
    ctx->pc = 0x36dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8712), GPR_U32(ctx, 9));
    // 0x36ddec: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddf0: 0xac4f220c  sw          $t7, 0x220C($v0)
    ctx->pc = 0x36ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8716), GPR_U32(ctx, 15));
    // 0x36ddf4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ddf8: 0xac462210  sw          $a2, 0x2210($v0)
    ctx->pc = 0x36ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8720), GPR_U32(ctx, 6));
    // 0x36ddfc: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36ddfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de00: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x36de00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x36de04: 0xadc22214  sw          $v0, 0x2214($t6)
    ctx->pc = 0x36de04u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8724), GPR_U32(ctx, 2));
    // 0x36de08: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36de08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de0c: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x36de0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x36de10: 0xadc22218  sw          $v0, 0x2218($t6)
    ctx->pc = 0x36de10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8728), GPR_U32(ctx, 2));
    // 0x36de14: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de18: 0xac52221c  sw          $s2, 0x221C($v0)
    ctx->pc = 0x36de18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8732), GPR_U32(ctx, 18));
    // 0x36de1c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de20: 0xac4c2220  sw          $t4, 0x2220($v0)
    ctx->pc = 0x36de20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8736), GPR_U32(ctx, 12));
    // 0x36de24: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36de24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de28: 0x7ba20320  lq          $v0, 0x320($sp)
    ctx->pc = 0x36de28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x36de2c: 0xadc22224  sw          $v0, 0x2224($t6)
    ctx->pc = 0x36de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8740), GPR_U32(ctx, 2));
    // 0x36de30: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de34: 0xac432228  sw          $v1, 0x2228($v0)
    ctx->pc = 0x36de34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8744), GPR_U32(ctx, 3));
    // 0x36de38: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de3c: 0xac52222c  sw          $s2, 0x222C($v0)
    ctx->pc = 0x36de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8748), GPR_U32(ctx, 18));
    // 0x36de40: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36de40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de44: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x36de44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x36de48: 0xadc22230  sw          $v0, 0x2230($t6)
    ctx->pc = 0x36de48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8752), GPR_U32(ctx, 2));
    // 0x36de4c: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36de4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de50: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x36de50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x36de54: 0xadc22234  sw          $v0, 0x2234($t6)
    ctx->pc = 0x36de54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8756), GPR_U32(ctx, 2));
    // 0x36de58: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36de58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de5c: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x36de5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x36de60: 0xadc22238  sw          $v0, 0x2238($t6)
    ctx->pc = 0x36de60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8760), GPR_U32(ctx, 2));
    // 0x36de64: 0x8f8e8c00  lw          $t6, -0x7400($gp)
    ctx->pc = 0x36de64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de68: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36de68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36de6c: 0xadc2223c  sw          $v0, 0x223C($t6)
    ctx->pc = 0x36de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8764), GPR_U32(ctx, 2));
    // 0x36de70: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de74: 0xac482240  sw          $t0, 0x2240($v0)
    ctx->pc = 0x36de74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8768), GPR_U32(ctx, 8));
    // 0x36de78: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de7c: 0xac592244  sw          $t9, 0x2244($v0)
    ctx->pc = 0x36de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8772), GPR_U32(ctx, 25));
    // 0x36de80: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de84: 0xac452248  sw          $a1, 0x2248($v0)
    ctx->pc = 0x36de84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8776), GPR_U32(ctx, 5));
    // 0x36de88: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de8c: 0xac44224c  sw          $a0, 0x224C($v0)
    ctx->pc = 0x36de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8780), GPR_U32(ctx, 4));
    // 0x36de90: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36de90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36de94: 0x7ba202f0  lq          $v0, 0x2F0($sp)
    ctx->pc = 0x36de94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x36de98: 0xaca22250  sw          $v0, 0x2250($a1)
    ctx->pc = 0x36de98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8784), GPR_U32(ctx, 2));
    // 0x36de9c: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dea0: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x36dea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x36dea4: 0xaca22254  sw          $v0, 0x2254($a1)
    ctx->pc = 0x36dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8788), GPR_U32(ctx, 2));
    // 0x36dea8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36deac: 0xac482258  sw          $t0, 0x2258($v0)
    ctx->pc = 0x36deacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8792), GPR_U32(ctx, 8));
    // 0x36deb0: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36deb4: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x36deb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x36deb8: 0xaca2225c  sw          $v0, 0x225C($a1)
    ctx->pc = 0x36deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8796), GPR_U32(ctx, 2));
    // 0x36debc: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36debcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dec0: 0x7ba203c0  lq          $v0, 0x3C0($sp)
    ctx->pc = 0x36dec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x36dec4: 0xaca22260  sw          $v0, 0x2260($a1)
    ctx->pc = 0x36dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8800), GPR_U32(ctx, 2));
    // 0x36dec8: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36decc: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x36deccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x36ded0: 0xaca22264  sw          $v0, 0x2264($a1)
    ctx->pc = 0x36ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8804), GPR_U32(ctx, 2));
    // 0x36ded4: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36ded8: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x36ded8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x36dedc: 0xaca22268  sw          $v0, 0x2268($a1)
    ctx->pc = 0x36dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8808), GPR_U32(ctx, 2));
    // 0x36dee0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dee4: 0xac47226c  sw          $a3, 0x226C($v0)
    ctx->pc = 0x36dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8812), GPR_U32(ctx, 7));
    // 0x36dee8: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36deec: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x36deecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x36def0: 0xaca22270  sw          $v0, 0x2270($a1)
    ctx->pc = 0x36def0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8816), GPR_U32(ctx, 2));
    // 0x36def4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36def8: 0xac402274  sw          $zero, 0x2274($v0)
    ctx->pc = 0x36def8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8820), GPR_U32(ctx, 0));
    // 0x36defc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df00: 0xac432278  sw          $v1, 0x2278($v0)
    ctx->pc = 0x36df00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8824), GPR_U32(ctx, 3));
    // 0x36df04: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df08: 0xac44227c  sw          $a0, 0x227C($v0)
    ctx->pc = 0x36df08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8828), GPR_U32(ctx, 4));
    // 0x36df0c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df10: 0xac572280  sw          $s7, 0x2280($v0)
    ctx->pc = 0x36df10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8832), GPR_U32(ctx, 23));
    // 0x36df14: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df18: 0x7ba20500  lq          $v0, 0x500($sp)
    ctx->pc = 0x36df18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x36df1c: 0xac622284  sw          $v0, 0x2284($v1)
    ctx->pc = 0x36df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8836), GPR_U32(ctx, 2));
    // 0x36df20: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df24: 0x3c024661  lui         $v0, 0x4661
    ctx->pc = 0x36df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18017 << 16));
    // 0x36df28: 0xac622288  sw          $v0, 0x2288($v1)
    ctx->pc = 0x36df28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8840), GPR_U32(ctx, 2));
    // 0x36df2c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df30: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36df34: 0xac62228c  sw          $v0, 0x228C($v1)
    ctx->pc = 0x36df34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8844), GPR_U32(ctx, 2));
    // 0x36df38: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df3c: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x36df3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x36df40: 0xac622290  sw          $v0, 0x2290($v1)
    ctx->pc = 0x36df40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8848), GPR_U32(ctx, 2));
    // 0x36df44: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df48: 0x7ba202e0  lq          $v0, 0x2E0($sp)
    ctx->pc = 0x36df48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x36df4c: 0xac622294  sw          $v0, 0x2294($v1)
    ctx->pc = 0x36df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8852), GPR_U32(ctx, 2));
    // 0x36df50: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36df50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df54: 0xac462298  sw          $a2, 0x2298($v0)
    ctx->pc = 0x36df54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8856), GPR_U32(ctx, 6));
    // 0x36df58: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df5c: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36df60: 0xac62229c  sw          $v0, 0x229C($v1)
    ctx->pc = 0x36df60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8860), GPR_U32(ctx, 2));
    // 0x36df64: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df68: 0xac4622a0  sw          $a2, 0x22A0($v0)
    ctx->pc = 0x36df68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8864), GPR_U32(ctx, 6));
    // 0x36df6c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df70: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x36df70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x36df74: 0xac6222a4  sw          $v0, 0x22A4($v1)
    ctx->pc = 0x36df74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8868), GPR_U32(ctx, 2));
    // 0x36df78: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df7c: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x36df7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x36df80: 0xac6222a8  sw          $v0, 0x22A8($v1)
    ctx->pc = 0x36df80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8872), GPR_U32(ctx, 2));
    // 0x36df84: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df88: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36df88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36df8c: 0xac6222ac  sw          $v0, 0x22AC($v1)
    ctx->pc = 0x36df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8876), GPR_U32(ctx, 2));
    // 0x36df90: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36df94: 0x7ba20310  lq          $v0, 0x310($sp)
    ctx->pc = 0x36df94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x36df98: 0xac6222b0  sw          $v0, 0x22B0($v1)
    ctx->pc = 0x36df98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8880), GPR_U32(ctx, 2));
    // 0x36df9c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfa0: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x36dfa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x36dfa4: 0xac6222b4  sw          $v0, 0x22B4($v1)
    ctx->pc = 0x36dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8884), GPR_U32(ctx, 2));
    // 0x36dfa8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfac: 0xac5022b8  sw          $s0, 0x22B8($v0)
    ctx->pc = 0x36dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8888), GPR_U32(ctx, 16));
    // 0x36dfb0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfb4: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x36dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x36dfb8: 0xac6222bc  sw          $v0, 0x22BC($v1)
    ctx->pc = 0x36dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8892), GPR_U32(ctx, 2));
    // 0x36dfbc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfc0: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x36dfc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x36dfc4: 0xac6222c0  sw          $v0, 0x22C0($v1)
    ctx->pc = 0x36dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8896), GPR_U32(ctx, 2));
    // 0x36dfc8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfcc: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x36dfccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x36dfd0: 0xac6222c4  sw          $v0, 0x22C4($v1)
    ctx->pc = 0x36dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8900), GPR_U32(ctx, 2));
    // 0x36dfd4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfd8: 0xac4c22c8  sw          $t4, 0x22C8($v0)
    ctx->pc = 0x36dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8904), GPR_U32(ctx, 12));
    // 0x36dfdc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfe0: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x36dfe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x36dfe4: 0xac6222cc  sw          $v0, 0x22CC($v1)
    ctx->pc = 0x36dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8908), GPR_U32(ctx, 2));
    // 0x36dfe8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dfec: 0xac4622d0  sw          $a2, 0x22D0($v0)
    ctx->pc = 0x36dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8912), GPR_U32(ctx, 6));
    // 0x36dff0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36dff4: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x36dff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x36dff8: 0xac6222d4  sw          $v0, 0x22D4($v1)
    ctx->pc = 0x36dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8916), GPR_U32(ctx, 2));
    // 0x36dffc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e000: 0xac4a22d8  sw          $t2, 0x22D8($v0)
    ctx->pc = 0x36e000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8920), GPR_U32(ctx, 10));
    // 0x36e004: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e008: 0x7ba203d0  lq          $v0, 0x3D0($sp)
    ctx->pc = 0x36e008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x36e00c: 0xac6222dc  sw          $v0, 0x22DC($v1)
    ctx->pc = 0x36e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8924), GPR_U32(ctx, 2));
    // 0x36e010: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e014: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x36e014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x36e018: 0xac6222e0  sw          $v0, 0x22E0($v1)
    ctx->pc = 0x36e018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8928), GPR_U32(ctx, 2));
    // 0x36e01c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e020: 0x7ba20350  lq          $v0, 0x350($sp)
    ctx->pc = 0x36e020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x36e024: 0xac6222e4  sw          $v0, 0x22E4($v1)
    ctx->pc = 0x36e024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8932), GPR_U32(ctx, 2));
    // 0x36e028: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e02c: 0x7ba20330  lq          $v0, 0x330($sp)
    ctx->pc = 0x36e02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x36e030: 0xac6222e8  sw          $v0, 0x22E8($v1)
    ctx->pc = 0x36e030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8936), GPR_U32(ctx, 2));
    // 0x36e034: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e038: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x36e038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36e03c: 0xac6222ec  sw          $v0, 0x22EC($v1)
    ctx->pc = 0x36e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8940), GPR_U32(ctx, 2));
    // 0x36e040: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e044: 0x3c024648  lui         $v0, 0x4648
    ctx->pc = 0x36e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17992 << 16));
    // 0x36e048: 0xac6222f0  sw          $v0, 0x22F0($v1)
    ctx->pc = 0x36e048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8944), GPR_U32(ctx, 2));
    // 0x36e04c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e050: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x36e050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x36e054: 0xac6222f4  sw          $v0, 0x22F4($v1)
    ctx->pc = 0x36e054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8948), GPR_U32(ctx, 2));
    // 0x36e058: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e05c: 0xac4922f8  sw          $t1, 0x22F8($v0)
    ctx->pc = 0x36e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8952), GPR_U32(ctx, 9));
    // 0x36e060: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e064: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x36e064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x36e068: 0xac6222fc  sw          $v0, 0x22FC($v1)
    ctx->pc = 0x36e068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8956), GPR_U32(ctx, 2));
    // 0x36e06c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e070: 0xac4c2300  sw          $t4, 0x2300($v0)
    ctx->pc = 0x36e070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8960), GPR_U32(ctx, 12));
    // 0x36e074: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e078: 0xac512304  sw          $s1, 0x2304($v0)
    ctx->pc = 0x36e078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8964), GPR_U32(ctx, 17));
    // 0x36e07c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e080: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x36e080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x36e084: 0xac622308  sw          $v0, 0x2308($v1)
    ctx->pc = 0x36e084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8968), GPR_U32(ctx, 2));
    // 0x36e088: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e08c: 0xac44230c  sw          $a0, 0x230C($v0)
    ctx->pc = 0x36e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8972), GPR_U32(ctx, 4));
    // 0x36e090: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e094: 0xac4c2310  sw          $t4, 0x2310($v0)
    ctx->pc = 0x36e094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8976), GPR_U32(ctx, 12));
    // 0x36e098: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e09c: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x36e09cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x36e0a0: 0xac622314  sw          $v0, 0x2314($v1)
    ctx->pc = 0x36e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8980), GPR_U32(ctx, 2));
    // 0x36e0a4: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0a8: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x36e0a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x36e0ac: 0xac622318  sw          $v0, 0x2318($v1)
    ctx->pc = 0x36e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8984), GPR_U32(ctx, 2));
    // 0x36e0b0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0b4: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x36e0b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x36e0b8: 0xac62231c  sw          $v0, 0x231C($v1)
    ctx->pc = 0x36e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8988), GPR_U32(ctx, 2));
    // 0x36e0bc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0c0: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x36e0c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x36e0c4: 0xac622320  sw          $v0, 0x2320($v1)
    ctx->pc = 0x36e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8992), GPR_U32(ctx, 2));
    // 0x36e0c8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0cc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x36e0ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x36e0d0: 0xac622324  sw          $v0, 0x2324($v1)
    ctx->pc = 0x36e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8996), GPR_U32(ctx, 2));
    // 0x36e0d4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0d8: 0xac4a2328  sw          $t2, 0x2328($v0)
    ctx->pc = 0x36e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9000), GPR_U32(ctx, 10));
    // 0x36e0dc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0e0: 0xac47232c  sw          $a3, 0x232C($v0)
    ctx->pc = 0x36e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9004), GPR_U32(ctx, 7));
    // 0x36e0e4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0e8: 0xac4a2330  sw          $t2, 0x2330($v0)
    ctx->pc = 0x36e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9008), GPR_U32(ctx, 10));
    // 0x36e0ec: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0f0: 0x7ba203a0  lq          $v0, 0x3A0($sp)
    ctx->pc = 0x36e0f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x36e0f4: 0xac622334  sw          $v0, 0x2334($v1)
    ctx->pc = 0x36e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9012), GPR_U32(ctx, 2));
    // 0x36e0f8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e0fc: 0x3c024661  lui         $v0, 0x4661
    ctx->pc = 0x36e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18017 << 16));
    // 0x36e100: 0xac622338  sw          $v0, 0x2338($v1)
    ctx->pc = 0x36e100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9016), GPR_U32(ctx, 2));
    // 0x36e104: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e108: 0xac4f233c  sw          $t7, 0x233C($v0)
    ctx->pc = 0x36e108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9020), GPR_U32(ctx, 15));
    // 0x36e10c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e110: 0xac4d2340  sw          $t5, 0x2340($v0)
    ctx->pc = 0x36e110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9024), GPR_U32(ctx, 13));
    // 0x36e114: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e118: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x36e118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x36e11c: 0xac622344  sw          $v0, 0x2344($v1)
    ctx->pc = 0x36e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9028), GPR_U32(ctx, 2));
    // 0x36e120: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e124: 0xac492348  sw          $t1, 0x2348($v0)
    ctx->pc = 0x36e124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9032), GPR_U32(ctx, 9));
    // 0x36e128: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e12c: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x36e12cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x36e130: 0xac62234c  sw          $v0, 0x234C($v1)
    ctx->pc = 0x36e130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9036), GPR_U32(ctx, 2));
    // 0x36e134: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e138: 0xac4b2350  sw          $t3, 0x2350($v0)
    ctx->pc = 0x36e138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9040), GPR_U32(ctx, 11));
    // 0x36e13c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e140: 0x7ba20530  lq          $v0, 0x530($sp)
    ctx->pc = 0x36e140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x36e144: 0xac622354  sw          $v0, 0x2354($v1)
    ctx->pc = 0x36e144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9044), GPR_U32(ctx, 2));
    // 0x36e148: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e14c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x36e14cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36e150: 0xac622358  sw          $v0, 0x2358($v1)
    ctx->pc = 0x36e150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9048), GPR_U32(ctx, 2));
    // 0x36e154: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e158: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x36e158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x36e15c: 0xac62235c  sw          $v0, 0x235C($v1)
    ctx->pc = 0x36e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9052), GPR_U32(ctx, 2));
    // 0x36e160: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e164: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x36e164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36e168: 0xac622360  sw          $v0, 0x2360($v1)
    ctx->pc = 0x36e168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9056), GPR_U32(ctx, 2));
    // 0x36e16c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e170: 0x7ba203a0  lq          $v0, 0x3A0($sp)
    ctx->pc = 0x36e170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x36e174: 0xac622364  sw          $v0, 0x2364($v1)
    ctx->pc = 0x36e174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9060), GPR_U32(ctx, 2));
    // 0x36e178: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e17c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x36e17cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x36e180: 0xac622368  sw          $v0, 0x2368($v1)
    ctx->pc = 0x36e180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9064), GPR_U32(ctx, 2));
    // 0x36e184: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e188: 0x7ba204a0  lq          $v0, 0x4A0($sp)
    ctx->pc = 0x36e188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x36e18c: 0xac62236c  sw          $v0, 0x236C($v1)
    ctx->pc = 0x36e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9068), GPR_U32(ctx, 2));
    // 0x36e190: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e194: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x36e194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36e198: 0xac622370  sw          $v0, 0x2370($v1)
    ctx->pc = 0x36e198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9072), GPR_U32(ctx, 2));
    // 0x36e19c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1a0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x36e1a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36e1a4: 0xac622374  sw          $v0, 0x2374($v1)
    ctx->pc = 0x36e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9076), GPR_U32(ctx, 2));
    // 0x36e1a8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1ac: 0xac4d2378  sw          $t5, 0x2378($v0)
    ctx->pc = 0x36e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9080), GPR_U32(ctx, 13));
    // 0x36e1b0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1b4: 0xac47237c  sw          $a3, 0x237C($v0)
    ctx->pc = 0x36e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9084), GPR_U32(ctx, 7));
    // 0x36e1b8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1bc: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x36e1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x36e1c0: 0xac622380  sw          $v0, 0x2380($v1)
    ctx->pc = 0x36e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9088), GPR_U32(ctx, 2));
    // 0x36e1c4: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1c8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x36e1c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36e1cc: 0xac622384  sw          $v0, 0x2384($v1)
    ctx->pc = 0x36e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9092), GPR_U32(ctx, 2));
    // 0x36e1d0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1d4: 0xac4c2388  sw          $t4, 0x2388($v0)
    ctx->pc = 0x36e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9096), GPR_U32(ctx, 12));
    // 0x36e1d8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1dc: 0xac58238c  sw          $t8, 0x238C($v0)
    ctx->pc = 0x36e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9100), GPR_U32(ctx, 24));
    // 0x36e1e0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1e4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x36e1e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36e1e8: 0xac622390  sw          $v0, 0x2390($v1)
    ctx->pc = 0x36e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9104), GPR_U32(ctx, 2));
    // 0x36e1ec: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e1f0: 0x7ba20340  lq          $v0, 0x340($sp)
    ctx->pc = 0x36e1f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x36e1f4: 0xac622394  sw          $v0, 0x2394($v1)
    ctx->pc = 0x36e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9108), GPR_U32(ctx, 2));
    // 0x36e1f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36e1fc: 0x0  nop
    ctx->pc = 0x36e1fcu;
    // NOP
label_36e200:
    // 0x36e200: 0x8fa305d0  lw          $v1, 0x5D0($sp)
    ctx->pc = 0x36e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x36e204: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e208: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36e20c: 0xafa305d0  sw          $v1, 0x5D0($sp)
    ctx->pc = 0x36e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1488), GPR_U32(ctx, 3));
    // 0x36e210: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e214: 0x8fa305d0  lw          $v1, 0x5D0($sp)
    ctx->pc = 0x36e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x36e218: 0xa4821eee  sh          $v0, 0x1EEE($a0)
    ctx->pc = 0x36e218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7918), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e21c: 0x2863003a  slti        $v1, $v1, 0x3A
    ctx->pc = 0x36e21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x36e220: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e224: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e228: 0xa4821ef0  sh          $v0, 0x1EF0($a0)
    ctx->pc = 0x36e228u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7920), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e22c: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e230: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e234: 0xa4821ef2  sh          $v0, 0x1EF2($a0)
    ctx->pc = 0x36e234u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7922), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e238: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e23c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e240: 0xa4821ef4  sh          $v0, 0x1EF4($a0)
    ctx->pc = 0x36e240u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7924), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e244: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e248: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e24c: 0xa4821ef6  sh          $v0, 0x1EF6($a0)
    ctx->pc = 0x36e24cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7926), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e250: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e254: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e258: 0xa4821ef8  sh          $v0, 0x1EF8($a0)
    ctx->pc = 0x36e258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7928), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e25c: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e260: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e264: 0xa4821efa  sh          $v0, 0x1EFA($a0)
    ctx->pc = 0x36e264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7930), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e268: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e26c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x36e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x36e270: 0xa4821efc  sh          $v0, 0x1EFC($a0)
    ctx->pc = 0x36e270u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7932), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e274: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x36E274u;
    {
        const bool branch_taken_0x36e274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E274u;
        // 0x36e278: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e274) {
            ctx->pc = 0x36E200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e200;
        }
    }
    ctx->pc = 0x36E27Cu;
    // 0x36e27c: 0x8fa305d0  lw          $v1, 0x5D0($sp)
    ctx->pc = 0x36e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x36e280: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e284: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x36e284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36e288: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e28c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36e290: 0xa4621eee  sh          $v0, 0x1EEE($v1)
    ctx->pc = 0x36e290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7918), (uint16_t)GPR_U32(ctx, 2));
    // 0x36e294: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e298: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36e29c: 0xa4621ef0  sh          $v0, 0x1EF0($v1)
    ctx->pc = 0x36e29cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7920), (uint16_t)GPR_U32(ctx, 2));
label_36e2a0:
    // 0x36e2a0: 0xc0db078  jal         func_36C1E0
    ctx->pc = 0x36E2A0u;
    SET_GPR_U32(ctx, 31, 0x36E2A8u);
    ctx->pc = 0x36E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E2A0u;
    // 0x36e2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C1E0u, 0x36E2A0u, 0x36E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2A8u;
label_36e2a8:
    // 0x36e2a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e2ac: 0x2a020042  slti        $v0, $s0, 0x42
    ctx->pc = 0x36e2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x36e2b0: 0x0  nop
    ctx->pc = 0x36e2b0u;
    // NOP
    // 0x36e2b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36E2B4u;
    {
        const bool branch_taken_0x36e2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e2b4) {
            ctx->pc = 0x36E2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e2a0;
        }
    }
    ctx->pc = 0x36E2BCu;
    // 0x36e2bc: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x36E2BCu;
    SET_GPR_U32(ctx, 31, 0x36E2C4u);
    ctx->pc = 0x36E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E2BCu;
    // 0x36e2c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x36E2BCu, 0x36E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2C4u;
label_36e2c4:
    // 0x36e2c4: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e2c8: 0xa0601c10  sb          $zero, 0x1C10($v1)
    ctx->pc = 0x36e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7184), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e2cc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e2d0: 0xac60239c  sw          $zero, 0x239C($v1)
    ctx->pc = 0x36e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9116), GPR_U32(ctx, 0));
    // 0x36e2d4: 0x0  nop
    ctx->pc = 0x36e2d4u;
    // NOP
label_36e2d8:
    // 0x36e2d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x36e2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36e2dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x36e2dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36e2e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x36e2e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36e2e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36e2e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36e2e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36e2e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36e2ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36e2ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36e2f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36e2f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e2f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36e2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e2fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e300: 0x3e00008  jr          $ra
    ctx->pc = 0x36E300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E300u;
        // 0x36e304: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E308u;
}
