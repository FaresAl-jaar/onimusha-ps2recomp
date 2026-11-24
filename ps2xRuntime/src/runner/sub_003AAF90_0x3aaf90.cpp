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

// Function: sub_003AAF90
// Address: 0x3aaf90 - 0x3ab1fc
void sub_003AAF90_0x3aaf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAF90_0x3aaf90");
#endif

    switch (ctx->pc) {
        case 0x3ab004u: goto label_3ab004;
        case 0x3ab01cu: goto label_3ab01c;
        case 0x3ab02cu: goto label_3ab02c;
        case 0x3ab07cu: goto label_3ab07c;
        case 0x3ab08cu: goto label_3ab08c;
        case 0x3ab0d4u: goto label_3ab0d4;
        case 0x3ab0e4u: goto label_3ab0e4;
        case 0x3ab114u: goto label_3ab114;
        case 0x3ab124u: goto label_3ab124;
        case 0x3ab14cu: goto label_3ab14c;
        case 0x3ab194u: goto label_3ab194;
        default: break;
    }

    ctx->pc = 0x3aaf90u;

    // 0x3aaf90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aaf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aaf94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aaf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aaf98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aaf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aaf9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aaf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aafa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aafa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aafa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aafa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aafa8: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x3aafa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3aafac: 0x10820054  beq         $a0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3AAFACu;
    {
        const bool branch_taken_0x3aafac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFACu;
        // 0x3aafb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafac) {
            ctx->pc = 0x3AB100u;
            goto label_3ab100;
        }
    }
    ctx->pc = 0x3AAFB4u;
    // 0x3aafb4: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3AAFB4u;
    {
        const bool branch_taken_0x3aafb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aafb4) {
            ctx->pc = 0x3AB0C0u;
            goto label_3ab0c0;
        }
    }
    ctx->pc = 0x3AAFBCu;
    // 0x3aafbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aafc0: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3AAFC0u;
    {
        const bool branch_taken_0x3aafc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAFC0u;
        // 0x3aafc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aafc0) {
            ctx->pc = 0x3AB068u;
            goto label_3ab068;
        }
    }
    ctx->pc = 0x3AAFC8u;
    // 0x3aafc8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3AAFC8u;
    {
        const bool branch_taken_0x3aafc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aafc8) {
            ctx->pc = 0x3AB008u;
            goto label_3ab008;
        }
    }
    ctx->pc = 0x3AAFD0u;
    // 0x3aafd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAFD0u;
    {
        const bool branch_taken_0x3aafd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aafd0) {
            ctx->pc = 0x3AAFE0u;
            goto label_3aafe0;
        }
    }
    ctx->pc = 0x3AAFD8u;
    // 0x3aafd8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3AAFD8u;
    {
        const bool branch_taken_0x3aafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aafd8) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AAFE0u;
label_3aafe0:
    // 0x3aafe0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3aafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aafe4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aafe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aafe8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3aafe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3aafec: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aafecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aaff0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aaff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aaff4: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x3aaff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    // 0x3aaff8: 0xa4238c12  sh          $v1, -0x73EE($at)
    ctx->pc = 0x3aaff8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3aaffc: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AAFFCu;
    SET_GPR_U32(ctx, 31, 0x3AB004u);
    ctx->pc = 0x3AB000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAFFCu;
    // 0x3ab000: 0x24a52930  addiu       $a1, $a1, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AAFFCu, 0x3AB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB004u;
label_3ab004:
    // 0x3ab004: 0x0  nop
    ctx->pc = 0x3ab004u;
    // NOP
label_3ab008:
    // 0x3ab008: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab008u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab00c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab014: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AB014u;
    SET_GPR_U32(ctx, 31, 0x3AB01Cu);
    ctx->pc = 0x3AB018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB014u;
    // 0x3ab018: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AB014u, 0x3AB01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB01Cu;
