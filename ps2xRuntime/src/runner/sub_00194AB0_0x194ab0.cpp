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

// Function: sub_00194AB0
// Address: 0x194ab0 - 0x194d6c
void sub_00194AB0_0x194ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194AB0_0x194ab0");
#endif

    switch (ctx->pc) {
        case 0x194ae4u: goto label_194ae4;
        case 0x194b24u: goto label_194b24;
        case 0x194b60u: goto label_194b60;
        case 0x194b78u: goto label_194b78;
        case 0x194b88u: goto label_194b88;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194bf0u: goto label_194bf0;
        case 0x194c60u: goto label_194c60;
        case 0x194c78u: goto label_194c78;
        case 0x194c88u: goto label_194c88;
        case 0x194cb8u: goto label_194cb8;
        case 0x194cdcu: goto label_194cdc;
        case 0x194cf0u: goto label_194cf0;
        default: break;
    }

    ctx->pc = 0x194ab0u;

    // 0x194ab0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x194ab4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x194ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x194ab8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x194ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x194abc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x194abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x194ac0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x194ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ac4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x194ac8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x194ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194acc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ad0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194ad4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x194ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ad8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x194ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194adc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x194ADCu;
    SET_GPR_U32(ctx, 31, 0x194AE4u);
    ctx->pc = 0x194AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194ADCu;
    // 0x194ae0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x194ADCu, 0x194AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AE4u;
label_194ae4:
    // 0x194ae4: 0x8f8786b4  lw          $a3, -0x794C($gp)
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194ae8: 0x26680001  addiu       $t0, $s3, 0x1
    ctx->pc = 0x194ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x194aec: 0x8f8386b0  lw          $v1, -0x7950($gp)
    ctx->pc = 0x194aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x194af0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x194af4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194af8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x194af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194afc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b00: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x194b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x194b04: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x194b04u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194b08: 0x0  nop
    ctx->pc = 0x194b08u;
    // NOP
    // 0x194b0c: 0x0  nop
    ctx->pc = 0x194b0cu;
    // NOP
    // 0x194b10: 0x8010  mfhi        $s0
    ctx->pc = 0x194b10u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194b14: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x194b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194b18: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x194b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194b1c: 0xc065270  jal         func_1949C0
    ctx->pc = 0x194B1Cu;
    SET_GPR_U32(ctx, 31, 0x194B24u);
    ctx->pc = 0x194B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B1Cu;
    // 0x194b20: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1949C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1949C0u, 0x194B1Cu, 0x194B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B24u;
label_194b24:
    // 0x194b24: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x194b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x194b28: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x194b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194b2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x194b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194b30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x194b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x194b34: 0x6210042  bgez        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x194B34u;
    {
        const bool branch_taken_0x194b34 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x194B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B34u;
        // 0x194b38: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b34) {
            ctx->pc = 0x194C40u;
            goto label_194c40;
        }
    }
    ctx->pc = 0x194B3Cu;
    // 0x194b3c: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194b40: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x194b44: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x194b44u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194b48: 0x0  nop
    ctx->pc = 0x194b48u;
    // NOP
    // 0x194b4c: 0x0  nop
    ctx->pc = 0x194b4cu;
    // NOP
    // 0x194b50: 0x8010  mfhi        $s0
    ctx->pc = 0x194b50u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194b54: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x194B54u;
    {
        const bool branch_taken_0x194b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B54u;
        // 0x194b58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b54) {
            ctx->pc = 0x194C28u;
            goto label_194c28;
        }
    }
    ctx->pc = 0x194B5Cu;
    // 0x194b5c: 0x0  nop
    ctx->pc = 0x194b5cu;
    // NOP
label_194b60:
    // 0x194b60: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x194b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x194b64: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x194b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x194b68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194b6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b70: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194B70u;
    SET_GPR_U32(ctx, 31, 0x194B78u);
    ctx->pc = 0x194B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B70u;
    // 0x194b74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194B70u, 0x194B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B78u;
