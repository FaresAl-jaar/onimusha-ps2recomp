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

// Function: sub_001C5AF0
// Address: 0x1c5af0 - 0x1c5d4c
void sub_001C5AF0_0x1c5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5AF0_0x1c5af0");
#endif

    switch (ctx->pc) {
        case 0x1c5b64u: goto label_1c5b64;
        case 0x1c5b78u: goto label_1c5b78;
        case 0x1c5b8cu: goto label_1c5b8c;
        case 0x1c5b98u: goto label_1c5b98;
        case 0x1c5be8u: goto label_1c5be8;
        case 0x1c5bf4u: goto label_1c5bf4;
        case 0x1c5c18u: goto label_1c5c18;
        case 0x1c5c2cu: goto label_1c5c2c;
        case 0x1c5c3cu: goto label_1c5c3c;
        case 0x1c5c4cu: goto label_1c5c4c;
        case 0x1c5c60u: goto label_1c5c60;
        case 0x1c5c68u: goto label_1c5c68;
        case 0x1c5c74u: goto label_1c5c74;
        case 0x1c5c80u: goto label_1c5c80;
        case 0x1c5cd4u: goto label_1c5cd4;
        case 0x1c5ce8u: goto label_1c5ce8;
        case 0x1c5d1cu: goto label_1c5d1c;
        case 0x1c5d30u: goto label_1c5d30;
        default: break;
    }

    ctx->pc = 0x1c5af0u;

    // 0x1c5af0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c5af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c5af4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5af8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c5af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c5afc: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x1c5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
    // 0x1c5b00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c5b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5b04: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x1c5b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5b08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5b0c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1c5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c5b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5b14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c5b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5b1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c5b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b20: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1c5b20u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40F630u));
    // 0x1c5b24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c5b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b28: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1c5b2c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1c5b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c5b30: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x1c5b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    // 0x1c5b34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c5b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b38: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1c5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1c5b3c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5b40: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c5b40u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40F640u));
    // 0x1c5b44: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x1c5b48: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1c5b48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1c5b4c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c5b4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F650u));
    // 0x1c5b50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c5b50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c5b54: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x1c5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1c5b58: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1c5b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1c5b5c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B64u);
    ctx->pc = 0x1C5B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B5Cu;
    // 0x1c5b60: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5B5Cu, 0x1C5B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B64u;
label_1c5b64:
    // 0x1c5b64: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1c5b68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5b6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b70: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5B70u;
    SET_GPR_U32(ctx, 31, 0x1C5B78u);
    ctx->pc = 0x1C5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B70u;
    // 0x1c5b74: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5B70u, 0x1C5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B78u;
label_1c5b78:
    // 0x1c5b78: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1c5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1c5b7c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c5b80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b84: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5B84u;
    SET_GPR_U32(ctx, 31, 0x1C5B8Cu);
    ctx->pc = 0x1C5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B84u;
    // 0x1c5b88: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5B84u, 0x1C5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B8Cu;
label_1c5b8c:
    // 0x1c5b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b90: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C5B90u;
    SET_GPR_U32(ctx, 31, 0x1C5B98u);
    ctx->pc = 0x1C5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B90u;
    // 0x1c5b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C5B90u, 0x1C5B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B98u;
