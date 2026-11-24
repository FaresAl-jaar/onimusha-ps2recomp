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

// Function: sub_0039EC30
// Address: 0x39ec30 - 0x39f0d0
void sub_0039EC30_0x39ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EC30_0x39ec30");
#endif

    switch (ctx->pc) {
        case 0x39ec70u: goto label_39ec70;
        case 0x39ec98u: goto label_39ec98;
        case 0x39ece4u: goto label_39ece4;
        case 0x39ecf4u: goto label_39ecf4;
        case 0x39ed0cu: goto label_39ed0c;
        case 0x39eddcu: goto label_39eddc;
        case 0x39edf4u: goto label_39edf4;
        case 0x39ee08u: goto label_39ee08;
        case 0x39ee30u: goto label_39ee30;
        case 0x39ee40u: goto label_39ee40;
        case 0x39ee50u: goto label_39ee50;
        case 0x39ee78u: goto label_39ee78;
        case 0x39eea0u: goto label_39eea0;
        case 0x39eeb0u: goto label_39eeb0;
        case 0x39eee0u: goto label_39eee0;
        case 0x39ef0cu: goto label_39ef0c;
        case 0x39efacu: goto label_39efac;
        case 0x39efc4u: goto label_39efc4;
        case 0x39efe4u: goto label_39efe4;
        case 0x39eff8u: goto label_39eff8;
        case 0x39f0a0u: goto label_39f0a0;
        default: break;
    }

    ctx->pc = 0x39ec30u;

    // 0x39ec30: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x39ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x39ec34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x39ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x39ec38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x39ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x39ec3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x39ec40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x39ec44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39ec48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39ec4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39ec4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ec50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39ec54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39ec58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39ec5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39ec5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ec60: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EC60u;
    {
        const bool branch_taken_0x39ec60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC60u;
        // 0x39ec64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec60) {
            ctx->pc = 0x39EC78u;
            goto label_39ec78;
        }
    }
    ctx->pc = 0x39EC68u;
    // 0x39ec68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39EC68u;
    SET_GPR_U32(ctx, 31, 0x39EC70u);
    ctx->pc = 0x39EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EC68u;
    // 0x39ec6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39EC68u, 0x39EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC70u;
label_39ec70:
    // 0x39ec70: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x39EC70u;
    {
        const bool branch_taken_0x39ec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ec70) {
            ctx->pc = 0x39F0A0u;
            goto label_39f0a0;
        }
    }
    ctx->pc = 0x39EC78u;
label_39ec78:
    // 0x39ec78: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39EC78u;
    {
        const bool branch_taken_0x39ec78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ec78) {
            ctx->pc = 0x39ECA0u;
            goto label_39eca0;
        }
    }
    ctx->pc = 0x39EC80u;
    // 0x39ec80: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x39ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x39ec84: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39ec84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39ec88: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EC88u;
    {
        const bool branch_taken_0x39ec88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC88u;
        // 0x39ec8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec88) {
            ctx->pc = 0x39ECA0u;
            goto label_39eca0;
        }
    }
    ctx->pc = 0x39EC90u;
    // 0x39ec90: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39EC90u;
    SET_GPR_U32(ctx, 31, 0x39EC98u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39EC90u, 0x39EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC98u;
label_39ec98:
    // 0x39ec98: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x39EC98u;
    {
        const bool branch_taken_0x39ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ec98) {
            ctx->pc = 0x39F0A0u;
            goto label_39f0a0;
        }
    }
    ctx->pc = 0x39ECA0u;
label_39eca0:
    // 0x39eca0: 0x92a40521  lbu         $a0, 0x521($s5)
    ctx->pc = 0x39eca0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1313)));
    // 0x39eca4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39eca8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x39ECA8u;
    {
        const bool branch_taken_0x39eca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x39ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECA8u;
        // 0x39ecac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eca8) {
            ctx->pc = 0x39ED40u;
            goto label_39ed40;
        }
    }
    ctx->pc = 0x39ECB0u;
    // 0x39ecb0: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x39ECB0u;
    {
        const bool branch_taken_0x39ecb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ecb0) {
            ctx->pc = 0x39ED20u;
            goto label_39ed20;
        }
    }
    ctx->pc = 0x39ECB8u;
    // 0x39ecb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39ECB8u;
    {
        const bool branch_taken_0x39ecb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ecb8) {
            ctx->pc = 0x39ECC8u;
            goto label_39ecc8;
        }
    }
    ctx->pc = 0x39ECC0u;
    // 0x39ecc0: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x39ECC0u;
    {
        const bool branch_taken_0x39ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ecc0) {
            ctx->pc = 0x39F0A0u;
            goto label_39f0a0;
        }
    }
    ctx->pc = 0x39ECC8u;
