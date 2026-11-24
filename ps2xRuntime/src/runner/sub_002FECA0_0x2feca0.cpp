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

// Function: sub_002FECA0
// Address: 0x2feca0 - 0x2feee0
void sub_002FECA0_0x2feca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FECA0_0x2feca0");
#endif

    switch (ctx->pc) {
        case 0x2feca0u: goto label_2feca0;
        case 0x2feca4u: goto label_2feca4;
        case 0x2feca8u: goto label_2feca8;
        case 0x2fecacu: goto label_2fecac;
        case 0x2fecb0u: goto label_2fecb0;
        case 0x2fecb4u: goto label_2fecb4;
        case 0x2fecb8u: goto label_2fecb8;
        case 0x2fecbcu: goto label_2fecbc;
        case 0x2fecc0u: goto label_2fecc0;
        case 0x2fecc4u: goto label_2fecc4;
        case 0x2fecc8u: goto label_2fecc8;
        case 0x2fecccu: goto label_2feccc;
        case 0x2fecd0u: goto label_2fecd0;
        case 0x2fecd4u: goto label_2fecd4;
        case 0x2fecd8u: goto label_2fecd8;
        case 0x2fecdcu: goto label_2fecdc;
        case 0x2fece0u: goto label_2fece0;
        case 0x2fece4u: goto label_2fece4;
        case 0x2fece8u: goto label_2fece8;
        case 0x2fececu: goto label_2fecec;
        case 0x2fecf0u: goto label_2fecf0;
        case 0x2fecf4u: goto label_2fecf4;
        case 0x2fecf8u: goto label_2fecf8;
        case 0x2fecfcu: goto label_2fecfc;
        case 0x2fed00u: goto label_2fed00;
        case 0x2fed04u: goto label_2fed04;
        case 0x2fed08u: goto label_2fed08;
        case 0x2fed0cu: goto label_2fed0c;
        case 0x2fed10u: goto label_2fed10;
        case 0x2fed14u: goto label_2fed14;
        case 0x2fed18u: goto label_2fed18;
        case 0x2fed1cu: goto label_2fed1c;
        case 0x2fed20u: goto label_2fed20;
        case 0x2fed24u: goto label_2fed24;
        case 0x2fed28u: goto label_2fed28;
        case 0x2fed2cu: goto label_2fed2c;
        case 0x2fed30u: goto label_2fed30;
        case 0x2fed34u: goto label_2fed34;
        case 0x2fed38u: goto label_2fed38;
        case 0x2fed3cu: goto label_2fed3c;
        case 0x2fed40u: goto label_2fed40;
        case 0x2fed44u: goto label_2fed44;
        case 0x2fed48u: goto label_2fed48;
        case 0x2fed4cu: goto label_2fed4c;
        case 0x2fed50u: goto label_2fed50;
        case 0x2fed54u: goto label_2fed54;
        case 0x2fed58u: goto label_2fed58;
        case 0x2fed5cu: goto label_2fed5c;
        case 0x2fed60u: goto label_2fed60;
        case 0x2fed64u: goto label_2fed64;
        case 0x2fed68u: goto label_2fed68;
        case 0x2fed6cu: goto label_2fed6c;
        case 0x2fed70u: goto label_2fed70;
        case 0x2fed74u: goto label_2fed74;
        case 0x2fed78u: goto label_2fed78;
        case 0x2fed7cu: goto label_2fed7c;
        case 0x2fed80u: goto label_2fed80;
        case 0x2fed84u: goto label_2fed84;
        case 0x2fed88u: goto label_2fed88;
        case 0x2fed8cu: goto label_2fed8c;
        case 0x2fed90u: goto label_2fed90;
        case 0x2fed94u: goto label_2fed94;
        case 0x2fed98u: goto label_2fed98;
        case 0x2fed9cu: goto label_2fed9c;
        case 0x2feda0u: goto label_2feda0;
        case 0x2feda4u: goto label_2feda4;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedacu: goto label_2fedac;
        case 0x2fedb0u: goto label_2fedb0;
        case 0x2fedb4u: goto label_2fedb4;
        case 0x2fedb8u: goto label_2fedb8;
        case 0x2fedbcu: goto label_2fedbc;
        case 0x2fedc0u: goto label_2fedc0;
        case 0x2fedc4u: goto label_2fedc4;
        case 0x2fedc8u: goto label_2fedc8;
        case 0x2fedccu: goto label_2fedcc;
        case 0x2fedd0u: goto label_2fedd0;
        case 0x2fedd4u: goto label_2fedd4;
        case 0x2fedd8u: goto label_2fedd8;
        case 0x2feddcu: goto label_2feddc;
        case 0x2fede0u: goto label_2fede0;
        case 0x2fede4u: goto label_2fede4;
        case 0x2fede8u: goto label_2fede8;
        case 0x2fedecu: goto label_2fedec;
        case 0x2fedf0u: goto label_2fedf0;
        case 0x2fedf4u: goto label_2fedf4;
        case 0x2fedf8u: goto label_2fedf8;
        case 0x2fedfcu: goto label_2fedfc;
        case 0x2fee00u: goto label_2fee00;
        case 0x2fee04u: goto label_2fee04;
        case 0x2fee08u: goto label_2fee08;
        case 0x2fee0cu: goto label_2fee0c;
        case 0x2fee10u: goto label_2fee10;
        case 0x2fee14u: goto label_2fee14;
        case 0x2fee18u: goto label_2fee18;
        case 0x2fee1cu: goto label_2fee1c;
        case 0x2fee20u: goto label_2fee20;
        case 0x2fee24u: goto label_2fee24;
        case 0x2fee28u: goto label_2fee28;
        case 0x2fee2cu: goto label_2fee2c;
        case 0x2fee30u: goto label_2fee30;
        case 0x2fee34u: goto label_2fee34;
        case 0x2fee38u: goto label_2fee38;
        case 0x2fee3cu: goto label_2fee3c;
        case 0x2fee40u: goto label_2fee40;
        case 0x2fee44u: goto label_2fee44;
        case 0x2fee48u: goto label_2fee48;
        case 0x2fee4cu: goto label_2fee4c;
        case 0x2fee50u: goto label_2fee50;
        case 0x2fee54u: goto label_2fee54;
        case 0x2fee58u: goto label_2fee58;
        case 0x2fee5cu: goto label_2fee5c;
        case 0x2fee60u: goto label_2fee60;
        case 0x2fee64u: goto label_2fee64;
        case 0x2fee68u: goto label_2fee68;
        case 0x2fee6cu: goto label_2fee6c;
        case 0x2fee70u: goto label_2fee70;
        case 0x2fee74u: goto label_2fee74;
        case 0x2fee78u: goto label_2fee78;
        case 0x2fee7cu: goto label_2fee7c;
        case 0x2fee80u: goto label_2fee80;
        case 0x2fee84u: goto label_2fee84;
        case 0x2fee88u: goto label_2fee88;
        case 0x2fee8cu: goto label_2fee8c;
        case 0x2fee90u: goto label_2fee90;
        case 0x2fee94u: goto label_2fee94;
        case 0x2fee98u: goto label_2fee98;
        case 0x2fee9cu: goto label_2fee9c;
        case 0x2feea0u: goto label_2feea0;
        case 0x2feea4u: goto label_2feea4;
        case 0x2feea8u: goto label_2feea8;
        case 0x2feeacu: goto label_2feeac;
        case 0x2feeb0u: goto label_2feeb0;
        case 0x2feeb4u: goto label_2feeb4;
        case 0x2feeb8u: goto label_2feeb8;
        case 0x2feebcu: goto label_2feebc;
        case 0x2feec0u: goto label_2feec0;
        case 0x2feec4u: goto label_2feec4;
        case 0x2feec8u: goto label_2feec8;
        case 0x2feeccu: goto label_2feecc;
        case 0x2feed0u: goto label_2feed0;
        case 0x2feed4u: goto label_2feed4;
        case 0x2feed8u: goto label_2feed8;
        case 0x2feedcu: goto label_2feedc;
        default: break;
    }

    ctx->pc = 0x2feca0u;

