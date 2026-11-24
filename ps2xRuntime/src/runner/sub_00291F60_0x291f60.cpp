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

// Function: sub_00291F60
// Address: 0x291f60 - 0x292048
void sub_00291F60_0x291f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291F60_0x291f60");
#endif

    switch (ctx->pc) {
        case 0x291f60u: goto label_291f60;
        case 0x291f64u: goto label_291f64;
        case 0x291f68u: goto label_291f68;
        case 0x291f6cu: goto label_291f6c;
        case 0x291f70u: goto label_291f70;
        case 0x291f74u: goto label_291f74;
        case 0x291f78u: goto label_291f78;
        case 0x291f7cu: goto label_291f7c;
        case 0x291f80u: goto label_291f80;
        case 0x291f84u: goto label_291f84;
        case 0x291f88u: goto label_291f88;
        case 0x291f8cu: goto label_291f8c;
        case 0x291f90u: goto label_291f90;
        case 0x291f94u: goto label_291f94;
        case 0x291f98u: goto label_291f98;
        case 0x291f9cu: goto label_291f9c;
        case 0x291fa0u: goto label_291fa0;
        case 0x291fa4u: goto label_291fa4;
        case 0x291fa8u: goto label_291fa8;
        case 0x291facu: goto label_291fac;
        case 0x291fb0u: goto label_291fb0;
        case 0x291fb4u: goto label_291fb4;
        case 0x291fb8u: goto label_291fb8;
        case 0x291fbcu: goto label_291fbc;
        case 0x291fc0u: goto label_291fc0;
        case 0x291fc4u: goto label_291fc4;
        case 0x291fc8u: goto label_291fc8;
        case 0x291fccu: goto label_291fcc;
        case 0x291fd0u: goto label_291fd0;
        case 0x291fd4u: goto label_291fd4;
        case 0x291fd8u: goto label_291fd8;
        case 0x291fdcu: goto label_291fdc;
        case 0x291fe0u: goto label_291fe0;
        case 0x291fe4u: goto label_291fe4;
        case 0x291fe8u: goto label_291fe8;
        case 0x291fecu: goto label_291fec;
        case 0x291ff0u: goto label_291ff0;
        case 0x291ff4u: goto label_291ff4;
        case 0x291ff8u: goto label_291ff8;
        case 0x291ffcu: goto label_291ffc;
        case 0x292000u: goto label_292000;
        case 0x292004u: goto label_292004;
        case 0x292008u: goto label_292008;
        case 0x29200cu: goto label_29200c;
        case 0x292010u: goto label_292010;
        case 0x292014u: goto label_292014;
        case 0x292018u: goto label_292018;
        case 0x29201cu: goto label_29201c;
        case 0x292020u: goto label_292020;
        case 0x292024u: goto label_292024;
        case 0x292028u: goto label_292028;
        case 0x29202cu: goto label_29202c;
        case 0x292030u: goto label_292030;
        case 0x292034u: goto label_292034;
        case 0x292038u: goto label_292038;
        case 0x29203cu: goto label_29203c;
        case 0x292040u: goto label_292040;
        case 0x292044u: goto label_292044;
        default: break;
    }

    ctx->pc = 0x291f60u;

label_291f60:
    // 0x291f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_291f64:
    // 0x291f64: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_291f68:
    // 0x291f68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x291f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_291f6c:
    // 0x291f6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_291f70:
    // 0x291f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_291f74:
    // 0x291f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_291f78:
    // 0x291f78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x291f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_291f7c:
    // 0x291f7c: 0x90862b0b  lbu         $a2, 0x2B0B($a0)
    ctx->pc = 0x291f7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11019)));
label_291f80:
    // 0x291f80: 0x10c3002b  beq         $a2, $v1, . + 4 + (0x2B << 2)
label_291f84:
    if (ctx->pc == 0x291F84u) {
        ctx->pc = 0x291F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F80u;
        // 0x291f84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291F88u;
        goto label_291f88;
    }
    ctx->pc = 0x291F80u;
    {
        const bool branch_taken_0x291f80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x291F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F80u;
        // 0x291f84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f80) {
            ctx->pc = 0x292030u;
            goto label_292030;
        }
    }
    ctx->pc = 0x291F88u;
