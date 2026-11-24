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

// Function: sub_003CEBB0
// Address: 0x3cebb0 - 0x3ced90
void sub_003CEBB0_0x3cebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEBB0_0x3cebb0");
#endif

    switch (ctx->pc) {
        case 0x3cec04u: goto label_3cec04;
        case 0x3cec18u: goto label_3cec18;
        case 0x3cec58u: goto label_3cec58;
        case 0x3cec68u: goto label_3cec68;
        case 0x3cecd4u: goto label_3cecd4;
        case 0x3ced80u: goto label_3ced80;
        default: break;
    }

    ctx->pc = 0x3cebb0u;

    // 0x3cebb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3cebb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cebb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cebbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cebc0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3cebc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3cebc4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3CEBC4u;
    {
        const bool branch_taken_0x3cebc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEBC4u;
        // 0x3cebc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cebc4) {
            ctx->pc = 0x3CEC48u;
            goto label_3cec48;
        }
    }
    ctx->pc = 0x3CEBCCu;
    // 0x3cebcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cebd0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3CEBD0u;
    {
        const bool branch_taken_0x3cebd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cebd0) {
            ctx->pc = 0x3CEC28u;
            goto label_3cec28;
        }
    }
    ctx->pc = 0x3CEBD8u;
    // 0x3cebd8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CEBD8u;
    {
        const bool branch_taken_0x3cebd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cebd8) {
            ctx->pc = 0x3CEBE8u;
            goto label_3cebe8;
        }
    }
    ctx->pc = 0x3CEBE0u;
    // 0x3cebe0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3CEBE0u;
    {
        const bool branch_taken_0x3cebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cebe0) {
            ctx->pc = 0x3CED80u;
            goto label_3ced80;
        }
    }
    ctx->pc = 0x3CEBE8u;
label_3cebe8:
    // 0x3cebe8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CEBE8u;
    {
        const bool branch_taken_0x3cebe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cebe8) {
            ctx->pc = 0x3CEC10u;
            goto label_3cec10;
        }
    }
    ctx->pc = 0x3CEBF0u;
    // 0x3cebf0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3cebf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3cebf4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3cebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3cebf8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3cebf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3cebfc: 0xc0aa524  jal         func_2A9490
    ctx->pc = 0x3CEBFCu;
    SET_GPR_U32(ctx, 31, 0x3CEC04u);
    ctx->pc = 0x3CEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEBFCu;
    // 0x3cec00: 0x26070090  addiu       $a3, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9490u, 0x3CEBFCu, 0x3CEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEC04u;
label_3cec04:
    // 0x3cec04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEC04u;
    {
        const bool branch_taken_0x3cec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC04u;
        // 0x3cec08: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec04) {
            ctx->pc = 0x3CEC18u;
            goto label_3cec18;
        }
    }
    ctx->pc = 0x3CEC0Cu;
    // 0x3cec0c: 0x0  nop
    ctx->pc = 0x3cec0cu;
    // NOP
label_3cec10:
    // 0x3cec10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CEC10u;
    SET_GPR_U32(ctx, 31, 0x3CEC18u);
    ctx->pc = 0x3CEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEC10u;
    // 0x3cec14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CEC10u, 0x3CEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEC18u;
label_3cec18:
    // 0x3cec18: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3cec18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3cec1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cec20: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3CEC20u;
    {
        const bool branch_taken_0x3cec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC20u;
        // 0x3cec24: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec20) {
            ctx->pc = 0x3CED80u;
            goto label_3ced80;
        }
    }
    ctx->pc = 0x3CEC28u;
label_3cec28:
    // 0x3cec28: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3cec28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3cec2c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3cec2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cec30: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3cec30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cec34: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3cec34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cec38: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3cec38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cec3c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3cec3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3cec40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cec44: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3cec44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3cec48:
    // 0x3cec48: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3cec48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3cec4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec50: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3CEC50u;
    SET_GPR_U32(ctx, 31, 0x3CEC58u);
    ctx->pc = 0x3CEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEC50u;
    // 0x3cec54: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3CEC50u, 0x3CEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEC58u;
label_3cec58:
    // 0x3cec58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CEC58u;
    {
        const bool branch_taken_0x3cec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC58u;
        // 0x3cec5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec58) {
            ctx->pc = 0x3CEC68u;
            goto label_3cec68;
        }
    }
    ctx->pc = 0x3CEC60u;
    // 0x3cec60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CEC60u;
    SET_GPR_U32(ctx, 31, 0x3CEC68u);
    ctx->pc = 0x3CEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEC60u;
    // 0x3cec64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CEC60u, 0x3CEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEC68u;