label_2feca0:
    // 0x2feca0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2feca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2feca4:
    // 0x2feca4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2feca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2feca8:
    // 0x2feca8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2feca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2fecac:
    // 0x2fecac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2fecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2fecb0:
    // 0x2fecb0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2fecb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fecb4:
    // 0x2fecb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2fecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2fecb8:
    // 0x2fecb8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2fecb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fecbc:
    // 0x2fecbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2fecc0:
    // 0x2fecc0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2fecc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fecc4:
    // 0x2fecc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2fecc8:
    // 0x2fecc8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2fecc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2feccc:
    // 0x2feccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fecd0:
    // 0x2fecd0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2fecd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2fecd4:
    // 0x2fecd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fecd8:
    // 0x2fecd8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2fecd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2fecdc:
    // 0x2fecdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fece0:
    // 0x2fece0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2fece0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2fece4:
    // 0x2fece4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fece8:
    // 0x2fece8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2fecec:
    // 0x2fecec: 0xc09d4d4  jal         func_275350
label_2fecf0:
    if (ctx->pc == 0x2FECF0u) {
        ctx->pc = 0x2FECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECECu;
        // 0x2fecf0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FECF4u;
        goto label_2fecf4;
    }
    ctx->pc = 0x2FECECu;
    SET_GPR_U32(ctx, 31, 0x2FECF4u);
    ctx->pc = 0x2FECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECECu;
    // 0x2fecf0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2FECECu, 0x2FECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECF4u;