label_39ecc8:
    // 0x39ecc8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x39ECC8u;
    {
        const bool branch_taken_0x39ecc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ecc8) {
            ctx->pc = 0x39ED00u;
            goto label_39ed00;
        }
    }
    ctx->pc = 0x39ECD0u;
    // 0x39ecd0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x39ecd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x39ecd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ecd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ecd8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x39ecdc: 0xc096d04  jal         func_25B410
    ctx->pc = 0x39ECDCu;
    SET_GPR_U32(ctx, 31, 0x39ECE4u);
    ctx->pc = 0x39ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ECDCu;
    // 0x39ece0: 0x7ea20020  sq          $v0, 0x20($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x39ECDCu, 0x39ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ECE4u;
label_39ece4:
    // 0x39ece4: 0x92a4053b  lbu         $a0, 0x53B($s5)
    ctx->pc = 0x39ece4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1339)));
    // 0x39ece8: 0x92a5052e  lbu         $a1, 0x52E($s5)
    ctx->pc = 0x39ece8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x39ecec: 0xc0aa2d4  jal         func_2A8B50
    ctx->pc = 0x39ECECu;
    SET_GPR_U32(ctx, 31, 0x39ECF4u);
    ctx->pc = 0x39ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ECECu;
    // 0x39ecf0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B50u, 0x39ECECu, 0x39ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ECF4u;
label_39ecf4:
    // 0x39ecf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39ECF4u;
    {
        const bool branch_taken_0x39ecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECF4u;
        // 0x39ecf8: 0xaea20550  sw          $v0, 0x550($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ecf4) {
            ctx->pc = 0x39ED10u;
            goto label_39ed10;
        }
    }
    ctx->pc = 0x39ECFCu;
    // 0x39ecfc: 0x0  nop
    ctx->pc = 0x39ecfcu;
    // NOP
label_39ed00:
    // 0x39ed00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed04: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39ED04u;
    SET_GPR_U32(ctx, 31, 0x39ED0Cu);
    ctx->pc = 0x39ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ED04u;
    // 0x39ed08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39ED04u, 0x39ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ED0Cu;
label_39ed0c:
    // 0x39ed0c: 0x0  nop
    ctx->pc = 0x39ed0cu;
    // NOP
label_39ed10:
    // 0x39ed10: 0x92a30521  lbu         $v1, 0x521($s5)
    ctx->pc = 0x39ed10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1313)));
    // 0x39ed14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39ed18: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x39ED18u;
    {
        const bool branch_taken_0x39ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED18u;
        // 0x39ed1c: 0xa2a30521  sb          $v1, 0x521($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed18) {
            ctx->pc = 0x39F0A0u;
            goto label_39f0a0;
        }
    }
    ctx->pc = 0x39ED20u;
label_39ed20:
    // 0x39ed20: 0x86a20526  lh          $v0, 0x526($s5)
    ctx->pc = 0x39ed20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1318)));
    // 0x39ed24: 0xa6a20512  sh          $v0, 0x512($s5)
    ctx->pc = 0x39ed24u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ed28: 0xa6a00510  sh          $zero, 0x510($s5)
    ctx->pc = 0x39ed28u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ed2c: 0xa2a00514  sb          $zero, 0x514($s5)
    ctx->pc = 0x39ed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ed30: 0xa2a00515  sb          $zero, 0x515($s5)
    ctx->pc = 0x39ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ed34: 0x92a20521  lbu         $v0, 0x521($s5)
    ctx->pc = 0x39ed34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1313)));
    // 0x39ed38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39ed3c: 0xa2a20521  sb          $v0, 0x521($s5)
    ctx->pc = 0x39ed3cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1313), (uint8_t)GPR_U32(ctx, 2));