label_3cec68:
    // 0x3cec68: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3cec68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3cec6c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3CEC6Cu;
    {
        const bool branch_taken_0x3cec6c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3CEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC6Cu;
        // 0x3cec70: 0x28610015  slti        $at, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec6c) {
            ctx->pc = 0x3CECD8u;
            goto label_3cecd8;
        }
    }
    ctx->pc = 0x3CEC74u;
    // 0x3cec74: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3CEC74u;
    {
        const bool branch_taken_0x3cec74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cec74) {
            ctx->pc = 0x3CECD8u;
            goto label_3cecd8;
        }
    }
    ctx->pc = 0x3CEC7Cu;
    // 0x3cec7c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3cec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3cec80: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3cec80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3cec84: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3cec84u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3cec88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec8c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3cec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cec90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cec90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3cec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3cec98: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3cec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3cec9c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3cec9cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3ceca0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3ceca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3ceca4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3ceca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3ceca8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3ceca8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3cecac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3cecacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3cecb0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3cecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3cecb4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3cecb4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3cecb8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3cecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3cecbc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3cecbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3cecc0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3cecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3cecc4: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3cecc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3cecc8: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3cecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ceccc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3CECCCu;
    SET_GPR_U32(ctx, 31, 0x3CECD4u);
    ctx->pc = 0x3CECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CECCCu;
    // 0x3cecd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3CECCCu, 0x3CECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CECD4u;
label_3cecd4:
    // 0x3cecd4: 0x0  nop
    ctx->pc = 0x3cecd4u;
    // NOP
label_3cecd8:
    // 0x3cecd8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3cecd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3cecdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CECDCu;
    {
        const bool branch_taken_0x3cecdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CECDCu;
        // 0x3cece0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cecdc) {
            ctx->pc = 0x3CECF0u;
            goto label_3cecf0;
        }
    }
    ctx->pc = 0x3CECE4u;
    // 0x3cece4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CECE4u;
    {
        const bool branch_taken_0x3cece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cece4) {
            ctx->pc = 0x3CED70u;
            goto label_3ced70;
        }
    }
    ctx->pc = 0x3CECECu;
    // 0x3cecec: 0x0  nop
    ctx->pc = 0x3cececu;
    // NOP
label_3cecf0:
    // 0x3cecf0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3cecf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3cecf4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3cecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3cecf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cecfc: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3cecfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ced00: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3ced00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3ced04: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CED04u;
    {
        const bool branch_taken_0x3ced04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ced04) {
            ctx->pc = 0x3CED40u;
            goto label_3ced40;
        }
    }
    ctx->pc = 0x3CED0Cu;
    // 0x3ced0c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3ced0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3ced10: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3ced10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3ced14: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CED14u;
    {
        const bool branch_taken_0x3ced14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED14u;
        // 0x3ced18: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced14) {
            ctx->pc = 0x3CED68u;
            goto label_3ced68;
        }
    }
    ctx->pc = 0x3CED1Cu;
    // 0x3ced1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ced1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ced20: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3ced20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ced24: 0x0  nop
    ctx->pc = 0x3ced24u;
    // NOP
    // 0x3ced28: 0x0  nop
    ctx->pc = 0x3ced28u;
    // NOP
    // 0x3ced2c: 0x2010  mfhi        $a0
    ctx->pc = 0x3ced2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3ced30: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3ced30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ced34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CED34u;
    {
        const bool branch_taken_0x3ced34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED34u;
        // 0x3ced38: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced34) {
            ctx->pc = 0x3CED68u;
            goto label_3ced68;
        }
    }
    ctx->pc = 0x3CED3Cu;
    // 0x3ced3c: 0x0  nop
    ctx->pc = 0x3ced3cu;
    // NOP
label_3ced40:
    // 0x3ced40: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3ced40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3ced44: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ced44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ced48: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CED48u;
    {
        const bool branch_taken_0x3ced48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ced48) {
            ctx->pc = 0x3CED68u;
            goto label_3ced68;
        }
    }
    ctx->pc = 0x3CED50u;
    // 0x3ced50: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3ced50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ced54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ced54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ced58: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3ced58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ced5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CED5Cu;
    {
        const bool branch_taken_0x3ced5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED5Cu;
        // 0x3ced60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced5c) {
            ctx->pc = 0x3CED70u;
            goto label_3ced70;
        }
    }
    ctx->pc = 0x3CED64u;
    // 0x3ced64: 0x0  nop
    ctx->pc = 0x3ced64u;
    // NOP
label_3ced68:
    // 0x3ced68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ced68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ced6c: 0x0  nop
    ctx->pc = 0x3ced6cu;
    // NOP
label_3ced70:
    // 0x3ced70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CED70u;
    {
        const bool branch_taken_0x3ced70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED70u;
        // 0x3ced74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced70) {
            ctx->pc = 0x3CED80u;
            goto label_3ced80;
        }
    }
    ctx->pc = 0x3CED78u;
    // 0x3ced78: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CED78u;
    SET_GPR_U32(ctx, 31, 0x3CED80u);
    ctx->pc = 0x3CED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CED78u;
    // 0x3ced7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CED78u, 0x3CED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CED80u;
label_3ced80:
    // 0x3ced80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ced80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ced84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ced84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ced88: 0x3e00008  jr          $ra
    ctx->pc = 0x3CED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED88u;
        // 0x3ced8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CED90u;
}