label_2fecf4:
    // 0x2fecf4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2fecf8:
    if (ctx->pc == 0x2FECF8u) {
        ctx->pc = 0x2FECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECF4u;
        // 0x2fecf8: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FECFCu;
        goto label_2fecfc;
    }
    ctx->pc = 0x2FECF4u;
    {
        const bool branch_taken_0x2fecf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECF4u;
        // 0x2fecf8: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecf4) {
            ctx->pc = 0x2FED10u;
            goto label_2fed10;
        }
    }
    ctx->pc = 0x2FECFCu;
label_2fecfc:
    // 0x2fecfc: 0xc09d4d8  jal         func_275360
label_2fed00:
    if (ctx->pc == 0x2FED00u) {
        ctx->pc = 0x2FED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECFCu;
        // 0x2fed00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED04u;
        goto label_2fed04;
    }
    ctx->pc = 0x2FECFCu;
    SET_GPR_U32(ctx, 31, 0x2FED04u);
    ctx->pc = 0x2FED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECFCu;
    // 0x2fed00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FECFCu, 0x2FED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED04u;
label_2fed04:
    // 0x2fed04: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2fed08:
    if (ctx->pc == 0x2FED08u) {
        ctx->pc = 0x2FED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED04u;
        // 0x2fed08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED0Cu;
        goto label_2fed0c;
    }
    ctx->pc = 0x2FED04u;
    {
        const bool branch_taken_0x2fed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED04u;
        // 0x2fed08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed04) {
            ctx->pc = 0x2FEEB0u;
            goto label_2feeb0;
        }
    }
    ctx->pc = 0x2FED0Cu;
label_2fed0c:
    // 0x2fed0c: 0x0  nop
    ctx->pc = 0x2fed0cu;
    // NOP
label_2fed10:
    // 0x2fed10: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2fed10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2fed14:
    // 0x2fed14: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2fed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2fed18:
    // 0x2fed18: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2fed18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2fed1c:
    // 0x2fed1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2fed20:
    if (ctx->pc == 0x2FED20u) {
        ctx->pc = 0x2FED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED1Cu;
        // 0x2fed20: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED24u;
        goto label_2fed24;
    }
    ctx->pc = 0x2FED1Cu;
    {
        const bool branch_taken_0x2fed1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED1Cu;
        // 0x2fed20: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed1c) {
            ctx->pc = 0x2FED28u;
            goto label_2fed28;
        }
    }
    ctx->pc = 0x2FED24u;
label_2fed24:
    // 0x2fed24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2fed24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fed28:
    // 0x2fed28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2fed2c:
    if (ctx->pc == 0x2FED2Cu) {
        ctx->pc = 0x2FED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED28u;
        // 0x2fed2c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED30u;
        goto label_2fed30;
    }
    ctx->pc = 0x2FED28u;
    {
        const bool branch_taken_0x2fed28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED28u;
        // 0x2fed2c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed28) {
            ctx->pc = 0x2FED40u;
            goto label_2fed40;
        }
    }
    ctx->pc = 0x2FED30u;