label_39ed40:
    // 0x39ed40: 0x86a30510  lh          $v1, 0x510($s5)
    ctx->pc = 0x39ed40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x39ed44: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x39ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x39ed48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39ED48u;
    {
        const bool branch_taken_0x39ed48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED48u;
        // 0x39ed4c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed48) {
            ctx->pc = 0x39ED58u;
            goto label_39ed58;
        }
    }
    ctx->pc = 0x39ED50u;
    // 0x39ed50: 0xa2a20560  sb          $v0, 0x560($s5)
    ctx->pc = 0x39ed50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1376), (uint8_t)GPR_U32(ctx, 2));
    // 0x39ed54: 0x0  nop
    ctx->pc = 0x39ed54u;
    // NOP
label_39ed58:
    // 0x39ed58: 0x92a20560  lbu         $v0, 0x560($s5)
    ctx->pc = 0x39ed58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1376)));
    // 0x39ed5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39ED5Cu;
    {
        const bool branch_taken_0x39ed5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ed5c) {
            ctx->pc = 0x39ED80u;
            goto label_39ed80;
        }
    }
    ctx->pc = 0x39ED64u;
    // 0x39ed64: 0x86a2055c  lh          $v0, 0x55C($s5)
    ctx->pc = 0x39ed64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1372)));
    // 0x39ed68: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x39ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x39ed6c: 0xa6a2055c  sh          $v0, 0x55C($s5)
    ctx->pc = 0x39ed6cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1372), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ed70: 0x92a20560  lbu         $v0, 0x560($s5)
    ctx->pc = 0x39ed70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1376)));
    // 0x39ed74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39ed78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39ED78u;
    {
        const bool branch_taken_0x39ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED78u;
        // 0x39ed7c: 0xa2a20560  sb          $v0, 0x560($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1376), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed78) {
            ctx->pc = 0x39ED88u;
            goto label_39ed88;
        }
    }
    ctx->pc = 0x39ED80u;
label_39ed80:
    // 0x39ed80: 0xa6a0055c  sh          $zero, 0x55C($s5)
    ctx->pc = 0x39ed80u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1372), (uint16_t)GPR_U32(ctx, 0));
    // 0x39ed84: 0x0  nop
    ctx->pc = 0x39ed84u;
    // NOP
label_39ed88:
    // 0x39ed88: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x39ed88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x39ed8c: 0x86a2055c  lh          $v0, 0x55C($s5)
    ctx->pc = 0x39ed8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1372)));
    // 0x39ed90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ed94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x39ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x39ed98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39ed98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x39ed9c: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x39ed9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x39eda0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EDA0u;
    {
        const bool branch_taken_0x39eda0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDA0u;
        // 0x39eda4: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eda0) {
            ctx->pc = 0x39EDB0u;
            goto label_39edb0;
        }
    }
    ctx->pc = 0x39EDA8u;
    // 0x39eda8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39EDA8u;
    {
        const bool branch_taken_0x39eda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDA8u;
        // 0x39edac: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eda8) {
            ctx->pc = 0x39EDC0u;
            goto label_39edc0;
        }
    }
    ctx->pc = 0x39EDB0u;
label_39edb0:
    // 0x39edb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EDB0u;
    {
        const bool branch_taken_0x39edb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39edb0) {
            ctx->pc = 0x39EDC0u;
            goto label_39edc0;
        }
    }
    ctx->pc = 0x39EDB8u;
    // 0x39edb8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x39EDB8u;
    {
        const bool branch_taken_0x39edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDB8u;
        // 0x39edbc: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39edb8) {
            ctx->pc = 0x39EDC0u;
            goto label_39edc0;
        }
    }
    ctx->pc = 0x39EDC0u;
label_39edc0:
    // 0x39edc0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x39edc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x39edc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39edc8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x39edc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x39edcc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x39edccu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x39edd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39edd4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x39EDD4u;
    SET_GPR_U32(ctx, 31, 0x39EDDCu);
    ctx->pc = 0x39EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EDD4u;
    // 0x39edd8: 0x7ea20020  sq          $v0, 0x20($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x39EDD4u, 0x39EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EDDCu;
label_39eddc:
    // 0x39eddc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x39eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x39ede0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x39ede4: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x39ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x39ede8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x39ede8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39edec: 0xc097384  jal         func_25CE10
    ctx->pc = 0x39EDECu;
    SET_GPR_U32(ctx, 31, 0x39EDF4u);
    ctx->pc = 0x39EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EDECu;
    // 0x39edf0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x39EDECu, 0x39EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EDF4u;