label_291f88:
    // 0x291f88: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_291f8c:
    if (ctx->pc == 0x291F8Cu) {
        ctx->pc = 0x291F90u;
        goto label_291f90;
    }
    ctx->pc = 0x291F88u;
    {
        const bool branch_taken_0x291f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x291f88) {
            ctx->pc = 0x291FC0u;
            goto label_291fc0;
        }
    }
    ctx->pc = 0x291F90u;
label_291f90:
    // 0x291f90: 0x92232b0c  lbu         $v1, 0x2B0C($s1)
    ctx->pc = 0x291f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11020)));
label_291f94:
    // 0x291f94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x291f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_291f98:
    // 0x291f98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_291f9c:
    if (ctx->pc == 0x291F9Cu) {
        ctx->pc = 0x291FA0u;
        goto label_291fa0;
    }
    ctx->pc = 0x291F98u;
    {
        const bool branch_taken_0x291f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f98) {
            ctx->pc = 0x291FA8u;
            goto label_291fa8;
        }
    }
    ctx->pc = 0x291FA0u;
label_291fa0:
    // 0x291fa0: 0xc097828  jal         func_25E0A0
label_291fa4:
    if (ctx->pc == 0x291FA4u) {
        ctx->pc = 0x291FA8u;
        goto label_291fa8;
    }
    ctx->pc = 0x291FA0u;
    SET_GPR_U32(ctx, 31, 0x291FA8u);
    ctx->pc = 0x25E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0A0u, 0x291FA0u, 0x291FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FA8u;
label_291fa8:
    // 0x291fa8: 0xa2202b0b  sb          $zero, 0x2B0B($s1)
    ctx->pc = 0x291fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11019), (uint8_t)GPR_U32(ctx, 0));
label_291fac:
    // 0x291fac: 0xa2202b0c  sb          $zero, 0x2B0C($s1)
    ctx->pc = 0x291facu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11020), (uint8_t)GPR_U32(ctx, 0));
label_291fb0:
    // 0x291fb0: 0xa6202b10  sh          $zero, 0x2B10($s1)
    ctx->pc = 0x291fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11024), (uint16_t)GPR_U32(ctx, 0));
label_291fb4:
    // 0x291fb4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_291fb8:
    if (ctx->pc == 0x291FB8u) {
        ctx->pc = 0x291FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FB4u;
        // 0x291fb8: 0xa2202b0e  sb          $zero, 0x2B0E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11022), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291FBCu;
        goto label_291fbc;
    }
    ctx->pc = 0x291FB4u;
    {
        const bool branch_taken_0x291fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FB4u;
        // 0x291fb8: 0xa2202b0e  sb          $zero, 0x2B0E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11022), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fb4) {
            ctx->pc = 0x292030u;
            goto label_292030;
        }
    }
    ctx->pc = 0x291FBCu;
label_291fbc:
    // 0x291fbc: 0x0  nop
    ctx->pc = 0x291fbcu;
    // NOP
label_291fc0:
    // 0x291fc0: 0x321200ff  andi        $s2, $s0, 0xFF
    ctx->pc = 0x291fc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_291fc4:
    // 0x291fc4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x291fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_291fc8:
    // 0x291fc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_291fcc:
    if (ctx->pc == 0x291FCCu) {
        ctx->pc = 0x291FD0u;
        goto label_291fd0;
    }
    ctx->pc = 0x291FC8u;
    {
        const bool branch_taken_0x291fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291fc8) {
            ctx->pc = 0x291FD8u;
            goto label_291fd8;
        }
    }
    ctx->pc = 0x291FD0u;
label_291fd0:
    // 0x291fd0: 0xc097824  jal         func_25E090
label_291fd4:
    if (ctx->pc == 0x291FD4u) {
        ctx->pc = 0x291FD8u;
        goto label_291fd8;
    }
    ctx->pc = 0x291FD0u;
    SET_GPR_U32(ctx, 31, 0x291FD8u);
    ctx->pc = 0x25E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E090u, 0x291FD0u, 0x291FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FD8u;