label_2fed30:
    // 0x2fed30: 0xc09d4d8  jal         func_275360
label_2fed34:
    if (ctx->pc == 0x2FED34u) {
        ctx->pc = 0x2FED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED30u;
        // 0x2fed34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED38u;
        goto label_2fed38;
    }
    ctx->pc = 0x2FED30u;
    SET_GPR_U32(ctx, 31, 0x2FED38u);
    ctx->pc = 0x2FED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED30u;
    // 0x2fed34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FED30u, 0x2FED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED38u;
label_2fed38:
    // 0x2fed38: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2fed3c:
    if (ctx->pc == 0x2FED3Cu) {
        ctx->pc = 0x2FED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED38u;
        // 0x2fed3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED40u;
        goto label_2fed40;
    }
    ctx->pc = 0x2FED38u;
    {
        const bool branch_taken_0x2fed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED38u;
        // 0x2fed3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed38) {
            ctx->pc = 0x2FEEB0u;
            goto label_2feeb0;
        }
    }
    ctx->pc = 0x2FED40u;
label_2fed40:
    // 0x2fed40: 0xc0741a4  jal         func_1D0690
label_2fed44:
    if (ctx->pc == 0x2FED44u) {
        ctx->pc = 0x2FED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED40u;
        // 0x2fed44: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED48u;
        goto label_2fed48;
    }
    ctx->pc = 0x2FED40u;
    SET_GPR_U32(ctx, 31, 0x2FED48u);
    ctx->pc = 0x2FED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED40u;
    // 0x2fed44: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2FED40u, 0x2FED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED48u;
label_2fed48:
    // 0x2fed48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fed48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fed4c:
    // 0x2fed4c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2fed50:
    if (ctx->pc == 0x2FED50u) {
        ctx->pc = 0x2FED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED4Cu;
        // 0x2fed50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED54u;
        goto label_2fed54;
    }
    ctx->pc = 0x2FED4Cu;
    {
        const bool branch_taken_0x2fed4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED4Cu;
        // 0x2fed50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed4c) {
            ctx->pc = 0x2FED78u;
            goto label_2fed78;
        }
    }
    ctx->pc = 0x2FED54u;
label_2fed54:
    // 0x2fed54: 0xc096b00  jal         func_25AC00
label_2fed58:
    if (ctx->pc == 0x2FED58u) {
        ctx->pc = 0x2FED5Cu;
        goto label_2fed5c;
    }
    ctx->pc = 0x2FED54u;
    SET_GPR_U32(ctx, 31, 0x2FED5Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2FED54u, 0x2FED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED5Cu;
label_2fed5c:
    // 0x2fed5c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2fed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2fed60:
    // 0x2fed60: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2fed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2fed64:
    // 0x2fed64: 0x24637f80  addiu       $v1, $v1, 0x7F80
    ctx->pc = 0x2fed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32640));
label_2fed68:
    // 0x2fed68: 0x24427f60  addiu       $v0, $v0, 0x7F60
    ctx->pc = 0x2fed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32608));
label_2fed6c:
    // 0x2fed6c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2fed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_2fed70:
    // 0x2fed70: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2fed70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_2fed74:
    // 0x2fed74: 0x0  nop
    ctx->pc = 0x2fed74u;
    // NOP
label_2fed78:
    // 0x2fed78: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_2fed7c:
    if (ctx->pc == 0x2FED7Cu) {
        ctx->pc = 0x2FED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED78u;
        // 0x2fed7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED80u;
        goto label_2fed80;
    }
    ctx->pc = 0x2FED78u;
    {
        const bool branch_taken_0x2fed78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED78u;
        // 0x2fed7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed78) {
            ctx->pc = 0x2FEEA0u;
            goto label_2feea0;
        }
    }
    ctx->pc = 0x2FED80u;
label_2fed80:
    // 0x2fed80: 0xc09d4fc  jal         func_2753F0
