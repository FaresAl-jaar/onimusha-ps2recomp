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

// Function: sub_0039C040
// Address: 0x39c040 - 0x39c10c
void sub_0039C040_0x39c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C040_0x39c040");
#endif

    switch (ctx->pc) {
        case 0x39c070u: goto label_39c070;
        case 0x39c0acu: goto label_39c0ac;
        case 0x39c0b4u: goto label_39c0b4;
        case 0x39c0bcu: goto label_39c0bc;
        case 0x39c0d4u: goto label_39c0d4;
        case 0x39c0e4u: goto label_39c0e4;
        case 0x39c0f4u: goto label_39c0f4;
        default: break;
    }

    ctx->pc = 0x39c040u;

    // 0x39c040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39c048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c04c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c050: 0x90832be2  lbu         $v1, 0x2BE2($a0)
    ctx->pc = 0x39c050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11234)));
    // 0x39c054: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x39C054u;
    {
        const bool branch_taken_0x39c054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C054u;
        // 0x39c058: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c054) {
            ctx->pc = 0x39C0C0u;
            goto label_39c0c0;
        }
    }
    ctx->pc = 0x39C05Cu;
    // 0x39c05c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x39c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x39c060: 0x96222be0  lhu         $v0, 0x2BE0($s1)
    ctx->pc = 0x39c060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11232)));
    // 0x39c064: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39c064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39c068: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x39C068u;
    SET_GPR_U32(ctx, 31, 0x39C070u);
    ctx->pc = 0x39C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C068u;
    // 0x39c06c: 0x438023  subu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x39C068u, 0x39C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C070u;
label_39c070:
    // 0x39c070: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x39c070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
    // 0x39c074: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x39c074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39c078: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x39c078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
    // 0x39c07c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x39c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x39c080: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x39c080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x39c084: 0x0  nop
    ctx->pc = 0x39c084u;
    // NOP
    // 0x39c088: 0x0  nop
    ctx->pc = 0x39c088u;
    // NOP
    // 0x39c08c: 0x1810  mfhi        $v1
    ctx->pc = 0x39c08cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x39c090: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x39c090u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x39c094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39c094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39c098: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x39c098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39c09c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x39C09Cu;
    {
        const bool branch_taken_0x39c09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c09c) {
            ctx->pc = 0x39C0C0u;
            goto label_39c0c0;
        }
    }
    ctx->pc = 0x39C0A4u;
    // 0x39c0a4: 0xc0c0860  jal         func_302180
    ctx->pc = 0x39C0A4u;
    SET_GPR_U32(ctx, 31, 0x39C0ACu);
    ctx->pc = 0x39C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0A4u;
    // 0x39c0a8: 0x8e242be4  lw          $a0, 0x2BE4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x39C0A4u, 0x39C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C0ACu;
label_39c0ac:
    // 0x39c0ac: 0xc0c0860  jal         func_302180
    ctx->pc = 0x39C0ACu;
    SET_GPR_U32(ctx, 31, 0x39C0B4u);
    ctx->pc = 0x39C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0ACu;
    // 0x39c0b0: 0x8e242be8  lw          $a0, 0x2BE8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x39C0ACu, 0x39C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C0B4u;
label_39c0b4:
    // 0x39c0b4: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x39C0B4u;
    SET_GPR_U32(ctx, 31, 0x39C0BCu);
    ctx->pc = 0x39C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0B4u;
    // 0x39c0b8: 0x8e242964  lw          $a0, 0x2964($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x39C0B4u, 0x39C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C0BCu;
label_39c0bc:
    // 0x39c0bc: 0xa2202be2  sb          $zero, 0x2BE2($s1)
    ctx->pc = 0x39c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11234), (uint8_t)GPR_U32(ctx, 0));
label_39c0c0:
    // 0x39c0c0: 0x92232be2  lbu         $v1, 0x2BE2($s1)
    ctx->pc = 0x39c0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11234)));
    // 0x39c0c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x39C0C4u;
    {
        const bool branch_taken_0x39c0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c0c4) {
            ctx->pc = 0x39C0F8u;
            goto label_39c0f8;
        }
    }
    ctx->pc = 0x39C0CCu;
    // 0x39c0cc: 0xc0c0894  jal         func_302250
    ctx->pc = 0x39C0CCu;
    SET_GPR_U32(ctx, 31, 0x39C0D4u);
    ctx->pc = 0x39C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0CCu;
    // 0x39c0d0: 0x8e242be4  lw          $a0, 0x2BE4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x39C0CCu, 0x39C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C0D4u;
label_39c0d4:
    // 0x39c0d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39C0D4u;
    {
        const bool branch_taken_0x39c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c0d4) {
            ctx->pc = 0x39C0F8u;
            goto label_39c0f8;
        }
    }
    ctx->pc = 0x39C0DCu;
    // 0x39c0dc: 0xc0c0894  jal         func_302250
    ctx->pc = 0x39C0DCu;
    SET_GPR_U32(ctx, 31, 0x39C0E4u);
    ctx->pc = 0x39C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0DCu;
    // 0x39c0e0: 0x8e242be8  lw          $a0, 0x2BE8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302250u, 0x39C0DCu, 0x39C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C0E4u;
label_39c0e4:
    // 0x39c0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C0E4u;
    {
        const bool branch_taken_0x39c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c0e4) {
            ctx->pc = 0x39C0F8u;
            goto label_39c0f8;
        }
    }
    ctx->pc = 0x39C0ECu;
    // 0x39c0ec: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x39C0ECu;
    SET_GPR_U32(ctx, 31, 0x39C0F4u);
    ctx->pc = 0x39C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0ECu;
    // 0x39c0f0: 0x8e242964  lw          $a0, 0x2964($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10596)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x39C0ECu, 0x39C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C0F4u;
label_39c0f4:
    // 0x39c0f4: 0xa2202be2  sb          $zero, 0x2BE2($s1)
    ctx->pc = 0x39c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11234), (uint8_t)GPR_U32(ctx, 0));
label_39c0f8:
    // 0x39c0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c104: 0x3e00008  jr          $ra
    ctx->pc = 0x39C104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C104u;
        // 0x39c108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C10Cu;
}
