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

// Function: sub_00270C10
// Address: 0x270c10 - 0x270e44
void sub_00270C10_0x270c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270C10_0x270c10");
#endif

    switch (ctx->pc) {
        case 0x270c44u: goto label_270c44;
        case 0x270d0cu: goto label_270d0c;
        case 0x270d34u: goto label_270d34;
        case 0x270d40u: goto label_270d40;
        case 0x270d54u: goto label_270d54;
        case 0x270d60u: goto label_270d60;
        case 0x270d6cu: goto label_270d6c;
        case 0x270d88u: goto label_270d88;
        case 0x270da0u: goto label_270da0;
        case 0x270dccu: goto label_270dcc;
        case 0x270dfcu: goto label_270dfc;
        case 0x270e14u: goto label_270e14;
        case 0x270e28u: goto label_270e28;
        default: break;
    }

    ctx->pc = 0x270c10u;

    // 0x270c10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x270c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x270c14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x270c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x270c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x270c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x270c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270c20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x270c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270c28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x270c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270c30: 0x9083007b  lbu         $v1, 0x7B($a0)
    ctx->pc = 0x270c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 123)));
    // 0x270c34: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x270C34u;
    {
        const bool branch_taken_0x270c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C34u;
        // 0x270c38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c34) {
            ctx->pc = 0x270E28u;
            goto label_270e28;
        }
    }
    ctx->pc = 0x270C3Cu;
    // 0x270c3c: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x270C3Cu;
    SET_GPR_U32(ctx, 31, 0x270C44u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x270C3Cu, 0x270C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C44u;
label_270c44:
    // 0x270c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c48: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x270c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x270c4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x270c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x270c50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x270c50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x270c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x270c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x270c58: 0x86650078  lh          $a1, 0x78($s3)
    ctx->pc = 0x270c58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x270c5c: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x270c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x270c60: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x270c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x270c64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x270c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x270c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c6c: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270c70: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x270c70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x270c74: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x270c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x270c78: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x270c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x270c7c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x270c7cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x270c80: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x270c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x270c84: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x270c84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x270c88: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x270c88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x270c8c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x270c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x270c90: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x270c90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x270c94: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x270c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x270c98: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270c9c: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x270c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x270ca0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x270ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x270ca4: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270ca8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x270ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x270cac: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x270cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x270cb0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x270cb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x270cb4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x270cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x270cb8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x270cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x270cbc: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x270cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x270cc0: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270cc4: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x270cc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x270cc8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x270cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x270ccc: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270cd0: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x270cd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x270cd4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x270cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x270cd8: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270cdc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x270cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x270ce0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x270ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x270ce4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x270ce4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x270ce8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x270ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x270cec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x270cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270cf0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x270cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x270cf4: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x270cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270cf8: 0x90450006  lbu         $a1, 0x6($v0)
    ctx->pc = 0x270cf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x270cfc: 0x90460007  lbu         $a2, 0x7($v0)
    ctx->pc = 0x270cfcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x270d00: 0x9048000b  lbu         $t0, 0xB($v0)
    ctx->pc = 0x270d00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x270d04: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x270D04u;
    SET_GPR_U32(ctx, 31, 0x270D0Cu);
    ctx->pc = 0x270D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D04u;
    // 0x270d08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x270D04u, 0x270D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D0Cu;
label_270d0c:
    // 0x270d0c: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x270d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270d10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x270d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x270d14: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x270d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x270d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d1c: 0x9063000a  lbu         $v1, 0xA($v1)
    ctx->pc = 0x270d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x270d20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x270d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x270d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x270d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270d28: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x270d28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270d2c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x270D2Cu;
    SET_GPR_U32(ctx, 31, 0x270D34u);
    ctx->pc = 0x270D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D2Cu;
    // 0x270d30: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x270D2Cu, 0x270D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D34u;
label_270d34:
    // 0x270d34: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x270d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x270d38: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x270D38u;
    SET_GPR_U32(ctx, 31, 0x270D40u);
    ctx->pc = 0x270D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D38u;
    // 0x270d3c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x270D38u, 0x270D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D40u;
label_270d40:
    // 0x270d40: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x270d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x270d44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x270d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x270d48: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x270d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x270d4c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x270D4Cu;
    SET_GPR_U32(ctx, 31, 0x270D54u);
    ctx->pc = 0x270D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D4Cu;
    // 0x270d50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x270D4Cu, 0x270D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D54u;
label_270d54:
    // 0x270d54: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x270d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x270d58: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x270D58u;
    SET_GPR_U32(ctx, 31, 0x270D60u);
    ctx->pc = 0x270D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D58u;
    // 0x270d5c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x270D58u, 0x270D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D60u;
label_270d60:
    // 0x270d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d64: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x270D64u;
    SET_GPR_U32(ctx, 31, 0x270D6Cu);
    ctx->pc = 0x270D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D64u;
    // 0x270d68: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x270D64u, 0x270D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D6Cu;
label_270d6c:
    // 0x270d6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x270d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x270d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d74: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x270d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270d78: 0x266401b0  addiu       $a0, $s3, 0x1B0
    ctx->pc = 0x270d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 432));
    // 0x270d7c: 0x9048000c  lbu         $t0, 0xC($v0)
    ctx->pc = 0x270d7cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x270d80: 0xc074458  jal         func_1D1160
    ctx->pc = 0x270D80u;
    SET_GPR_U32(ctx, 31, 0x270D88u);
    ctx->pc = 0x270D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D80u;
    // 0x270d84: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x270D80u, 0x270D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D88u;