label_2fed84:
    if (ctx->pc == 0x2FED84u) {
        ctx->pc = 0x2FED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED80u;
        // 0x2fed84: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED88u;
        goto label_2fed88;
    }
    ctx->pc = 0x2FED80u;
    SET_GPR_U32(ctx, 31, 0x2FED88u);
    ctx->pc = 0x2FED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED80u;
    // 0x2fed84: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2FED80u, 0x2FED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED88u;
label_2fed88:
    // 0x2fed88: 0x32a600ff  andi        $a2, $s5, 0xFF
    ctx->pc = 0x2fed88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2fed8c:
    // 0x2fed8c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2fed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2fed90:
    // 0x2fed90: 0xc09d524  jal         func_275490
label_2fed94:
    if (ctx->pc == 0x2FED94u) {
        ctx->pc = 0x2FED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED90u;
        // 0x2fed94: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FED98u;
        goto label_2fed98;
    }
    ctx->pc = 0x2FED90u;
    SET_GPR_U32(ctx, 31, 0x2FED98u);
    ctx->pc = 0x2FED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED90u;
    // 0x2fed94: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FED90u, 0x2FED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED98u;
label_2fed98:
    // 0x2fed98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fed98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fed9c:
    // 0x2fed9c: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_2feda0:
    if (ctx->pc == 0x2FEDA0u) {
        ctx->pc = 0x2FEDA4u;
        goto label_2feda4;
    }
    ctx->pc = 0x2FED9Cu;
    {
        const bool branch_taken_0x2fed9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fed9c) {
            ctx->pc = 0x2FEDD8u;
            goto label_2fedd8;
        }
    }
    ctx->pc = 0x2FEDA4u;
label_2feda4:
    // 0x2feda4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2feda8:
    if (ctx->pc == 0x2FEDA8u) {
        ctx->pc = 0x2FEDACu;
        goto label_2fedac;
    }
    ctx->pc = 0x2FEDA4u;
    {
        const bool branch_taken_0x2feda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feda4) {
            ctx->pc = 0x2FEDC0u;
            goto label_2fedc0;
        }
    }
    ctx->pc = 0x2FEDACu;
label_2fedac:
    // 0x2fedac: 0x8e390034  lw          $t9, 0x34($s1)
    ctx->pc = 0x2fedacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2fedb0:
    // 0x2fedb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fedb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fedb4:
    // 0x2fedb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2fedb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2fedb8:
    // 0x2fedb8: 0x320f809  jalr        $t9
label_2fedbc:
    if (ctx->pc == 0x2FEDBCu) {
        ctx->pc = 0x2FEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDB8u;
        // 0x2fedbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDC0u;
        goto label_2fedc0;
    }
    ctx->pc = 0x2FEDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEDC0u);
        ctx->pc = 0x2FEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDB8u;
        // 0x2fedbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEDB8u, 0x2FEDC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEDC0u;
label_2fedc0:
    // 0x2fedc0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2fedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2fedc4:
    // 0x2fedc4: 0xc09d4d8  jal         func_275360
label_2fedc8:
    if (ctx->pc == 0x2FEDC8u) {
        ctx->pc = 0x2FEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDC4u;
        // 0x2fedc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDCCu;
        goto label_2fedcc;
    }
    ctx->pc = 0x2FEDC4u;
    SET_GPR_U32(ctx, 31, 0x2FEDCCu);
    ctx->pc = 0x2FEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDC4u;
    // 0x2fedc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEDC4u, 0x2FEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDCCu;
label_2fedcc:
    // 0x2fedcc: 0x10000038  b           . + 4 + (0x38 << 2)
label_2fedd0:
    if (ctx->pc == 0x2FEDD0u) {
        ctx->pc = 0x2FEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDCCu;
        // 0x2fedd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDD4u;
        goto label_2fedd4;
    }
    ctx->pc = 0x2FEDCCu;
    {
        const bool branch_taken_0x2fedcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDCCu;
        // 0x2fedd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedcc) {
            ctx->pc = 0x2FEEB0u;
            goto label_2feeb0;
        }
    }
    ctx->pc = 0x2FEDD4u;