label_1c5b98:
    // 0x1c5b98: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x1c5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c5b9c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C5B9Cu;
    {
        const bool branch_taken_0x1c5b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B9Cu;
        // 0x1c5ba0: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b9c) {
            ctx->pc = 0x1C5BC8u;
            goto label_1c5bc8;
        }
    }
    ctx->pc = 0x1C5BA4u;
    // 0x1c5ba4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5BA4u;
    {
        const bool branch_taken_0x1c5ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5ba4) {
            ctx->pc = 0x1C5BC8u;
            goto label_1c5bc8;
        }
    }
    ctx->pc = 0x1C5BACu;
    // 0x1c5bac: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c5bb0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5BB0u;
    {
        const bool branch_taken_0x1c5bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BB0u;
        // 0x1c5bb4: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bb0) {
            ctx->pc = 0x1C5BC8u;
            goto label_1c5bc8;
        }
    }
    ctx->pc = 0x1C5BB8u;
    // 0x1c5bb8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5BB8u;
    {
        const bool branch_taken_0x1c5bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5bb8) {
            ctx->pc = 0x1C5BC8u;
            goto label_1c5bc8;
        }
    }
    ctx->pc = 0x1C5BC0u;
    // 0x1c5bc0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C5BC0u;
    {
        const bool branch_taken_0x1c5bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bc0) {
            ctx->pc = 0x1C5CE8u;
            goto label_1c5ce8;
        }
    }
    ctx->pc = 0x1C5BC8u;
label_1c5bc8:
    // 0x1c5bc8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c5bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5bcc: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c5bd0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c5bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c5bd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5bd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c5bdc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c5bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5be0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C5BE0u;
    SET_GPR_U32(ctx, 31, 0x1C5BE8u);
    ctx->pc = 0x1C5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BE0u;
    // 0x1c5be4: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C5BE0u, 0x1C5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BE8u;
label_1c5be8:
    // 0x1c5be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c5be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c5bec: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5BECu;
    SET_GPR_U32(ctx, 31, 0x1C5BF4u);
    ctx->pc = 0x1C5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BECu;
    // 0x1c5bf0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5BECu, 0x1C5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BF4u;
label_1c5bf4:
    // 0x1c5bf4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c5bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c5bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5bfc: 0x0  nop
    ctx->pc = 0x1c5bfcu;
    // NOP
    // 0x1c5c00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5c04: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C5C04u;
    {
        const bool branch_taken_0x1c5c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c04) {
            ctx->pc = 0x1C5C30u;
            goto label_1c5c30;
        }
    }
    ctx->pc = 0x1C5C0Cu;
    // 0x1c5c0c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c5c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5c10: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5C10u;
    SET_GPR_U32(ctx, 31, 0x1C5C18u);
    ctx->pc = 0x1C5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C10u;
    // 0x1c5c14: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5C10u, 0x1C5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C18u;
label_1c5c18:
    // 0x1c5c18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5c1c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c5c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5c20: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5c24: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5C24u;
    SET_GPR_U32(ctx, 31, 0x1C5C2Cu);
    ctx->pc = 0x1C5C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C24u;
    // 0x1c5c28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5C24u, 0x1C5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C2Cu;
label_1c5c2c:
    // 0x1c5c2c: 0x0  nop
    ctx->pc = 0x1c5c2cu;
    // NOP
label_1c5c30:
    // 0x1c5c30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c5c34: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5C34u;
    SET_GPR_U32(ctx, 31, 0x1C5C3Cu);
    ctx->pc = 0x1C5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C34u;
    // 0x1c5c38: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5C34u, 0x1C5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C3Cu;
label_1c5c3c:
    // 0x1c5c3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c5c3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c5c40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5c44: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5C44u;
    SET_GPR_U32(ctx, 31, 0x1C5C4Cu);
    ctx->pc = 0x1C5C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C44u;
    // 0x1c5c48: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5C44u, 0x1C5C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C4Cu;
label_1c5c4c:
    // 0x1c5c4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5c50: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1c5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5c54: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5c58: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5C58u;
    SET_GPR_U32(ctx, 31, 0x1C5C60u);
    ctx->pc = 0x1C5C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C58u;
    // 0x1c5c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5C58u, 0x1C5C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C60u;
label_1c5c60:
    // 0x1c5c60: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C5C60u;
    SET_GPR_U32(ctx, 31, 0x1C5C68u);
    ctx->pc = 0x1C5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C60u;
    // 0x1c5c64: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C5C60u, 0x1C5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C68u;