label_39edf4:
    // 0x39edf4: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x39edf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x39edf8: 0x27a5019c  addiu       $a1, $sp, 0x19C
    ctx->pc = 0x39edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x39edfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x39edfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee00: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x39EE00u;
    SET_GPR_U32(ctx, 31, 0x39EE08u);
    ctx->pc = 0x39EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE00u;
    // 0x39ee04: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x39EE00u, 0x39EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE08u;
label_39ee08:
    // 0x39ee08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EE08u;
    {
        const bool branch_taken_0x39ee08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ee08) {
            ctx->pc = 0x39EE20u;
            goto label_39ee20;
        }
    }
    ctx->pc = 0x39EE10u;
    // 0x39ee10: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x39ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39ee14: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x39ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x39ee18: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x39ee18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x39ee1c: 0x0  nop
    ctx->pc = 0x39ee1cu;
    // NOP
label_39ee20:
    // 0x39ee20: 0x8ea60550  lw          $a2, 0x550($s5)
    ctx->pc = 0x39ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1360)));
    // 0x39ee24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39ee24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee28: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x39EE28u;
    SET_GPR_U32(ctx, 31, 0x39EE30u);
    ctx->pc = 0x39EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE28u;
    // 0x39ee2c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x39EE28u, 0x39EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE30u;
label_39ee30:
    // 0x39ee30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EE30u;
    {
        const bool branch_taken_0x39ee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE30u;
        // 0x39ee34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee30) {
            ctx->pc = 0x39EE40u;
            goto label_39ee40;
        }
    }
    ctx->pc = 0x39EE38u;
    // 0x39ee38: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39EE38u;
    SET_GPR_U32(ctx, 31, 0x39EE40u);
    ctx->pc = 0x39EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE38u;
    // 0x39ee3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39EE38u, 0x39EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE40u;
label_39ee40:
    // 0x39ee40: 0x8ea60554  lw          $a2, 0x554($s5)
    ctx->pc = 0x39ee40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1364)));
    // 0x39ee44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee48: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x39EE48u;
    SET_GPR_U32(ctx, 31, 0x39EE50u);
    ctx->pc = 0x39EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE48u;
    // 0x39ee4c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x39EE48u, 0x39EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE50u;
label_39ee50:
    // 0x39ee50: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x39ee50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x39ee54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39ee58: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39EE58u;
    {
        const bool branch_taken_0x39ee58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ee58) {
            ctx->pc = 0x39EE64u;
            goto label_39ee64;
        }
    }
    ctx->pc = 0x39EE60u;
    // 0x39ee60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ee64:
    // 0x39ee64: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x39ee64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x39ee68: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x39ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x39ee6c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x39ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x39ee70: 0xc097080  jal         func_25C200
    ctx->pc = 0x39EE70u;
    SET_GPR_U32(ctx, 31, 0x39EE78u);
    ctx->pc = 0x39EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE70u;
    // 0x39ee74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x39EE70u, 0x39EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE78u;
label_39ee78:
    // 0x39ee78: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x39ee78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee7c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x39ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x39ee80: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x39ee80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x39ee84: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x39EE84u;
    {
        const bool branch_taken_0x39ee84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE84u;
        // 0x39ee88: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee84) {
            ctx->pc = 0x39EF88u;
            goto label_39ef88;
        }
    }
    ctx->pc = 0x39EE8Cu;
    // 0x39ee8c: 0x10943c  dsll32      $s2, $s0, 16
    ctx->pc = 0x39ee8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 16));
    // 0x39ee90: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x39ee90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x39ee94: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x39ee94u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x39ee98: 0x2651f000  addiu       $s1, $s2, -0x1000
    ctx->pc = 0x39ee98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963200));
    // 0x39ee9c: 0x26501000  addiu       $s0, $s2, 0x1000
    ctx->pc = 0x39ee9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4096));
label_39eea0:
    // 0x39eea0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39eea4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39eea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eea8: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x39EEA8u;
    SET_GPR_U32(ctx, 31, 0x39EEB0u);
    ctx->pc = 0x39EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EEA8u;
    // 0x39eeac: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x39EEA8u, 0x39EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EEB0u;
label_39eeb0:
    // 0x39eeb0: 0x3c03480d  lui         $v1, 0x480D
    ctx->pc = 0x39eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18445 << 16));
    // 0x39eeb4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x39eeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x39eeb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39eeb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39eebc: 0x0  nop
    ctx->pc = 0x39eebcu;
    // NOP
    // 0x39eec0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39eec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39eec4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x39EEC4u;
    {
        const bool branch_taken_0x39eec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39eec4) {
            ctx->pc = 0x39EF78u;
            goto label_39ef78;
        }
    }
    ctx->pc = 0x39EECCu;
    // 0x39eecc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39eed0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x39eed4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x39eed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eed8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39EED8u;
    SET_GPR_U32(ctx, 31, 0x39EEE0u);
    ctx->pc = 0x39EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EED8u;
    // 0x39eedc: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39EED8u, 0x39EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EEE0u;
