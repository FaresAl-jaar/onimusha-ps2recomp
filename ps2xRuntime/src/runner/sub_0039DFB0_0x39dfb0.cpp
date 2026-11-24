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

// Function: sub_0039DFB0
// Address: 0x39dfb0 - 0x39e15c
void sub_0039DFB0_0x39dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DFB0_0x39dfb0");
#endif

    switch (ctx->pc) {
        case 0x39dfc8u: goto label_39dfc8;
        case 0x39dff0u: goto label_39dff0;
        case 0x39dff8u: goto label_39dff8;
        case 0x39e010u: goto label_39e010;
        case 0x39e018u: goto label_39e018;
        case 0x39e02cu: goto label_39e02c;
        case 0x39e040u: goto label_39e040;
        case 0x39e064u: goto label_39e064;
        case 0x39e080u: goto label_39e080;
        case 0x39e088u: goto label_39e088;
        case 0x39e0a0u: goto label_39e0a0;
        case 0x39e0a8u: goto label_39e0a8;
        case 0x39e0f8u: goto label_39e0f8;
        case 0x39e108u: goto label_39e108;
        case 0x39e114u: goto label_39e114;
        case 0x39e140u: goto label_39e140;
        default: break;
    }

    ctx->pc = 0x39dfb0u;

    // 0x39dfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39dfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39dfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39dfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39dfc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39dfc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dfc4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x39dfc4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_39dfc8:
    // 0x39dfc8: 0x92232bed  lbu         $v1, 0x2BED($s1)
    ctx->pc = 0x39dfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11245)));
    // 0x39dfcc: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x39dfccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x39dfd0: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x39DFD0u;
    {
        const bool branch_taken_0x39dfd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFD0u;
        // 0x39dfd4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfd0) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39DFD8u;
    // 0x39dfd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39dfdc: 0x248425b0  addiu       $a0, $a0, 0x25B0
    ctx->pc = 0x39dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9648));
    // 0x39dfe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39dfe4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39dfe8: 0x600008  jr          $v1
    ctx->pc = 0x39DFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39DFF0u: goto label_39dff0;
            case 0x39DFF8u: goto label_39dff8;
            case 0x39E010u: goto label_39e010;
            case 0x39E018u: goto label_39e018;
            case 0x39E080u: goto label_39e080;
            case 0x39E088u: goto label_39e088;
            case 0x39E0A0u: goto label_39e0a0;
            case 0x39E0A8u: goto label_39e0a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DFE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39DFF0u;
label_39dff0:
    // 0x39dff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39dff4: 0xa2232bed  sb          $v1, 0x2BED($s1)
    ctx->pc = 0x39dff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
label_39dff8:
    // 0x39dff8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x39dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x39dffc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x39dffcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x39e000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39e000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e008: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x39E008u;
    {
        const bool branch_taken_0x39e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E008u;
        // 0x39e00c: 0xa2232bed  sb          $v1, 0x2BED($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e008) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39E010u;
label_39e010:
    // 0x39e010: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39e014: 0xa2222bed  sb          $v0, 0x2BED($s1)
    ctx->pc = 0x39e014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 2));
label_39e018:
    // 0x39e018: 0x86222bf0  lh          $v0, 0x2BF0($s1)
    ctx->pc = 0x39e018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11248)));
    // 0x39e01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e020: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39e024: 0xc0e6f10  jal         func_39BC40
    ctx->pc = 0x39E024u;
    SET_GPR_U32(ctx, 31, 0x39E02Cu);
    ctx->pc = 0x39E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E024u;
    // 0x39e028: 0xa6222bf0  sh          $v0, 0x2BF0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 11248), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC40u, 0x39E024u, 0x39E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E02Cu;
label_39e02c:
    // 0x39e02c: 0x86232bf0  lh          $v1, 0x2BF0($s1)
    ctx->pc = 0x39e02cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11248)));
    // 0x39e030: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E030u;
    {
        const bool branch_taken_0x39e030 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x39E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E030u;
        // 0x39e034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e030) {
            ctx->pc = 0x39E050u;
            goto label_39e050;
        }
    }
    ctx->pc = 0x39E038u;
    // 0x39e038: 0xc0e6f78  jal         func_39BDE0
    ctx->pc = 0x39E038u;
    SET_GPR_U32(ctx, 31, 0x39E040u);
    ctx->pc = 0x39E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E038u;
    // 0x39e03c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDE0u, 0x39E038u, 0x39E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E040u;
label_39e040:
    // 0x39e040: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x39e040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x39e044: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39e044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39e048: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x39E048u;
    {
        const bool branch_taken_0x39e048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e048) {
            ctx->pc = 0x39E078u;
            goto label_39e078;
        }
    }
    ctx->pc = 0x39E050u;
label_39e050:
    // 0x39e050: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x39e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x39e054: 0xa2220780  sb          $v0, 0x780($s1)
    ctx->pc = 0x39e054u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e05c: 0xc0e6ff4  jal         func_39BFD0
    ctx->pc = 0x39E05Cu;
    SET_GPR_U32(ctx, 31, 0x39E064u);
    ctx->pc = 0x39E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E05Cu;
    // 0x39e060: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFD0u, 0x39E05Cu, 0x39E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E064u;