label_3ab01c:
    // 0x3ab01c: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x3AB01Cu;
    {
        const bool branch_taken_0x3ab01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB01Cu;
        // 0x3ab020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab01c) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB024u;
    // 0x3ab024: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB024u;
    SET_GPR_U32(ctx, 31, 0x3AB02Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB024u, 0x3AB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB02Cu;
label_3ab02c:
    // 0x3ab02c: 0x440006c  bltz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3AB02Cu;
    {
        const bool branch_taken_0x3ab02c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab02c) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB034u;
    // 0x3ab034: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3ab034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab038: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3ab038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3ab03c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ab040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ab044: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x3ab044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ab048: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x3ab048u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ab04c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ab04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ab050: 0xac208c18  sw          $zero, -0x73E8($at)
    ctx->pc = 0x3ab050u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 0));
    // 0x3ab054: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab058: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x3ab058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3ab05c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3AB05Cu;
    {
        const bool branch_taken_0x3ab05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB05Cu;
        // 0x3ab060: 0xac228c14  sw          $v0, -0x73EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab05c) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB064u;
    // 0x3ab064: 0x0  nop
    ctx->pc = 0x3ab064u;
    // NOP
label_3ab068:
    // 0x3ab068: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab068u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab06c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab074: 0xc052910  jal         func_14A440
    ctx->pc = 0x3AB074u;
    SET_GPR_U32(ctx, 31, 0x3AB07Cu);
    ctx->pc = 0x3AB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB074u;
    // 0x3ab078: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x3AB074u, 0x3AB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB07Cu;
label_3ab07c:
    // 0x3ab07c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3AB07Cu;
    {
        const bool branch_taken_0x3ab07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB07Cu;
        // 0x3ab080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab07c) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB084u;
    // 0x3ab084: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB084u;
    SET_GPR_U32(ctx, 31, 0x3AB08Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB084u, 0x3AB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB08Cu;
label_3ab08c:
    // 0x3ab08c: 0x4400054  bltz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3AB08Cu;
    {
        const bool branch_taken_0x3ab08c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab08c) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB094u;
    // 0x3ab094: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3ab094u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab098: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ab098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ab09c: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3ab09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3ab0a0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab0a4: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3ab0a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ab0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab0ac: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x3ab0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ab0b0: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3ab0b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3ab0b4: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab0b8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3AB0B8u;
    {
        const bool branch_taken_0x3ab0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0B8u;
        // 0x3ab0bc: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0b8) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB0C0u;
label_3ab0c0:
    // 0x3ab0c0: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab0c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab0c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab0cc: 0xc052970  jal         func_14A5C0
    ctx->pc = 0x3AB0CCu;
    SET_GPR_U32(ctx, 31, 0x3AB0D4u);
    ctx->pc = 0x3AB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB0CCu;
    // 0x3ab0d0: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A5C0u, 0x3AB0CCu, 0x3AB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB0D4u;
label_3ab0d4:
    // 0x3ab0d4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3AB0D4u;
    {
        const bool branch_taken_0x3ab0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0D4u;
        // 0x3ab0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0d4) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB0DCu;
    // 0x3ab0dc: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB0DCu;
    SET_GPR_U32(ctx, 31, 0x3AB0E4u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB0DCu, 0x3AB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB0E4u;
label_3ab0e4:
    // 0x3ab0e4: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3AB0E4u;
    {
        const bool branch_taken_0x3ab0e4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab0e4) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB0ECu;
    // 0x3ab0ec: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3ab0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab0f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab0f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3AB0F4u;
    {
        const bool branch_taken_0x3ab0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0F4u;
        // 0x3ab0f8: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0f4) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB0FCu;
    // 0x3ab0fc: 0x0  nop
    ctx->pc = 0x3ab0fcu;
    // NOP
label_3ab100:
    // 0x3ab100: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab100u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab104: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab10c: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AB10Cu;
    SET_GPR_U32(ctx, 31, 0x3AB114u);
    ctx->pc = 0x3AB110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB10Cu;
    // 0x3ab110: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AB10Cu, 0x3AB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB114u;
label_3ab114:
    // 0x3ab114: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3AB114u;
    {
        const bool branch_taken_0x3ab114 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB114u;
        // 0x3ab118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab114) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB11Cu;
    // 0x3ab11c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB11Cu;
    SET_GPR_U32(ctx, 31, 0x3AB124u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB11Cu, 0x3AB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB124u;
label_3ab124:
    // 0x3ab124: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3AB124u;
    {
        const bool branch_taken_0x3ab124 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab124) {
            ctx->pc = 0x3AB1E0u;
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB12Cu;
    // 0x3ab12c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3ab12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab130: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab134: 0x8c31fc48  lw          $s1, -0x3B8($at)
    ctx->pc = 0x3ab134u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x92FC48u));
    // 0x3ab138: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3ab138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3ab13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab140: 0x24a59da0  addiu       $a1, $a1, -0x6260
    ctx->pc = 0x3ab140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    // 0x3ab144: 0xc0eb0c4  jal         func_3AC310
    ctx->pc = 0x3AB144u;
    SET_GPR_U32(ctx, 31, 0x3AB14Cu);
    ctx->pc = 0x3AB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB144u;
    // 0x3ab148: 0x24065eb0  addiu       $a2, $zero, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC310u, 0x3AB144u, 0x3AB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB14Cu;
label_3ab14c:
    // 0x3ab14c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AB14Cu;
    {
        const bool branch_taken_0x3ab14c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ab14c) {
            ctx->pc = 0x3AB178u;
            goto label_3ab178;
        }
    }
    ctx->pc = 0x3AB154u;
    // 0x3ab154: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3ab154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab158: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ab158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab15c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3ab15cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab160: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ab160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ab164: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3ab164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab16c: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3ab16cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ab170: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3AB170u;
    {
        const bool branch_taken_0x3ab170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB170u;
        // 0x3ab174: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab170) {
            ctx->pc = 0x3AB1E8u;
            goto label_3ab1e8;
        }
    }
    ctx->pc = 0x3AB178u;
label_3ab178:
    // 0x3ab178: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3ab178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3ab17c: 0x8c31fc4c  lw          $s1, -0x3B4($at)
    ctx->pc = 0x3ab17cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x92FC4Cu));
    // 0x3ab180: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3ab180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3ab184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab188: 0x24a59da0  addiu       $a1, $a1, -0x6260
    ctx->pc = 0x3ab188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    // 0x3ab18c: 0xc0eb0f4  jal         func_3AC3D0
    ctx->pc = 0x3AB18Cu;
    SET_GPR_U32(ctx, 31, 0x3AB194u);
    ctx->pc = 0x3AB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB18Cu;
    // 0x3ab190: 0x24065eb0  addiu       $a2, $zero, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC3D0u, 0x3AB18Cu, 0x3AB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB194u;
label_3ab194:
    // 0x3ab194: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AB194u;
    {
        const bool branch_taken_0x3ab194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ab194) {
            ctx->pc = 0x3AB1C0u;
            goto label_3ab1c0;
        }
    }
    ctx->pc = 0x3AB19Cu;
    // 0x3ab19c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3ab19cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab1a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ab1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab1a4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3ab1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab1a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ab1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ab1ac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3ab1acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1b4: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3ab1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ab1b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3AB1B8u;
    {
        const bool branch_taken_0x3ab1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1B8u;
        // 0x3ab1bc: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1b8) {
            ctx->pc = 0x3AB1E8u;
            goto label_3ab1e8;
        }
    }
    ctx->pc = 0x3AB1C0u;
label_3ab1c0:
    // 0x3ab1c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ab1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ab1c4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3ab1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3ab1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab1cc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ab1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ab1d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ab1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ab1d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB1D4u;
    {
        const bool branch_taken_0x3ab1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1D4u;
        // 0x3ab1d8: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1d4) {
            ctx->pc = 0x3AB1E8u;
            goto label_3ab1e8;
        }
    }
    ctx->pc = 0x3AB1DCu;
    // 0x3ab1dc: 0x0  nop
    ctx->pc = 0x3ab1dcu;
    // NOP
label_3ab1e0:
    // 0x3ab1e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1e4: 0x0  nop
    ctx->pc = 0x3ab1e4u;
    // NOP
label_3ab1e8:
    // 0x3ab1e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ab1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ab1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ab1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1F4u;
        // 0x3ab1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB1FCu;
}