label_39eee0:
    // 0x39eee0: 0x2a410801  slti        $at, $s2, 0x801
    ctx->pc = 0x39eee0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x39eee4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EEE4u;
    {
        const bool branch_taken_0x39eee4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEE4u;
        // 0x39eee8: 0x2a41f800  slti        $at, $s2, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eee4) {
            ctx->pc = 0x39EEF4u;
            goto label_39eef4;
        }
    }
    ctx->pc = 0x39EEECu;
    // 0x39eeec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39EEECu;
    {
        const bool branch_taken_0x39eeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEECu;
        // 0x39eef0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eeec) {
            ctx->pc = 0x39EF04u;
            goto label_39ef04;
        }
    }
    ctx->pc = 0x39EEF4u;
label_39eef4:
    // 0x39eef4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EEF4u;
    {
        const bool branch_taken_0x39eef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEF4u;
        // 0x39eef8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eef4) {
            ctx->pc = 0x39EF04u;
            goto label_39ef04;
        }
    }
    ctx->pc = 0x39EEFCu;
    // 0x39eefc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x39EEFCu;
    {
        const bool branch_taken_0x39eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEFCu;
        // 0x39ef00: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eefc) {
            ctx->pc = 0x39EF04u;
            goto label_39ef04;
        }
    }
    ctx->pc = 0x39EF04u;
label_39ef04:
    // 0x39ef04: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39EF04u;
    SET_GPR_U32(ctx, 31, 0x39EF0Cu);
    ctx->pc = 0x39EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EF04u;
    // 0x39ef08: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39EF04u, 0x39EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EF0Cu;
label_39ef0c:
    // 0x39ef0c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x39ef0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x39ef10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x39ef10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x39ef14: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x39ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x39ef18: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x39ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x39ef1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x39ef1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x39ef20: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x39ef20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x39ef24: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EF24u;
    {
        const bool branch_taken_0x39ef24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF24u;
        // 0x39ef28: 0x2861f800  slti        $at, $v1, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef24) {
            ctx->pc = 0x39EF34u;
            goto label_39ef34;
        }
    }
    ctx->pc = 0x39EF2Cu;
    // 0x39ef2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39EF2Cu;
    {
        const bool branch_taken_0x39ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF2Cu;
        // 0x39ef30: 0x2463f000  addiu       $v1, $v1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef2c) {
            ctx->pc = 0x39EF44u;
            goto label_39ef44;
        }
    }
    ctx->pc = 0x39EF34u;
label_39ef34:
    // 0x39ef34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EF34u;
    {
        const bool branch_taken_0x39ef34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ef34) {
            ctx->pc = 0x39EF44u;
            goto label_39ef44;
        }
    }
    ctx->pc = 0x39EF3Cu;
    // 0x39ef3c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x39EF3Cu;
    {
        const bool branch_taken_0x39ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF3Cu;
        // 0x39ef40: 0x24631000  addiu       $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef3c) {
            ctx->pc = 0x39EF44u;
            goto label_39ef44;
        }
    }
    ctx->pc = 0x39EF44u;
label_39ef44:
    // 0x39ef44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x39ef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x39ef48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x39ef48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x39ef4c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39EF4Cu;
    {
        const bool branch_taken_0x39ef4c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x39ef4c) {
            ctx->pc = 0x39EF58u;
            goto label_39ef58;
        }
    }
    ctx->pc = 0x39EF54u;
    // 0x39ef54: 0x31823  negu        $v1, $v1
    ctx->pc = 0x39ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_39ef58:
    // 0x39ef58: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x39ef58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x39ef5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x39ef5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x39ef60: 0x286104e4  slti        $at, $v1, 0x4E4
    ctx->pc = 0x39ef60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1252) ? 1 : 0);
    // 0x39ef64: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x39EF64u;
    {
        const bool branch_taken_0x39ef64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ef64) {
            ctx->pc = 0x39EF78u;
            goto label_39ef78;
        }
    }
    ctx->pc = 0x39EF6Cu;
    // 0x39ef6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ef70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39EF70u;
    {
        const bool branch_taken_0x39ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF70u;
        // 0x39ef74: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef70) {
            ctx->pc = 0x39EF88u;
            goto label_39ef88;
        }
    }
    ctx->pc = 0x39EF78u;