label_39e064:
    // 0x39e064: 0xa6222bf0  sh          $v0, 0x2BF0($s1)
    ctx->pc = 0x39e064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11248), (uint16_t)GPR_U32(ctx, 2));
    // 0x39e068: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39e06c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x39E06Cu;
    {
        const bool branch_taken_0x39e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E06Cu;
        // 0x39e070: 0xa2232bed  sb          $v1, 0x2BED($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e06c) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39E074u;
    // 0x39e074: 0x0  nop
    ctx->pc = 0x39e074u;
    // NOP
label_39e078:
    // 0x39e078: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x39E078u;
    {
        const bool branch_taken_0x39e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E078u;
        // 0x39e07c: 0xa2202bed  sb          $zero, 0x2BED($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e078) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39E080u;
label_39e080:
    // 0x39e080: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39e084: 0xa2232bed  sb          $v1, 0x2BED($s1)
    ctx->pc = 0x39e084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
label_39e088:
    // 0x39e088: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39e08c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x39e08cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x39e090: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39e090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e094: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39e098: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x39E098u;
    {
        const bool branch_taken_0x39e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E098u;
        // 0x39e09c: 0xa2232bed  sb          $v1, 0x2BED($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e098) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39E0A0u;
label_39e0a0:
    // 0x39e0a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x39e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39e0a4: 0xa2222bed  sb          $v0, 0x2BED($s1)
    ctx->pc = 0x39e0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 2));
label_39e0a8:
    // 0x39e0a8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x39e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39e0ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x39e0b0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x39e0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x39e0b4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x39e0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39e0b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39e0bc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x39e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x39e0c0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x39e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x39e0c4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x39e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x39e0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39e0cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E0CCu;
    {
        const bool branch_taken_0x39e0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0CCu;
        // 0x39e0d0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0cc) {
            ctx->pc = 0x39E0E0u;
            goto label_39e0e0;
        }
    }
    ctx->pc = 0x39E0D4u;
    // 0x39e0d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39e0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e0d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39E0D8u;
    {
        const bool branch_taken_0x39e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0D8u;
        // 0x39e0dc: 0xa2220780  sb          $v0, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0d8) {
            ctx->pc = 0x39E0F0u;
            goto label_39e0f0;
        }
    }
    ctx->pc = 0x39E0E0u;
label_39e0e0:
    // 0x39e0e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x39e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x39e0e4: 0xa2220780  sb          $v0, 0x780($s1)
    ctx->pc = 0x39e0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39e0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e0ec: 0x0  nop
    ctx->pc = 0x39e0ecu;
    // NOP
label_39e0f0:
    // 0x39e0f0: 0xc0e700c  jal         func_39C030
    ctx->pc = 0x39E0F0u;
    SET_GPR_U32(ctx, 31, 0x39E0F8u);
    ctx->pc = 0x39E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E0F0u;
    // 0x39e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C030u, 0x39E0F0u, 0x39E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0F8u;
label_39e0f8:
    // 0x39e0f8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39E0F8u;
    {
        const bool branch_taken_0x39e0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0F8u;
        // 0x39e0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0f8) {
            ctx->pc = 0x39E138u;
            goto label_39e138;
        }
    }
    ctx->pc = 0x39E100u;
    // 0x39e100: 0xc0e6f10  jal         func_39BC40
    ctx->pc = 0x39E100u;
    SET_GPR_U32(ctx, 31, 0x39E108u);
    ctx->pc = 0x39BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC40u, 0x39E100u, 0x39E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E108u;
label_39e108:
    // 0x39e108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e10c: 0xc0e6f78  jal         func_39BDE0
    ctx->pc = 0x39E10Cu;
    SET_GPR_U32(ctx, 31, 0x39E114u);
    ctx->pc = 0x39E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E10Cu;
    // 0x39e110: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDE0u, 0x39E10Cu, 0x39E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E114u;
label_39e114:
    // 0x39e114: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x39e114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x39e118: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39e118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39e11c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E11Cu;
    {
        const bool branch_taken_0x39e11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E11Cu;
        // 0x39e120: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e11c) {
            ctx->pc = 0x39E130u;
            goto label_39e130;
        }
    }
    ctx->pc = 0x39E124u;
    // 0x39e124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39E124u;
    {
        const bool branch_taken_0x39e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E124u;
        // 0x39e128: 0xa2232bed  sb          $v1, 0x2BED($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e124) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39E12Cu;
    // 0x39e12c: 0x0  nop
    ctx->pc = 0x39e12cu;
    // NOP
label_39e130:
    // 0x39e130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39E130u;
    {
        const bool branch_taken_0x39e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E130u;
        // 0x39e134: 0xa2202bed  sb          $zero, 0x2BED($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e130) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39E138u;
label_39e138:
    // 0x39e138: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39e138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39e13c: 0xa2232bed  sb          $v1, 0x2BED($s1)
    ctx->pc = 0x39e13cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11245), (uint8_t)GPR_U32(ctx, 3));
label_39e140:
    // 0x39e140: 0x1600ffa1  bnez        $s0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x39E140u;
    {
        const bool branch_taken_0x39e140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e140) {
            ctx->pc = 0x39DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39dfc8;
        }
    }
    ctx->pc = 0x39E148u;
    // 0x39e148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39e148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39e14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e154: 0x3e00008  jr          $ra
    ctx->pc = 0x39E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E154u;
        // 0x39e158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E15Cu;
}
