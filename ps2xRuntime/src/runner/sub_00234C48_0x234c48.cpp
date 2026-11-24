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

// Function: sub_00234C48
// Address: 0x234c48 - 0x234e34
void sub_00234C48_0x234c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234C48_0x234c48");
#endif

    switch (ctx->pc) {
        case 0x234c84u: goto label_234c84;
        case 0x234c94u: goto label_234c94;
        case 0x234ca4u: goto label_234ca4;
        case 0x234d74u: goto label_234d74;
        case 0x234d8cu: goto label_234d8c;
        case 0x234d9cu: goto label_234d9c;
        case 0x234da8u: goto label_234da8;
        case 0x234db0u: goto label_234db0;
        case 0x234db8u: goto label_234db8;
        case 0x234dc0u: goto label_234dc0;
        case 0x234dccu: goto label_234dcc;
        case 0x234dd8u: goto label_234dd8;
        case 0x234decu: goto label_234dec;
        case 0x234e00u: goto label_234e00;
        default: break;
    }

    ctx->pc = 0x234c48u;

    // 0x234c48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234c4c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234c50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x234c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x234c54: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x234c54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
    // 0x234c58: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x234c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x234c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x234c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x234c64: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x234c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x234c68: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x234c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x234c6c: 0x8e43fc14  lw          $v1, -0x3EC($s2)
    ctx->pc = 0x234c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BFC14u));
    // 0x234c70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x234c70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BFC10u));
    // 0x234c74: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x234C74u;
    {
        const bool branch_taken_0x234c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234c74) {
            ctx->pc = 0x234C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234C74u;
            // 0x234c78: 0x2643fc14  addiu       $v1, $s2, -0x3EC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E10u;
            goto label_234e10;
        }
    }
    ctx->pc = 0x234C7Cu;
    // 0x234c7c: 0xc094ea8  jal         func_253AA0
    ctx->pc = 0x234C7Cu;
    SET_GPR_U32(ctx, 31, 0x234C84u);
    ctx->pc = 0x253AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253AA0u, 0x234C7Cu, 0x234C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C84u;
label_234c84:
    // 0x234c84: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x234c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x234c88: 0x24843350  addiu       $a0, $a0, 0x3350
    ctx->pc = 0x234c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13136));
    // 0x234c8c: 0xc094de0  jal         func_253780
    ctx->pc = 0x234C8Cu;
    SET_GPR_U32(ctx, 31, 0x234C94u);
    ctx->pc = 0x234C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C8Cu;
    // 0x234c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x234C8Cu, 0x234C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C94u;
label_234c94:
    // 0x234c94: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x234c98: 0x248433d8  addiu       $a0, $a0, 0x33D8
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13272));
    // 0x234c9c: 0xc094de6  jal         func_253798
    ctx->pc = 0x234C9Cu;
    SET_GPR_U32(ctx, 31, 0x234CA4u);
    ctx->pc = 0x234CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C9Cu;
    // 0x234ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253798u, 0x234C9Cu, 0x234CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CA4u;
label_234ca4:
    // 0x234ca4: 0x56200018  bnel        $s1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x234CA4u;
    {
        const bool branch_taken_0x234ca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ca4) {
            ctx->pc = 0x234CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234CA4u;
            // 0x234ca8: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D08u;
            goto label_234d08;
        }
    }
    ctx->pc = 0x234CACu;
    // 0x234cac: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x234cacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x234cb0: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x234cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x234cb4: 0x2602fc20  addiu       $v0, $s0, -0x3E0
    ctx->pc = 0x234cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966304));
    // 0x234cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234cbc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x234cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234cc0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x234cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x234cc4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x234cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x234cc8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x234cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x234ccc: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x234cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x234cd0: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x234cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x234cd4: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x234cd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x4BFC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC34u, _value); } while (0);
    // 0x234cd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC20u, _value); } while (0);
    // 0x234cdc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x234cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BFC24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC24u, _value); } while (0);
    // 0x234ce0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x234ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4BFC28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC28u, _value); } while (0);
    // 0x234ce4: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x234ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4BFC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC2Cu, _value); } while (0);
    // 0x234ce8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x234ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x4BFC30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC30u, _value); } while (0);
    // 0x234cec: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x234cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x4BFC38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC38u, _value); } while (0);
    // 0x234cf0: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x234cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x4BFC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC3Cu, _value); } while (0);
    // 0x234cf4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x234cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFC4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC4Cu, _value); } while (0);
    // 0x234cf8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x234cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFC40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC40u, _value); } while (0);
    // 0x234cfc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x234cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFC44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC44u, _value); } while (0);
    // 0x234d00: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x234D00u;
    {
        const bool branch_taken_0x234d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D00u;
        // 0x234d04: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d00) {
            ctx->pc = 0x234D6Cu;
            goto label_234d6c;
        }
    }
    ctx->pc = 0x234D08u;
label_234d08:
    // 0x234d08: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x234d08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x234d0c: 0x2604fc20  addiu       $a0, $s0, -0x3E0
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966304));
    // 0x234d10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x234d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x234d14: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x234d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC34u, _value); } while (0);
    // 0x234d18: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x234d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC40u, _value); } while (0);
    // 0x234d1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x234d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x234d20: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x234d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x234d24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x234d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC20u, _value); } while (0);
    // 0x234d28: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x234d28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4BFC48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC48u, _value); } while (0);
    // 0x234d2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x234d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x234d30: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x234d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC24u, _value); } while (0);
    // 0x234d34: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x234d38: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x234d38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC28u, _value); } while (0);
    // 0x234d3c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x234d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x234d40: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x234d40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC2Cu, _value); } while (0);
    // 0x234d44: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x234d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x234d48: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x234d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC30u, _value); } while (0);
    // 0x234d4c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x234d50: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x234d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC38u, _value); } while (0);
    // 0x234d54: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x234d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x234d58: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x234d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC3Cu, _value); } while (0);
    // 0x234d5c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x234d60: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x234d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC44u, _value); } while (0);
    // 0x234d64: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x234d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x234d68: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x234d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC4Cu, _value); } while (0);