label_1c5c68:
    // 0x1c5c68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5c6c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C74u);
    ctx->pc = 0x1C5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C6Cu;
    // 0x1c5c70: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C5C6Cu, 0x1C5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C74u;
label_1c5c74:
    // 0x1c5c74: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5c78: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5C78u;
    SET_GPR_U32(ctx, 31, 0x1C5C80u);
    ctx->pc = 0x1C5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C78u;
    // 0x1c5c7c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5C78u, 0x1C5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C80u;
label_1c5c80:
    // 0x1c5c80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c84: 0x0  nop
    ctx->pc = 0x1c5c84u;
    // NOP
    // 0x1c5c88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5c8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5C8Cu;
    {
        const bool branch_taken_0x1c5c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C8Cu;
        // 0x1c5c90: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c8c) {
            ctx->pc = 0x1C5C98u;
            goto label_1c5c98;
        }
    }
    ctx->pc = 0x1C5C94u;
    // 0x1c5c94: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c5c94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c5c98:
    // 0x1c5c98: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5c9c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c5c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5ca0: 0x0  nop
    ctx->pc = 0x1c5ca0u;
    // NOP
    // 0x1c5ca4: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1c5ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5ca8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1C5CA8u;
    {
        const bool branch_taken_0x1c5ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5ca8) {
            ctx->pc = 0x1C5CE8u;
            goto label_1c5ce8;
        }
    }
    ctx->pc = 0x1C5CB0u;
    // 0x1c5cb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5cb4: 0x0  nop
    ctx->pc = 0x1c5cb4u;
    // NOP
    // 0x1c5cb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5cbc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5CBCu;
    {
        const bool branch_taken_0x1c5cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CBCu;
        // 0x1c5cc0: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cbc) {
            ctx->pc = 0x1C5CC8u;
            goto label_1c5cc8;
        }
    }
    ctx->pc = 0x1C5CC4u;
    // 0x1c5cc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c5cc8:
    // 0x1c5cc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5ccc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5CCCu;
    SET_GPR_U32(ctx, 31, 0x1C5CD4u);
    ctx->pc = 0x1C5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CCCu;
    // 0x1c5cd0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5CCCu, 0x1C5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CD4u;
label_1c5cd4:
    // 0x1c5cd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5cd8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c5cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5cdc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5ce0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5CE0u;
    SET_GPR_U32(ctx, 31, 0x1C5CE8u);
    ctx->pc = 0x1C5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CE0u;
    // 0x1c5ce4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5CE0u, 0x1C5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CE8u;
label_1c5ce8:
    // 0x1c5ce8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c5ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c5cec: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x1c5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1c5cf0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5cf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5cf8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C5CF8u;
    {
        const bool branch_taken_0x1c5cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CF8u;
        // 0x1c5cfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cf8) {
            ctx->pc = 0x1C5D30u;
            goto label_1c5d30;
        }
    }
    ctx->pc = 0x1C5D00u;
    // 0x1c5d00: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5D00u;
    {
        const bool branch_taken_0x1c5d00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5d00) {
            ctx->pc = 0x1C5D30u;
            goto label_1c5d30;
        }
    }
    ctx->pc = 0x1C5D08u;
    // 0x1c5d08: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x1c5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x1c5d0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5d14: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5D14u;
    SET_GPR_U32(ctx, 31, 0x1C5D1Cu);
    ctx->pc = 0x1C5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D14u;
    // 0x1c5d18: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5D14u, 0x1C5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D1Cu;
label_1c5d1c:
    // 0x1c5d1c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5d20: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c5d24: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c5d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5d28: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5D28u;
    SET_GPR_U32(ctx, 31, 0x1C5D30u);
    ctx->pc = 0x1C5D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D28u;
    // 0x1c5d2c: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5D28u, 0x1C5D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D30u;
label_1c5d30:
    // 0x1c5d30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c5d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5d34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c5d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5d38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D44u;
        // 0x1c5d48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5D4Cu;
}