label_39ef78:
    // 0x39ef78: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x39ef78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x39ef7c: 0x2fe182a  slt         $v1, $s7, $fp
    ctx->pc = 0x39ef7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x39ef80: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x39EF80u;
    {
        const bool branch_taken_0x39ef80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF80u;
        // 0x39ef84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef80) {
            ctx->pc = 0x39EEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eea0;
        }
    }
    ctx->pc = 0x39EF88u;
label_39ef88:
    // 0x39ef88: 0x86a30510  lh          $v1, 0x510($s5)
    ctx->pc = 0x39ef88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x39ef8c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x39ef8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x39ef90: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x39EF90u;
    {
        const bool branch_taken_0x39ef90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ef90) {
            ctx->pc = 0x39EFF8u;
            goto label_39eff8;
        }
    }
    ctx->pc = 0x39EF98u;
    // 0x39ef98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x39ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39ef9c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x39EF9Cu;
    {
        const bool branch_taken_0x39ef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ef9c) {
            ctx->pc = 0x39EFF0u;
            goto label_39eff0;
        }
    }
    ctx->pc = 0x39EFA4u;
    // 0x39efa4: 0xc096c80  jal         func_25B200
    ctx->pc = 0x39EFA4u;
    SET_GPR_U32(ctx, 31, 0x39EFACu);
    ctx->pc = 0x39EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EFA4u;
    // 0x39efa8: 0x8ea40554  lw          $a0, 0x554($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x39EFA4u, 0x39EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EFACu;
label_39efac:
    // 0x39efac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EFACu;
    {
        const bool branch_taken_0x39efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39efac) {
            ctx->pc = 0x39EFC8u;
            goto label_39efc8;
        }
    }
    ctx->pc = 0x39EFB4u;
    // 0x39efb4: 0x92a4053b  lbu         $a0, 0x53B($s5)
    ctx->pc = 0x39efb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1339)));
    // 0x39efb8: 0x92a5052e  lbu         $a1, 0x52E($s5)
    ctx->pc = 0x39efb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1326)));
    // 0x39efbc: 0xc0aa2e4  jal         func_2A8B90
    ctx->pc = 0x39EFBCu;
    SET_GPR_U32(ctx, 31, 0x39EFC4u);
    ctx->pc = 0x39EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EFBCu;
    // 0x39efc0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B90u, 0x39EFBCu, 0x39EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EFC4u;
label_39efc4:
    // 0x39efc4: 0xaea20554  sw          $v0, 0x554($s5)
    ctx->pc = 0x39efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1364), GPR_U32(ctx, 2));
label_39efc8:
    // 0x39efc8: 0x92a6055e  lbu         $a2, 0x55E($s5)
    ctx->pc = 0x39efc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1374)));
    // 0x39efcc: 0xc6ac0558  lwc1        $f12, 0x558($s5)
    ctx->pc = 0x39efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39efd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39efd4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x39efd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x39efd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39efd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39efdc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x39EFDCu;
    SET_GPR_U32(ctx, 31, 0x39EFE4u);
    ctx->pc = 0x39EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EFDCu;
    // 0x39efe0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x39EFDCu, 0x39EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EFE4u;
label_39efe4:
    // 0x39efe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39EFE4u;
    {
        const bool branch_taken_0x39efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39efe4) {
            ctx->pc = 0x39EFF8u;
            goto label_39eff8;
        }
    }
    ctx->pc = 0x39EFECu;
    // 0x39efec: 0x0  nop
    ctx->pc = 0x39efecu;
    // NOP
label_39eff0:
    // 0x39eff0: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x39EFF0u;
    SET_GPR_U32(ctx, 31, 0x39EFF8u);
    ctx->pc = 0x39EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EFF0u;
    // 0x39eff4: 0x8ea40554  lw          $a0, 0x554($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x39EFF0u, 0x39EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EFF8u;