label_234d6c:
    // 0x234d6c: 0xc0437b4  jal         func_10DED0
    ctx->pc = 0x234D6Cu;
    SET_GPR_U32(ctx, 31, 0x234D74u);
    ctx->pc = 0x234D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D6Cu;
    // 0x234d70: 0x3c11004c  lui         $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DED0u, 0x234D6Cu, 0x234D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D74u;
label_234d74:
    // 0x234d74: 0x2631fcb8  addiu       $s1, $s1, -0x348
    ctx->pc = 0x234d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966456));
    // 0x234d78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x234d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x234d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x234d80: 0x2610fc20  addiu       $s0, $s0, -0x3E0
    ctx->pc = 0x234d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966304));
    // 0x234d84: 0xc0437b8  jal         func_10DEE0
    ctx->pc = 0x234D84u;
    SET_GPR_U32(ctx, 31, 0x234D8Cu);
    ctx->pc = 0x234D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D84u;
    // 0x234d88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEE0u, 0x234D84u, 0x234D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D8Cu;
label_234d8c:
    // 0x234d8c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x234d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234d94: 0xc08cf04  jal         func_233C10
    ctx->pc = 0x234D94u;
    SET_GPR_U32(ctx, 31, 0x234D9Cu);
    ctx->pc = 0x234D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234D94u;
    // 0x234d98: 0xac627548  sw          $v0, 0x7548($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 30024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C10u, 0x234D94u, 0x234D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D9Cu;
label_234d9c:
    // 0x234d9c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x234d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x234da0: 0xc08cf2e  jal         func_233CB8
    ctx->pc = 0x234DA0u;
    SET_GPR_U32(ctx, 31, 0x234DA8u);
    ctx->pc = 0x234DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DA0u;
    // 0x234da4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233CB8u, 0x234DA0u, 0x234DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DA8u;
label_234da8:
    // 0x234da8: 0xc08cf5c  jal         func_233D70
    ctx->pc = 0x234DA8u;
    SET_GPR_U32(ctx, 31, 0x234DB0u);
    ctx->pc = 0x233D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D70u, 0x234DA8u, 0x234DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DB0u;
label_234db0:
    // 0x234db0: 0xc08cf7e  jal         func_233DF8
    ctx->pc = 0x234DB0u;
    SET_GPR_U32(ctx, 31, 0x234DB8u);
    ctx->pc = 0x233DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DF8u, 0x234DB0u, 0x234DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DB8u;
label_234db8:
    // 0x234db8: 0xc08cfa0  jal         func_233E80
    ctx->pc = 0x234DB8u;
    SET_GPR_U32(ctx, 31, 0x234DC0u);
    ctx->pc = 0x233E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233E80u, 0x234DB8u, 0x234DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DC0u;
label_234dc0:
    // 0x234dc0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x234dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x234dc4: 0xc08cfc6  jal         func_233F18
    ctx->pc = 0x234DC4u;
    SET_GPR_U32(ctx, 31, 0x234DCCu);
    ctx->pc = 0x234DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DC4u;
    // 0x234dc8: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233F18u, 0x234DC4u, 0x234DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DCCu;
label_234dcc:
    // 0x234dcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x234dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x234dd0: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x234DD0u;
    SET_GPR_U32(ctx, 31, 0x234DD8u);
    ctx->pc = 0x234DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DD0u;
    // 0x234dd4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x234DD0u, 0x234DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DD8u;
label_234dd8:
    // 0x234dd8: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x234dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x234ddc: 0x24a53530  addiu       $a1, $a1, 0x3530
    ctx->pc = 0x234ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
    // 0x234de0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x234de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x234de4: 0xc094daa  jal         func_2536A8
    ctx->pc = 0x234DE4u;
    SET_GPR_U32(ctx, 31, 0x234DECu);
    ctx->pc = 0x234DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DE4u;
    // 0x234de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2536A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536A8u, 0x234DE4u, 0x234DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DECu;
label_234dec:
    // 0x234dec: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x234decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x234df0: 0x24a53558  addiu       $a1, $a1, 0x3558
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13656));
    // 0x234df4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x234df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x234df8: 0xc094daa  jal         func_2536A8
    ctx->pc = 0x234DF8u;
    SET_GPR_U32(ctx, 31, 0x234E00u);
    ctx->pc = 0x234DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DF8u;
    // 0x234dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2536A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536A8u, 0x234DF8u, 0x234E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E00u;
label_234e00:
    // 0x234e00: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x234e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234e08: 0xac62fc18  sw          $v0, -0x3E8($v1)
    ctx->pc = 0x234e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC18u, _value); } while (0);
    // 0x234e0c: 0x2643fc14  addiu       $v1, $s2, -0x3EC
    ctx->pc = 0x234e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966292));
label_234e10:
    // 0x234e10: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x234e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234e14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x234e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234e18: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x234e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234e1c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x234e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234e20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234e24: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x234e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x234e28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x234e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x234e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x234E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E2Cu;
        // 0x234e30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234E34u;
}