label_2fedd4:
    // 0x2fedd4: 0x0  nop
    ctx->pc = 0x2fedd4u;
    // NOP
label_2fedd8:
    // 0x2fedd8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x2fedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2feddc:
    // 0x2feddc: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2feddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2fede0:
    // 0x2fede0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2fede4:
    // 0x2fede4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2fede4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2fede8:
    // 0x2fede8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fede8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fedec:
    // 0x2fedec: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2fedecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_2fedf0:
    // 0x2fedf0: 0xc07679c  jal         func_1D9E70
label_2fedf4:
    if (ctx->pc == 0x2FEDF4u) {
        ctx->pc = 0x2FEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDF0u;
        // 0x2fedf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEDF8u;
        goto label_2fedf8;
    }
    ctx->pc = 0x2FEDF0u;
    SET_GPR_U32(ctx, 31, 0x2FEDF8u);
    ctx->pc = 0x2FEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDF0u;
    // 0x2fedf4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2FEDF0u, 0x2FEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDF8u;
label_2fedf8:
    // 0x2fedf8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2fedf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fedfc:
    // 0x2fedfc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2fedfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2fee00:
    // 0x2fee00: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2fee00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2fee04:
    // 0x2fee04: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2fee04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fee08:
    // 0x2fee08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fee0c:
    // 0x2fee0c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2fee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2fee10:
    // 0x2fee10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fee10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fee14:
    // 0x2fee14: 0xc096b38  jal         func_25ACE0
label_2fee18:
    if (ctx->pc == 0x2FEE18u) {
        ctx->pc = 0x2FEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE14u;
        // 0x2fee18: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE1Cu;
        goto label_2fee1c;
    }
    ctx->pc = 0x2FEE14u;
    SET_GPR_U32(ctx, 31, 0x2FEE1Cu);
    ctx->pc = 0x2FEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE14u;
    // 0x2fee18: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2FEE14u, 0x2FEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE1Cu;
label_2fee1c:
    // 0x2fee1c: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x2fee1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2fee20:
    // 0x2fee20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fee24:
    // 0x2fee24: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2fee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2fee28:
    // 0x2fee28: 0xa2230050  sb          $v1, 0x50($s1)
    ctx->pc = 0x2fee28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 3));
label_2fee2c:
    // 0x2fee2c: 0xa620005a  sh          $zero, 0x5A($s1)
    ctx->pc = 0x2fee2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 90), (uint16_t)GPR_U32(ctx, 0));
label_2fee30:
    // 0x2fee30: 0xa6200058  sh          $zero, 0x58($s1)
    ctx->pc = 0x2fee30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 88), (uint16_t)GPR_U32(ctx, 0));
label_2fee34:
    // 0x2fee34: 0xa6200056  sh          $zero, 0x56($s1)
    ctx->pc = 0x2fee34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 0));
label_2fee38:
    // 0x2fee38: 0xa2200051  sb          $zero, 0x51($s1)
    ctx->pc = 0x2fee38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
label_2fee3c:
    // 0x2fee3c: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x2fee3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_2fee40:
    // 0x2fee40: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x2fee40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
label_2fee44:
    // 0x2fee44: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2fee44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2fee48:
    // 0x2fee48: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x2fee48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
label_2fee4c:
    // 0x2fee4c: 0xa23400bc  sb          $s4, 0xBC($s1)
    ctx->pc = 0x2fee4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 188), (uint8_t)GPR_U32(ctx, 20));
label_2fee50:
    // 0x2fee50: 0xae3200b0  sw          $s2, 0xB0($s1)
    ctx->pc = 0x2fee50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 18));
label_2fee54:
    // 0x2fee54: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2fee54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_2fee58:
    // 0x2fee58: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2fee58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_2fee5c:
    // 0x2fee5c: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x2fee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_2fee60:
    // 0x2fee60: 0xa23500bd  sb          $s5, 0xBD($s1)
    ctx->pc = 0x2fee60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 189), (uint8_t)GPR_U32(ctx, 21));
label_2fee64:
    // 0x2fee64: 0x92450004  lbu         $a1, 0x4($s2)
    ctx->pc = 0x2fee64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_2fee68:
    // 0x2fee68: 0x92460005  lbu         $a2, 0x5($s2)
    ctx->pc = 0x2fee68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_2fee6c:
    // 0x2fee6c: 0xc074350  jal         func_1D0D40