label_291fd8:
    // 0x291fd8: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x291fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_291fdc:
    // 0x291fdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_291fe0:
    if (ctx->pc == 0x291FE0u) {
        ctx->pc = 0x291FE4u;
        goto label_291fe4;
    }
    ctx->pc = 0x291FDCu;
    {
        const bool branch_taken_0x291fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291fdc) {
            ctx->pc = 0x292010u;
            goto label_292010;
        }
    }
    ctx->pc = 0x291FE4u;
label_291fe4:
    // 0x291fe4: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x291fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_291fe8:
    // 0x291fe8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x291fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_291fec:
    // 0x291fec: 0x320f809  jalr        $t9
label_291ff0:
    if (ctx->pc == 0x291FF0u) {
        ctx->pc = 0x291FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FECu;
        // 0x291ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291FF4u;
        goto label_291ff4;
    }
    ctx->pc = 0x291FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291FF4u);
        ctx->pc = 0x291FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FECu;
        // 0x291ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291FECu, 0x291FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291FF4u;
label_291ff4:
    // 0x291ff4: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x291ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_291ff8:
    // 0x291ff8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x291ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_291ffc:
    // 0x291ffc: 0x320f809  jalr        $t9
label_292000:
    if (ctx->pc == 0x292000u) {
        ctx->pc = 0x292000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FFCu;
        // 0x292000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292004u;
        goto label_292004;
    }
    ctx->pc = 0x291FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x292004u);
        ctx->pc = 0x292000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FFCu;
        // 0x292000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291FFCu, 0x292004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292004u;
label_292004:
    // 0x292004: 0xc096c4c  jal         func_25B130
label_292008:
    if (ctx->pc == 0x292008u) {
        ctx->pc = 0x292008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292004u;
        // 0x292008: 0x8e242978  lw          $a0, 0x2978($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29200Cu;
        goto label_29200c;
    }
    ctx->pc = 0x292004u;
    SET_GPR_U32(ctx, 31, 0x29200Cu);
    ctx->pc = 0x292008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292004u;
    // 0x292008: 0x8e242978  lw          $a0, 0x2978($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x292004u, 0x29200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29200Cu;
label_29200c:
    // 0x29200c: 0x0  nop
    ctx->pc = 0x29200cu;
    // NOP
label_292010:
    // 0x292010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292014:
    // 0x292014: 0xa2222b0b  sb          $v0, 0x2B0B($s1)
    ctx->pc = 0x292014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11019), (uint8_t)GPR_U32(ctx, 2));
label_292018:
    // 0x292018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29201c:
    // 0x29201c: 0xa2302b0c  sb          $s0, 0x2B0C($s1)
    ctx->pc = 0x29201cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11020), (uint8_t)GPR_U32(ctx, 16));
label_292020:
    // 0x292020: 0xa6202b10  sh          $zero, 0x2B10($s1)
    ctx->pc = 0x292020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11024), (uint16_t)GPR_U32(ctx, 0));
label_292024:
    // 0x292024: 0xc0a4814  jal         func_292050
label_292028:
    if (ctx->pc == 0x292028u) {
        ctx->pc = 0x292028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292024u;
        // 0x292028: 0xa2202b0e  sb          $zero, 0x2B0E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11022), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29202Cu;
        goto label_29202c;
    }
    ctx->pc = 0x292024u;
    SET_GPR_U32(ctx, 31, 0x29202Cu);
    ctx->pc = 0x292028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292024u;
    // 0x292028: 0xa2202b0e  sb          $zero, 0x2B0E($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11022), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292050u, 0x292024u, 0x29202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29202Cu;
label_29202c:
    // 0x29202c: 0xa6202b10  sh          $zero, 0x2B10($s1)
    ctx->pc = 0x29202cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11024), (uint16_t)GPR_U32(ctx, 0));
label_292030:
    // 0x292030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x292030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_292034:
    // 0x292034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292038:
    // 0x292038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29203c:
    // 0x29203c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29203cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_292040:
    // 0x292040: 0x3e00008  jr          $ra
label_292044:
    if (ctx->pc == 0x292044u) {
        ctx->pc = 0x292044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292040u;
        // 0x292044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292048u;
        goto label_fallthrough_0x292040;
    }
    ctx->pc = 0x292040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292040u;
        // 0x292044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x292040:
    ctx->pc = 0x292048u;
}