label_270d88:
    // 0x270d88: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x270d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270d8c: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x270d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x270d90: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x270d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270d94: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x270D94u;
    {
        const bool branch_taken_0x270d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D94u;
        // 0x270d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d94) {
            ctx->pc = 0x270DE8u;
            goto label_270de8;
        }
    }
    ctx->pc = 0x270D9Cu;
    // 0x270d9c: 0x0  nop
    ctx->pc = 0x270d9cu;
    // NOP
label_270da0:
    // 0x270da0: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x270da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x270da4: 0x8e67008c  lw          $a3, 0x8C($s3)
    ctx->pc = 0x270da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x270da8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x270da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x270dac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x270dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x270db0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x270db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x270db4: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x270db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x270db8: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x270db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x270dbc: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x270dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x270dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270dc4: 0xc075f58  jal         func_1D7D60
    ctx->pc = 0x270DC4u;
    SET_GPR_U32(ctx, 31, 0x270DCCu);
    ctx->pc = 0x270DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DC4u;
    // 0x270dc8: 0x266b0090  addiu       $t3, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D60u, 0x270DC4u, 0x270DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DCCu;
label_270dcc:
    // 0x270dcc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x270dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x270dd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x270dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x270dd4: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x270dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x270dd8: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x270dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x270ddc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x270ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270de0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x270DE0u;
    {
        const bool branch_taken_0x270de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270de0) {
            ctx->pc = 0x270DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270da0;
        }
    }
    ctx->pc = 0x270DE8u;
label_270de8:
    // 0x270de8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x270de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x270dec: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x270decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x270df0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x270df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x270df4: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x270DF4u;
    SET_GPR_U32(ctx, 31, 0x270DFCu);
    ctx->pc = 0x270DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DF4u;
    // 0x270df8: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x270DF4u, 0x270DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DFCu;
label_270dfc:
    // 0x270dfc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x270dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x270e00: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x270E00u;
    {
        const bool branch_taken_0x270e00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E00u;
        // 0x270e04: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e00) {
            ctx->pc = 0x270E28u;
            goto label_270e28;
        }
    }
    ctx->pc = 0x270E08u;
    // 0x270e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e0c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x270E0Cu;
    SET_GPR_U32(ctx, 31, 0x270E14u);
    ctx->pc = 0x270E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E0Cu;
    // 0x270e10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x270E0Cu, 0x270E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E14u;
label_270e14:
    // 0x270e14: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x270e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x270e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x270e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e20: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x270E20u;
    SET_GPR_U32(ctx, 31, 0x270E28u);
    ctx->pc = 0x270E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E20u;
    // 0x270e24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x270E20u, 0x270E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E28u;
label_270e28:
    // 0x270e28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x270e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270e2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270e2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270e30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x270E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E3Cu;
        // 0x270e40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270E44u;
}