label_2fee70:
    if (ctx->pc == 0x2FEE70u) {
        ctx->pc = 0x2FEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE6Cu;
        // 0x2fee70: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE74u;
        goto label_2fee74;
    }
    ctx->pc = 0x2FEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE74u);
    ctx->pc = 0x2FEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE6Cu;
    // 0x2fee70: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2FEE6Cu, 0x2FEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE74u;
label_2fee74:
    // 0x2fee74: 0x92450006  lbu         $a1, 0x6($s2)
    ctx->pc = 0x2fee74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2fee78:
    // 0x2fee78: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x2fee78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_2fee7c:
    // 0x2fee7c: 0xc074378  jal         func_1D0DE0
label_2fee80:
    if (ctx->pc == 0x2FEE80u) {
        ctx->pc = 0x2FEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE7Cu;
        // 0x2fee80: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE84u;
        goto label_2fee84;
    }
    ctx->pc = 0x2FEE7Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE84u);
    ctx->pc = 0x2FEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE7Cu;
    // 0x2fee80: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2FEE7Cu, 0x2FEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE84u;
label_2fee84:
    // 0x2fee84: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2fee84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2fee88:
    // 0x2fee88: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2fee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2fee8c:
    // 0x2fee8c: 0xc09d4d8  jal         func_275360
label_2fee90:
    if (ctx->pc == 0x2FEE90u) {
        ctx->pc = 0x2FEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE8Cu;
        // 0x2fee90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE94u;
        goto label_2fee94;
    }
    ctx->pc = 0x2FEE8Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE94u);
    ctx->pc = 0x2FEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE8Cu;
    // 0x2fee90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEE8Cu, 0x2FEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE94u;
label_2fee94:
    // 0x2fee94: 0x10000006  b           . + 4 + (0x6 << 2)
label_2fee98:
    if (ctx->pc == 0x2FEE98u) {
        ctx->pc = 0x2FEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE94u;
        // 0x2fee98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEE9Cu;
        goto label_2fee9c;
    }
    ctx->pc = 0x2FEE94u;
    {
        const bool branch_taken_0x2fee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE94u;
        // 0x2fee98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee94) {
            ctx->pc = 0x2FEEB0u;
            goto label_2feeb0;
        }
    }
    ctx->pc = 0x2FEE9Cu;
label_2fee9c:
    // 0x2fee9c: 0x0  nop
    ctx->pc = 0x2fee9cu;
    // NOP
label_2feea0:
    // 0x2feea0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2feea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2feea4:
    // 0x2feea4: 0xc09d4d8  jal         func_275360
label_2feea8:
    if (ctx->pc == 0x2FEEA8u) {
        ctx->pc = 0x2FEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEA4u;
        // 0x2feea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEACu;
        goto label_2feeac;
    }
    ctx->pc = 0x2FEEA4u;
    SET_GPR_U32(ctx, 31, 0x2FEEACu);
    ctx->pc = 0x2FEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEA4u;
    // 0x2feea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEEA4u, 0x2FEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEACu;
label_2feeac:
    // 0x2feeac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2feeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2feeb0:
    // 0x2feeb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2feeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2feeb4:
    // 0x2feeb4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2feeb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2feeb8:
    // 0x2feeb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2feeb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2feebc:
    // 0x2feebc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2feebcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2feec0:
    // 0x2feec0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2feec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2feec4:
    // 0x2feec4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2feec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2feec8:
    // 0x2feec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2feec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2feecc:
    // 0x2feecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2feeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2feed0:
    // 0x2feed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2feed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2feed4:
    // 0x2feed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2feed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2feed8:
    // 0x2feed8: 0x3e00008  jr          $ra
label_2feedc:
    if (ctx->pc == 0x2FEEDCu) {
        ctx->pc = 0x2FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEED8u;
        // 0x2feedc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEEE0u;
        goto label_fallthrough_0x2feed8;
    }
    ctx->pc = 0x2FEED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEED8u;
        // 0x2feedc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2feed8:
    ctx->pc = 0x2FEEE0u;
}