label_194b78:
    // 0x194b78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x194b7c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194b80: 0xc041468  jal         func_1051A0
    ctx->pc = 0x194B80u;
    SET_GPR_U32(ctx, 31, 0x194B88u);
    ctx->pc = 0x194B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B80u;
    // 0x194b84: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x194B80u, 0x194B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B88u;
label_194b88:
    // 0x194b88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x194b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194b8c: 0x0  nop
    ctx->pc = 0x194b8cu;
    // NOP
    // 0x194b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194b94: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x194B94u;
    {
        const bool branch_taken_0x194b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B94u;
        // 0x194b98: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b94) {
            ctx->pc = 0x194BE0u;
            goto label_194be0;
        }
    }
    ctx->pc = 0x194B9Cu;
    // 0x194b9c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x194ba0: 0x2442d8f0  addiu       $v0, $v0, -0x2710
    ctx->pc = 0x194ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957296));
    // 0x194ba4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194ba8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x194ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194bac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x194bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194bb0: 0xc041460  jal         func_105180
    ctx->pc = 0x194BB0u;
    SET_GPR_U32(ctx, 31, 0x194BB8u);
    ctx->pc = 0x194BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BB0u;
    // 0x194bb4: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x194BB0u, 0x194BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB8u;
label_194bb8:
    // 0x194bb8: 0x8f8386b0  lw          $v1, -0x7950($gp)
    ctx->pc = 0x194bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x194bbc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x194bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194bc0: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x194bc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194bc8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x194bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194bcc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bd0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x194bd4: 0xc065270  jal         func_1949C0
    ctx->pc = 0x194BD4u;
    SET_GPR_U32(ctx, 31, 0x194BDCu);
    ctx->pc = 0x194BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BD4u;
    // 0x194bd8: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1949C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1949C0u, 0x194BD4u, 0x194BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BDCu;
label_194bdc:
    // 0x194bdc: 0x8f9186b4  lw          $s1, -0x794C($gp)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
label_194be0:
    // 0x194be0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x194be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194be4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x194be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194be8: 0xc041460  jal         func_105180
    ctx->pc = 0x194BE8u;
    SET_GPR_U32(ctx, 31, 0x194BF0u);
    ctx->pc = 0x194BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BE8u;
    // 0x194bec: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x194BE8u, 0x194BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BF0u;
label_194bf0:
    // 0x194bf0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x194bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bf8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194bfc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x194bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x194c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194c04: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x194c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194c08: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x194c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x194c0c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x194c0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x194c10: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x194C10u;
    {
        const bool branch_taken_0x194c10 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x194C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C10u;
        // 0x194c14: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c10) {
            ctx->pc = 0x194C20u;
            goto label_194c20;
        }
    }
    ctx->pc = 0x194C18u;
    // 0x194c18: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194c1c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x194c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_194c20:
    // 0x194c20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194c24: 0x0  nop
    ctx->pc = 0x194c24u;
    // NOP
label_194c28:
    // 0x194c28: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194c2c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x194c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x194c30: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x194C30u;
    {
        const bool branch_taken_0x194c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c30) {
            ctx->pc = 0x194B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194b60;
        }
    }
    ctx->pc = 0x194C38u;
    // 0x194c38: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x194C38u;
    {
        const bool branch_taken_0x194c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c38) {
            ctx->pc = 0x194D40u;
            goto label_194d40;
        }
    }
    ctx->pc = 0x194C40u;
label_194c40:
    // 0x194c40: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194c44: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x194c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x194c48: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x194c48u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194c4c: 0x0  nop
    ctx->pc = 0x194c4cu;
    // NOP
    // 0x194c50: 0x0  nop
    ctx->pc = 0x194c50u;
    // NOP
    // 0x194c54: 0x8010  mfhi        $s0
    ctx->pc = 0x194c54u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194c58: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x194C58u;
    {
        const bool branch_taken_0x194c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C58u;
        // 0x194c5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c58) {
            ctx->pc = 0x194D30u;
            goto label_194d30;
        }
    }
    ctx->pc = 0x194C60u;
