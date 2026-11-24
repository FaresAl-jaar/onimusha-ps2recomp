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

// Function: sub_001D2FA0
// Address: 0x1d2fa0 - 0x1d3150
void sub_001D2FA0_0x1d2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2FA0_0x1d2fa0");
#endif

    switch (ctx->pc) {
        case 0x1d3040u: goto label_1d3040;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3080u: goto label_1d3080;
        case 0x1d3094u: goto label_1d3094;
        default: break;
    }

    ctx->pc = 0x1d2fa0u;

    // 0x1d2fa0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d2fa0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2fa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2fa8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d2fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d2fac: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d2fb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d2fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d2fb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d2fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d2fb8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d2fbc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d2fc0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d2fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d2fc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d2fc8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d2fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d2fcc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1d2fccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fd0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d2fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d2fd4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d2fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d2fd8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d2fd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1d2fdc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d2fe0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d2fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d2fe4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d2fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fe8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d2fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d2fec: 0x59043  sra         $s2, $a1, 1
    ctx->pc = 0x1d2fecu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d2ff0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2ff4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d2ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ff8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d2ff8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d2ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3000: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3000u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d3004: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3004u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d3008: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1d3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d300c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d300cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d3010: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3014: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d3018: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d301c: 0x46010602  mul.s       $f24, $f0, $f1
    ctx->pc = 0x1d301cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3020: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1d3020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1d3024: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1d3024u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1d3028: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1d3028u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1d302c: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1d302cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1d3030: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D3030u;
    {
        const bool branch_taken_0x1d3030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3030u;
        // 0x1d3034: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3030) {
            ctx->pc = 0x1D3100u;
            goto label_1d3100;
        }
    }
    ctx->pc = 0x1D3038u;
    // 0x1d3038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d303c: 0x12b840  sll         $s7, $s2, 1
    ctx->pc = 0x1d303cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1d3040:
    // 0x1d3040: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d3040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d3044: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3044u;
    SET_GPR_U32(ctx, 31, 0x1D304Cu);
    ctx->pc = 0x1D3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3044u;
    // 0x1d3048: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3044u, 0x1D304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D304Cu;
label_1d304c:
    // 0x1d304c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1d304cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3050: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d3054: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x1d3054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d3058: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d305c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3060: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3068: 0x295b021  addu        $s6, $s4, $s5
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1d306c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1d306cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1d3070: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1d3070u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1d3074: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1d3074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3078: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3078u;
    SET_GPR_U32(ctx, 31, 0x1D3080u);
    ctx->pc = 0x1D307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3078u;
    // 0x1d307c: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3078u, 0x1D3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3080u;
label_1d3080:
    // 0x1d3080: 0x295a821  addu        $s5, $s4, $s5
    ctx->pc = 0x1d3080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1d3084: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d3084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3088: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d3088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d308c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D308Cu;
    SET_GPR_U32(ctx, 31, 0x1D3094u);
    ctx->pc = 0x1D3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D308Cu;
    // 0x1d3090: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D308Cu, 0x1D3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3094u;
label_1d3094:
    // 0x1d3094: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x1d3094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d3098: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x1d3098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d309c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D309Cu;
    {
        const bool branch_taken_0x1d309c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D309Cu;
        // 0x1d30a0: 0xe6140014  swc1        $f20, 0x14($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d309c) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D30A4u;
    // 0x1d30a4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1d30a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d30a8: 0x2f31023  subu        $v0, $s7, $s3
    ctx->pc = 0x1d30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x1d30ac: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d30b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d30b4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1d30b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d30b8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d30bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d30c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d30c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1d30c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d30c8: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1d30c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d30cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d30ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d30d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d30d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d30d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d30d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d30d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d30d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d30dc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1d30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d30e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d30e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d30e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1d30e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1d30e8:
    // 0x1d30e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d30e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d30ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1d30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d30f0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1d30f4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d30f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d30f8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1D30F8u;
    {
        const bool branch_taken_0x1d30f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30F8u;
        // 0x1d30fc: 0x4618ce40  add.s       $f25, $f25, $f24 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30f8) {
            ctx->pc = 0x1D3040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3040;
        }
    }
    ctx->pc = 0x1D3100u;
label_1d3100:
    // 0x1d3100: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3104: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d3104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3108: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d310c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d310cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d3110: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d3114: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d3114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3118: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d311c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d311cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3120: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3124: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d3124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3128: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d312c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d312cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3130: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3134: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d3134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3138: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d313c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d313cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3140: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3144: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3148: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3148u;
        // 0x1d314c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3150u;
}