label_39eff8:
    // 0x39eff8: 0x92a30515  lbu         $v1, 0x515($s5)
    ctx->pc = 0x39eff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1301)));
    // 0x39effc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39EFFCu;
    {
        const bool branch_taken_0x39effc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EFFCu;
        // 0x39f000: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39effc) {
            ctx->pc = 0x39F010u;
            goto label_39f010;
        }
    }
    ctx->pc = 0x39F004u;
    // 0x39f004: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39F004u;
    {
        const bool branch_taken_0x39f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f004) {
            ctx->pc = 0x39F090u;
            goto label_39f090;
        }
    }
    ctx->pc = 0x39F00Cu;
    // 0x39f00c: 0x0  nop
    ctx->pc = 0x39f00cu;
    // NOP
label_39f010:
    // 0x39f010: 0x86a40510  lh          $a0, 0x510($s5)
    ctx->pc = 0x39f010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x39f014: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39f014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39f018: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39f01c: 0xa6a40510  sh          $a0, 0x510($s5)
    ctx->pc = 0x39f01cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39f020: 0x86a40512  lh          $a0, 0x512($s5)
    ctx->pc = 0x39f020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1298)));
    // 0x39f024: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39F024u;
    {
        const bool branch_taken_0x39f024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39f024) {
            ctx->pc = 0x39F060u;
            goto label_39f060;
        }
    }
    ctx->pc = 0x39F02Cu;
    // 0x39f02c: 0x86a50510  lh          $a1, 0x510($s5)
    ctx->pc = 0x39f02cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x39f030: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x39f030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39f034: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39F034u;
    {
        const bool branch_taken_0x39f034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F034u;
        // 0x39f038: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f034) {
            ctx->pc = 0x39F088u;
            goto label_39f088;
        }
    }
    ctx->pc = 0x39F03Cu;
    // 0x39f03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f040: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x39f040u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39f044: 0x0  nop
    ctx->pc = 0x39f044u;
    // NOP
    // 0x39f048: 0x0  nop
    ctx->pc = 0x39f048u;
    // NOP
    // 0x39f04c: 0x2010  mfhi        $a0
    ctx->pc = 0x39f04cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39f050: 0xa6a40510  sh          $a0, 0x510($s5)
    ctx->pc = 0x39f050u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39f054: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39F054u;
    {
        const bool branch_taken_0x39f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F054u;
        // 0x39f058: 0xa2a30514  sb          $v1, 0x514($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f054) {
            ctx->pc = 0x39F088u;
            goto label_39f088;
        }
    }
    ctx->pc = 0x39F05Cu;
    // 0x39f05c: 0x0  nop
    ctx->pc = 0x39f05cu;
    // NOP
label_39f060:
    // 0x39f060: 0x86a30510  lh          $v1, 0x510($s5)
    ctx->pc = 0x39f060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1296)));
    // 0x39f064: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39f064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39f068: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39F068u;
    {
        const bool branch_taken_0x39f068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f068) {
            ctx->pc = 0x39F088u;
            goto label_39f088;
        }
    }
    ctx->pc = 0x39F070u;
    // 0x39f070: 0xa6a40510  sh          $a0, 0x510($s5)
    ctx->pc = 0x39f070u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39f074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f078: 0xa2a30515  sb          $v1, 0x515($s5)
    ctx->pc = 0x39f078u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x39f07c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39F07Cu;
    {
        const bool branch_taken_0x39f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F07Cu;
        // 0x39f080: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f07c) {
            ctx->pc = 0x39F090u;
            goto label_39f090;
        }
    }
    ctx->pc = 0x39F084u;
    // 0x39f084: 0x0  nop
    ctx->pc = 0x39f084u;
    // NOP
label_39f088:
    // 0x39f088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f08c: 0x0  nop
    ctx->pc = 0x39f08cu;
    // NOP
label_39f090:
    // 0x39f090: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F090u;
    {
        const bool branch_taken_0x39f090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F090u;
        // 0x39f094: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f090) {
            ctx->pc = 0x39F0A0u;
            goto label_39f0a0;
        }
    }
    ctx->pc = 0x39F098u;
    // 0x39f098: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F098u;
    SET_GPR_U32(ctx, 31, 0x39F0A0u);
    ctx->pc = 0x39F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F098u;
    // 0x39f09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F098u, 0x39F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F0A0u;
label_39f0a0:
    // 0x39f0a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39f0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39f0a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x39f0a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39f0a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39f0a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39f0ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39f0acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39f0b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39f0b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39f0b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39f0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39f0b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39f0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39f0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39f0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39f0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x39F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0C8u;
        // 0x39f0cc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F0D0u;
}