label_194c60:
    // 0x194c60: 0x8f8286b0  lw          $v0, -0x7950($gp)
    ctx->pc = 0x194c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x194c64: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x194c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194c68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194c6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c70: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194C70u;
    SET_GPR_U32(ctx, 31, 0x194C78u);
    ctx->pc = 0x194C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C70u;
    // 0x194c74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194C70u, 0x194C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C78u;
label_194c78:
    // 0x194c78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x194c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x194c7c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194c80: 0xc041468  jal         func_1051A0
    ctx->pc = 0x194C80u;
    SET_GPR_U32(ctx, 31, 0x194C88u);
    ctx->pc = 0x194C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C80u;
    // 0x194c84: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x194C80u, 0x194C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C88u;
label_194c88:
    // 0x194c88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x194c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194c8c: 0x0  nop
    ctx->pc = 0x194c8cu;
    // NOP
    // 0x194c90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194c94: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x194C94u;
    {
        const bool branch_taken_0x194c94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C94u;
        // 0x194c98: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c94) {
            ctx->pc = 0x194CE0u;
            goto label_194ce0;
        }
    }
    ctx->pc = 0x194C9Cu;
    // 0x194c9c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x194ca0: 0x2442d900  addiu       $v0, $v0, -0x2700
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957312));
    // 0x194ca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194ca8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x194ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194cac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x194cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x194cb0: 0xc041460  jal         func_105180
    ctx->pc = 0x194CB0u;
    SET_GPR_U32(ctx, 31, 0x194CB8u);
    ctx->pc = 0x194CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CB0u;
    // 0x194cb4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x194CB0u, 0x194CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CB8u;
label_194cb8:
    // 0x194cb8: 0x8f8386b0  lw          $v1, -0x7950($gp)
    ctx->pc = 0x194cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936240)));
    // 0x194cbc: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x194cc0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194cc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194cc8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194ccc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cd0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x194cd4: 0xc065270  jal         func_1949C0
    ctx->pc = 0x194CD4u;
    SET_GPR_U32(ctx, 31, 0x194CDCu);
    ctx->pc = 0x194CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CD4u;
    // 0x194cd8: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1949C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1949C0u, 0x194CD4u, 0x194CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CDCu;
label_194cdc:
    // 0x194cdc: 0x8f9186b4  lw          $s1, -0x794C($gp)
    ctx->pc = 0x194cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
label_194ce0:
    // 0x194ce0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194ce4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x194ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194ce8: 0xc041460  jal         func_105180
    ctx->pc = 0x194CE8u;
    SET_GPR_U32(ctx, 31, 0x194CF0u);
    ctx->pc = 0x194CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CE8u;
    // 0x194cec: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x194CE8u, 0x194CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CF0u;
label_194cf0:
    // 0x194cf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cf4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x194cf8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x194cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x194cfc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x194cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194d00: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x194d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194d04: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x194d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194d08: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x194d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194d10: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x194d10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x194d14: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x194d14u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x194d18: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194d1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x194d1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194d20: 0x0  nop
    ctx->pc = 0x194d20u;
    // NOP
    // 0x194d24: 0x0  nop
    ctx->pc = 0x194d24u;
    // NOP
    // 0x194d28: 0x8010  mfhi        $s0
    ctx->pc = 0x194d28u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194d2c: 0x0  nop
    ctx->pc = 0x194d2cu;
    // NOP
label_194d30:
    // 0x194d30: 0x8f8286b4  lw          $v0, -0x794C($gp)
    ctx->pc = 0x194d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936244)));
    // 0x194d34: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x194d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x194d38: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x194D38u;
    {
        const bool branch_taken_0x194d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d38) {
            ctx->pc = 0x194C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194c60;
        }
    }
    ctx->pc = 0x194D40u;
label_194d40:
    // 0x194d40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x194d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x194d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194d4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x194d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194d50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x194d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x194d54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x194d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194d58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194d5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194d60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194d64: 0x3e00008  jr          $ra
    ctx->pc = 0x194D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D64u;
        // 0x194d68: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D6Cu;
}
