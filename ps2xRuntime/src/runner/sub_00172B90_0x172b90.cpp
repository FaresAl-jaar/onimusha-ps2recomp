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

// Function: sub_00172B90
// Address: 0x172b90 - 0x173600
void sub_00172B90_0x172b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172B90_0x172b90");
#endif

    switch (ctx->pc) {
        case 0x172c08u: goto label_172c08;
        case 0x172c70u: goto label_172c70;
        case 0x172c98u: goto label_172c98;
        case 0x172cf4u: goto label_172cf4;
        case 0x172f4cu: goto label_172f4c;
        case 0x173000u: goto label_173000;
        case 0x173130u: goto label_173130;
        case 0x173290u: goto label_173290;
        case 0x1732d0u: goto label_1732d0;
        case 0x173360u: goto label_173360;
        case 0x173590u: goto label_173590;
        default: break;
    }

    ctx->pc = 0x172b90u;

    // 0x172b90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x172b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x172b94: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x172b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x172b98: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x172b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x172b9c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x172b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x172ba0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x172ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x172ba4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x172ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x172ba8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x172ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x172bac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x172bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x172bb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x172bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x172bb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x172bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x172bb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x172bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x172bbc: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x172bbcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172bc0: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x172bc0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x172bc4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x172bc4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x172bc8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x172bc8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x172bcc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x172bccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x172bd0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x172bd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x172bd4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x172bd4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x172bd8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x172bd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x172bdc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x172bdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x172be0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x172be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x172be4: 0x8c960034  lw          $s6, 0x34($a0)
    ctx->pc = 0x172be4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x172be8: 0x92d3000a  lbu         $s3, 0xA($s6)
    ctx->pc = 0x172be8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x172bec: 0x1260026e  beqz        $s3, . + 4 + (0x26E << 2)
    ctx->pc = 0x172BECu;
    {
        const bool branch_taken_0x172bec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BECu;
        // 0x172bf0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bec) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x172BF4u;
    // 0x172bf4: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x172bf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x172bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172bfc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x172BFCu;
    {
        const bool branch_taken_0x172bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BFCu;
        // 0x172c00: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bfc) {
            ctx->pc = 0x172C58u;
            goto label_172c58;
        }
    }
    ctx->pc = 0x172C04u;
    // 0x172c04: 0x0  nop
    ctx->pc = 0x172c04u;
    // NOP
label_172c08:
    // 0x172c08: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x172c0c: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x172c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x172c10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x172c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x172c14: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x172c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c18: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x172c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c1c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172c1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172c20: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x172C20u;
    {
        const bool branch_taken_0x172c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172c20) {
            ctx->pc = 0x172CA8u;
            goto label_172ca8;
        }
    }
    ctx->pc = 0x172C28u;
    // 0x172c28: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x172c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c2c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x172c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172c30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172c34: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x172C34u;
    {
        const bool branch_taken_0x172c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172c34) {
            ctx->pc = 0x172CA8u;
            goto label_172ca8;
        }
    }
    ctx->pc = 0x172C3Cu;
    // 0x172c3c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x172c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172c40: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x172c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172c44: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172c44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172c48: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x172C48u;
    {
        const bool branch_taken_0x172c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172c48) {
            ctx->pc = 0x172CA8u;
            goto label_172ca8;
        }
    }
    ctx->pc = 0x172C50u;
    // 0x172c50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x172c50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x172c54: 0x0  nop
    ctx->pc = 0x172c54u;
    // NOP
label_172c58:
    // 0x172c58: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x172c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x172c5c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x172C5Cu;
    {
        const bool branch_taken_0x172c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172c5c) {
            ctx->pc = 0x172C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172c08;
        }
    }
    ctx->pc = 0x172C64u;
    // 0x172c64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x172C64u;
    {
        const bool branch_taken_0x172c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c64) {
            ctx->pc = 0x172CA8u;
            goto label_172ca8;
        }
    }
    ctx->pc = 0x172C6Cu;
    // 0x172c6c: 0x0  nop
    ctx->pc = 0x172c6cu;
    // NOP
label_172c70:
    // 0x172c70: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x172c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x172c74: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x172c74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x172c78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x172c7c: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x172c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x172c80: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x172c84: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x172c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x172c88: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x172c88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x172c8c: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x172c90: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x172C90u;
    SET_GPR_U32(ctx, 31, 0x172C98u);
    ctx->pc = 0x172C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C90u;
    // 0x172c94: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x172C90u, 0x172C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C98u;
label_172c98:
    // 0x172c98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x172C98u;
    {
        const bool branch_taken_0x172c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172c98) {
            ctx->pc = 0x172CB8u;
            goto label_172cb8;
        }
    }
    ctx->pc = 0x172CA0u;
    // 0x172ca0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x172ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x172ca4: 0x0  nop
    ctx->pc = 0x172ca4u;
    // NOP
label_172ca8:
    // 0x172ca8: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x172ca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x172cac: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x172CACu;
    {
        const bool branch_taken_0x172cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172cac) {
            ctx->pc = 0x172C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172c70;
        }
    }
    ctx->pc = 0x172CB4u;
    // 0x172cb4: 0x0  nop
    ctx->pc = 0x172cb4u;
    // NOP
label_172cb8:
    // 0x172cb8: 0x2663fffe  addiu       $v1, $s3, -0x2
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x172cbc: 0x74082b  sltu        $at, $v1, $s4
    ctx->pc = 0x172cbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x172cc0: 0x14200239  bnez        $at, . + 4 + (0x239 << 2)
    ctx->pc = 0x172CC0u;
    {
        const bool branch_taken_0x172cc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172cc0) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x172CC8u;
    // 0x172cc8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x172cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x172ccc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x172cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x172cd0: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x172cd4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x172cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x172cd8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x172cdc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x172cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x172ce0: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x172ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x172ce4: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x172ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x172ce8: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x172ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x172cec: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x172CECu;
    SET_GPR_U32(ctx, 31, 0x172CF4u);
    ctx->pc = 0x172CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CECu;
    // 0x172cf0: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x172CECu, 0x172CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CF4u;
label_172cf4:
    // 0x172cf4: 0x1040022c  beqz        $v0, . + 4 + (0x22C << 2)
    ctx->pc = 0x172CF4u;
    {
        const bool branch_taken_0x172cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CF4u;
        // 0x172cf8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cf4) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x172CFCu;
    // 0x172cfc: 0x8c3e0108  lw          $fp, 0x108($at)
    ctx->pc = 0x172cfcu;
    SET_GPR_S32(ctx, 30, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 264))); // MMIO: 0x70000108
    // 0x172d00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172d04: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x172d04u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x172d08: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x172d08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x172d0c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D0Cu;
    {
        const bool branch_taken_0x172d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d0c) {
            ctx->pc = 0x172D20u;
            goto label_172d20;
        }
    }
    ctx->pc = 0x172D14u;
    // 0x172d14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172D14u;
    {
        const bool branch_taken_0x172d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d14) {
            ctx->pc = 0x172D28u;
            goto label_172d28;
        }
    }
    ctx->pc = 0x172D1Cu;
    // 0x172d1c: 0x0  nop
    ctx->pc = 0x172d1cu;
    // NOP
label_172d20:
    // 0x172d20: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x172d20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d24: 0x0  nop
    ctx->pc = 0x172d24u;
    // NOP
label_172d28:
    // 0x172d28: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x172d2c: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x172d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x172d30: 0x96a30028  lhu         $v1, 0x28($s5)
    ctx->pc = 0x172d30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x172d34: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x172d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x172d38: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x172d38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172d3c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x172d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172d40: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x172d44: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x172d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x172d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x172d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172d4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x172d50: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D50u;
    {
        const bool branch_taken_0x172d50 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x172D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D50u;
        // 0x172d54: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d50) {
            ctx->pc = 0x172D64u;
            goto label_172d64;
        }
    }
    ctx->pc = 0x172D58u;
    // 0x172d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172D5Cu;
    {
        const bool branch_taken_0x172d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D5Cu;
        // 0x172d60: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d5c) {
            ctx->pc = 0x172D80u;
            goto label_172d80;
        }
    }
    ctx->pc = 0x172D64u;
label_172d64:
    // 0x172d64: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x172d68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x172d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x172d6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x172d70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x172d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d74: 0x0  nop
    ctx->pc = 0x172d74u;
    // NOP
    // 0x172d78: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x172d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x172d7c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x172d7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_172d80:
    // 0x172d80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172d84: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x172d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x172d88: 0xc4220340  lwc1        $f2, 0x340($at)
    ctx->pc = 0x172d88u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172d8c: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x172d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172d98: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x172d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x172d9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x172d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x172da0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x172da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172da4: 0x90c6000b  lbu         $a2, 0xB($a2)
    ctx->pc = 0x172da4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x172da8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172dac: 0xc4210354  lwc1        $f1, 0x354($at)
    ctx->pc = 0x172dacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000354u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172db0: 0x46001742  mul.s       $f29, $f2, $f0
    ctx->pc = 0x172db0u;
    ctx->f[29] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x172db4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x172db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x172db8: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x172db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x172dbc: 0x46000f02  mul.s       $f28, $f1, $f0
    ctx->pc = 0x172dbcu;
    ctx->f[28] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172dc0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x172dc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x172dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172dc8: 0x0  nop
    ctx->pc = 0x172dc8u;
    // NOP
    // 0x172dcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x172dd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x172dd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x172dd4: 0x0  nop
    ctx->pc = 0x172dd4u;
    // NOP
    // 0x172dd8: 0x0  nop
    ctx->pc = 0x172dd8u;
    // NOP
    // 0x172ddc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172DDCu;
    {
        const bool branch_taken_0x172ddc = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x172ddc) {
            ctx->pc = 0x172DF0u;
            goto label_172df0;
        }
    }
    ctx->pc = 0x172DE4u;
    // 0x172de4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172de8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172DE8u;
    {
        const bool branch_taken_0x172de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DE8u;
        // 0x172dec: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172de8) {
            ctx->pc = 0x172E0Cu;
            goto label_172e0c;
        }
    }
    ctx->pc = 0x172DF0u;
label_172df0:
    // 0x172df0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x172df4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x172df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x172df8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x172dfc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x172dfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172e00: 0x0  nop
    ctx->pc = 0x172e00u;
    // NOP
    // 0x172e04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x172e08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x172e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_172e0c:
    // 0x172e0c: 0x46000e02  mul.s       $f24, $f1, $f0
    ctx->pc = 0x172e0cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172e10: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x172e14: 0x94470004  lhu         $a3, 0x4($v0)
    ctx->pc = 0x172e14u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x172e18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172e1c: 0x84460008  lh          $a2, 0x8($v0)
    ctx->pc = 0x172e1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x172e20: 0x8ea80014  lw          $t0, 0x14($s5)
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x172e24: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x172e24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x172e28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x172e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172e2c: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x172e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x172e30: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x172e30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x172e34: 0x0  nop
    ctx->pc = 0x172e34u;
    // NOP
    // 0x172e38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x172e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x172e3c: 0x9104000c  lbu         $a0, 0xC($t0)
    ctx->pc = 0x172e3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x172e40: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x172e40u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x172e44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x172e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x172e48: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x172e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x172e4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x172e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172e50: 0x0  nop
    ctx->pc = 0x172e50u;
    // NOP
    // 0x172e54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x172e58: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x172e58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x172e5c: 0x0  nop
    ctx->pc = 0x172e5cu;
    // NOP
    // 0x172e60: 0x0  nop
    ctx->pc = 0x172e60u;
    // NOP
    // 0x172e64: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E64u;
    {
        const bool branch_taken_0x172e64 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x172e64) {
            ctx->pc = 0x172E78u;
            goto label_172e78;
        }
    }
    ctx->pc = 0x172E6Cu;
    // 0x172e6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172e70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172E70u;
    {
        const bool branch_taken_0x172e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E70u;
        // 0x172e74: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e70) {
            ctx->pc = 0x172E94u;
            goto label_172e94;
        }
    }
    ctx->pc = 0x172E78u;
label_172e78:
    // 0x172e78: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x172e7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x172e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x172e80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x172e84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x172e84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172e88: 0x0  nop
    ctx->pc = 0x172e88u;
    // NOP
    // 0x172e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x172e90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x172e90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_172e94:
    // 0x172e94: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x172e94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x172e98: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x172e98u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172e9c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x172e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x172ea0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172ea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172ea8: 0x0  nop
    ctx->pc = 0x172ea8u;
    // NOP
    // 0x172eac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x172eb0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x172eb0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x172eb4: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x172EB4u;
    {
        const bool branch_taken_0x172eb4 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x172EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EB4u;
        // 0x172eb8: 0x4616a841  sub.s       $f1, $f21, $f22 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172eb4) {
            ctx->pc = 0x172EC8u;
            goto label_172ec8;
        }
    }
    ctx->pc = 0x172EBCu;
    // 0x172ebc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x172ebcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ec0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172EC0u;
    {
        const bool branch_taken_0x172ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EC0u;
        // 0x172ec4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ec0) {
            ctx->pc = 0x172EE4u;
            goto label_172ee4;
        }
    }
    ctx->pc = 0x172EC8u;
label_172ec8:
    // 0x172ec8: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x172ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x172ecc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x172eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x172ed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x172ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x172ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ed8: 0x0  nop
    ctx->pc = 0x172ed8u;
    // NOP
    // 0x172edc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x172ee0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x172ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_172ee4:
    // 0x172ee4: 0x0  nop
    ctx->pc = 0x172ee4u;
    // NOP
    // 0x172ee8: 0x0  nop
    ctx->pc = 0x172ee8u;
    // NOP
    // 0x172eec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x172eecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x172ef0: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x172ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x172ef4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x172ef8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x172efc: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x172f00: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x172f04: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x172f08: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x172f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x172f0c: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x172f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x172f10: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x172f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x172f14: 0x8ea90020  lw          $t1, 0x20($s5)
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x172f18: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x172f1c: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x172f20: 0x92d70001  lbu         $s7, 0x1($s6)
    ctx->pc = 0x172f20u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x172f24: 0x1078824  and         $s1, $t0, $a3
    ctx->pc = 0x172f24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x172f28: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x172f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x172f2c: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x172f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x172f30: 0x9923c  dsll32      $s2, $t1, 8
    ctx->pc = 0x172f30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 8));
    // 0x172f34: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x172f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x172f38: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x172f38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x172f3c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x172f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x172f40: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x172f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x172f44: 0xc041442  jal         func_105108
    ctx->pc = 0x172F44u;
    SET_GPR_U32(ctx, 31, 0x172F4Cu);
    ctx->pc = 0x172F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F44u;
    // 0x172f48: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x172F44u, 0x172F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F4Cu;
label_172f4c:
    // 0x172f4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172f50: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x172f50u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x172f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172f5c: 0x8c240100  lw          $a0, 0x100($at)
    ctx->pc = 0x172f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x172f60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172f64: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x172f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x172f68: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x172f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x172f6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x172f6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172f70: 0x0  nop
    ctx->pc = 0x172f70u;
    // NOP
    // 0x172f74: 0x46800ea0  cvt.s.w     $f26, $f1
    ctx->pc = 0x172f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x172f78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172f7c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x172f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x172f80: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x172f80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x172f84: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x172f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172f88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172f8c: 0x0  nop
    ctx->pc = 0x172f8cu;
    // NOP
    // 0x172f90: 0x46800e60  cvt.s.w     $f25, $f1
    ctx->pc = 0x172f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x172f94: 0x4619c85c  madd.s      $f1, $f25, $f25
    ctx->pc = 0x172f94u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x172f98: 0x460106c4  c1          0x106C4
    ctx->pc = 0x172f98u;
    ctx->f[27] = FPU_SQRT_S(ctx->f[1]);
    // 0x172f9c: 0x0  nop
    ctx->pc = 0x172f9cu;
    // NOP
    // 0x172fa0: 0x0  nop
    ctx->pc = 0x172fa0u;
    // NOP
    // 0x172fa4: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x172fa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172fa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x172FA8u;
    {
        const bool branch_taken_0x172fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FA8u;
        // 0x172fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fa8) {
            ctx->pc = 0x172FB8u;
            goto label_172fb8;
        }
    }
    ctx->pc = 0x172FB0u;
    // 0x172fb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x172FB0u;
    {
        const bool branch_taken_0x172fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FB0u;
        // 0x172fb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fb0) {
            ctx->pc = 0x172FF0u;
            goto label_172ff0;
        }
    }
    ctx->pc = 0x172FB8u;
label_172fb8:
    // 0x172fb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172fbc: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x172fbcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172fc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172fc8: 0x4619e842  mul.s       $f1, $f29, $f25
    ctx->pc = 0x172fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x172fcc: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x172fccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x172fd0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x172fd0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x172fd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x172fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x172fd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172fdc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x172fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x172fe0: 0x461ae042  mul.s       $f1, $f28, $f26
    ctx->pc = 0x172fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x172fe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x172fe8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172fe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172fec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172fecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172ff0:
    // 0x172ff0: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x172FF0u;
    {
        const bool branch_taken_0x172ff0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x172FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FF0u;
        // 0x172ff4: 0x142842  srl         $a1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ff0) {
            ctx->pc = 0x173004u;
            goto label_173004;
        }
    }
    ctx->pc = 0x172FF8u;
    // 0x172ff8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x172ff8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ffc: 0x10000007  b           . + 4 + (0x7 << 2)
label_173000:
    if (ctx->pc == 0x173000u) {
        ctx->pc = 0x173000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FFCu;
        // 0x173000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173004u;
        goto label_173004;
    }
    ctx->pc = 0x172FFCu;
    {
        const bool branch_taken_0x172ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FFCu;
        // 0x173000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ffc) {
            ctx->pc = 0x17301Cu;
            goto label_17301c;
        }
    }
    ctx->pc = 0x173004u;
label_173004:
    // 0x173004: 0x32840001  andi        $a0, $s4, 0x1
    ctx->pc = 0x173004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x173008: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x173008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17300c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17300cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173010: 0x0  nop
    ctx->pc = 0x173010u;
    // NOP
    // 0x173014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173018: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x173018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17301c:
    // 0x17301c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x17301cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x173020: 0x2742823  subu        $a1, $s3, $s4
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x173024: 0x72f44018  mult1       $t0, $s7, $s4
    ctx->pc = 0x173024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x173028: 0x123a3c  dsll32      $a3, $s2, 8
    ctx->pc = 0x173028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 8));
    // 0x17302c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17302cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173030: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x173030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x173034: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x173034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x173038: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17303c: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x173040: 0x854818  mult        $t1, $a0, $a1
    ctx->pc = 0x173040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x173044: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x173044u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x173048: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x173048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x17304c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x173050: 0x113001b  divu        $zero, $t0, $s3
    ctx->pc = 0x173050u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x173054: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x173054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x173058: 0x0  nop
    ctx->pc = 0x173058u;
    // NOP
    // 0x17305c: 0x4012  mflo        $t0
    ctx->pc = 0x17305cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x173060: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x173060u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x173064: 0xe89025  or          $s2, $a3, $t0
    ctx->pc = 0x173064u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x173068: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x17306c: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x173070: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x173070u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173074: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173078: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x173078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x17307c: 0x8c270104  lw          $a3, 0x104($at)
    ctx->pc = 0x17307cu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x173080: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x173080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x173084: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173088: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x173088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x17308c: 0x8c270108  lw          $a3, 0x108($at)
    ctx->pc = 0x17308cu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x173090: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x173090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x173094: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173098: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173098u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17309c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x17309cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1730a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1730a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1730a4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1730a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1730a8: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x1730a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730ac: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1730acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1730b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1730b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1730b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1730b8: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x1730b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730bc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1730bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1730c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1730c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1730c4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1730c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1730c8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1730c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1730cc: 0x8c270100  lw          $a3, 0x100($at)
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x1730d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1730d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1730d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1730d8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1730d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1730dc: 0x8c230104  lw          $v1, 0x104($at)
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x1730e0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1730e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1730e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1730e8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1730e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1730ec: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x1730f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1730f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1730f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1730f8: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x1730f8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730fc: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x1730fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x173100: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173104: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x173104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173108: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173108u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17310c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x17310cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173110: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173114: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x173114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173118: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x173118u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17311c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x17311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173120: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x173124: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x173124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x173128: 0xc041442  jal         func_105108
    ctx->pc = 0x173128u;
    SET_GPR_U32(ctx, 31, 0x173130u);
    ctx->pc = 0x17312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173128u;
    // 0x17312c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x173128u, 0x173130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173130u;
label_173130:
    // 0x173130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173134: 0x0  nop
    ctx->pc = 0x173134u;
    // NOP
    // 0x173138: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x173138u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17313c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17313Cu;
    {
        const bool branch_taken_0x17313c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17313Cu;
        // 0x173140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17313c) {
            ctx->pc = 0x173150u;
            goto label_173150;
        }
    }
    ctx->pc = 0x173144u;
    // 0x173144: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x173144u;
    {
        const bool branch_taken_0x173144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173144u;
        // 0x173148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173144) {
            ctx->pc = 0x173188u;
            goto label_173188;
        }
    }
    ctx->pc = 0x17314Cu;
    // 0x17314c: 0x0  nop
    ctx->pc = 0x17314cu;
    // NOP
label_173150:
    // 0x173150: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173154: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x173154u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173158: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17315c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17315cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173160: 0x4619e842  mul.s       $f1, $f29, $f25
    ctx->pc = 0x173160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x173164: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x173164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x173168: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x173168u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x17316c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17316cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x173170: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173170u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x173174: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x173174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x173178: 0x461ae042  mul.s       $f1, $f28, $f26
    ctx->pc = 0x173178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x17317c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17317cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x173180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173184: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_173188:
    // 0x173188: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x173188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17318c: 0x2742823  subu        $a1, $s3, $s4
    ctx->pc = 0x17318cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x173190: 0x72f43018  mult1       $a2, $s7, $s4
    ctx->pc = 0x173190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x173194: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173198: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17319c: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x17319cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x1731a0: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x1731a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1731a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1731a8: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x1731a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1731ac: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1731acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x1731b0: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x1731b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x1731b4: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1731b8: 0x93001b  divu        $zero, $a0, $s3
    ctx->pc = 0x1731b8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1731bc: 0x0  nop
    ctx->pc = 0x1731bcu;
    // NOP
    // 0x1731c0: 0x0  nop
    ctx->pc = 0x1731c0u;
    // NOP
    // 0x1731c4: 0x2012  mflo        $a0
    ctx->pc = 0x1731c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1731c8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1731cc: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x1731ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1731d0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1731d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1731d4: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x1731d8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1731d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1731dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1731e0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1731e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1731e4: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x1731e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1731e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1731ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1731f0: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x1731f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1731f4: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x1731f4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x1731f8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1731f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1731fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1731fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173200: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173200u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173204: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x173204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x173208: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17320c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17320cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173210: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173210u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173214: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173218: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17321c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173220: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173220u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173224: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173228: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17322c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x173230: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x173234: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x173234u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x173238: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x173238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17323c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17323cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173240: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x173240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x173244: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x173248: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x173248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17324c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173250: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x173250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x173254: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x173254u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x173258: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x173258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17325c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17325cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173260: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173260u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173264: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x173264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x173268: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17326c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x173270: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173270u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173274: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173278: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17327c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x173280: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x173280u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173284: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173288: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x173288u;
    {
        const bool branch_taken_0x173288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173288u;
        // 0x17328c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173288) {
            ctx->pc = 0x1734F8u;
            goto label_1734f8;
        }
    }
    ctx->pc = 0x173290u;
label_173290:
    // 0x173290: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x173290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x173294: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x173294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x173298: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x173298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x17329c: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x17329cu;
    SET_GPR_VEC(ctx, 9, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x1732a0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1732a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1732a4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1732a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1732a8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1732ac: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1732acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1732b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1732b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1732b4: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x1732b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x1732b8: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x1732b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x1732bc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1732bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1732c0: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x1732c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x1732c4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1732c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1732c8: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1732C8u;
    SET_GPR_U32(ctx, 31, 0x1732D0u);
    ctx->pc = 0x1732CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732C8u;
    // 0x1732cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1732C8u, 0x1732D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732D0u;
label_1732d0:
    // 0x1732d0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1732D0u;
    {
        const bool branch_taken_0x1732d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732D0u;
        // 0x1732d4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732d0) {
            ctx->pc = 0x173508u;
            goto label_173508;
        }
    }
    ctx->pc = 0x1732D8u;
    // 0x1732d8: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 280))); // MMIO: 0x70000118
    // 0x1732dc: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x1732dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1732e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1732E0u;
    {
        const bool branch_taken_0x1732e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1732e0) {
            ctx->pc = 0x1732F0u;
            goto label_1732f0;
        }
    }
    ctx->pc = 0x1732E8u;
    // 0x1732e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1732e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732ec: 0x0  nop
    ctx->pc = 0x1732ecu;
    // NOP
label_1732f0:
    // 0x1732f0: 0x16930007  bne         $s4, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1732F0u;
    {
        const bool branch_taken_0x1732f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x1732F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732F0u;
        // 0x1732f4: 0x121a3c  dsll32      $v1, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732f0) {
            ctx->pc = 0x173310u;
            goto label_173310;
        }
    }
    ctx->pc = 0x1732F8u;
    // 0x1732f8: 0x171600  sll         $v0, $s7, 24
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 24));
    // 0x1732fc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1732fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x173300: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x173300u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x173304: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x173304u;
    {
        const bool branch_taken_0x173304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173304u;
        // 0x173308: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173304) {
            ctx->pc = 0x173348u;
            goto label_173348;
        }
    }
    ctx->pc = 0x17330Cu;
    // 0x17330c: 0x0  nop
    ctx->pc = 0x17330cu;
    // NOP
label_173310:
    // 0x173310: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x173310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x173314: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x173314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x173318: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x173318u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x17331c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x17331cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x173320: 0x72f41818  mult1       $v1, $s7, $s4
    ctx->pc = 0x173320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x173324: 0x12123c  dsll32      $v0, $s2, 8
    ctx->pc = 0x173324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 8));
    // 0x173328: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x173328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17332c: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x17332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x173330: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x173330u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x173334: 0x0  nop
    ctx->pc = 0x173334u;
    // NOP
    // 0x173338: 0x0  nop
    ctx->pc = 0x173338u;
    // NOP
    // 0x17333c: 0x1812  mflo        $v1
    ctx->pc = 0x17333cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x173340: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x173340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x173344: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x173344u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_173348:
    // 0x173348: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x17334c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x17334cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x173350: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x173350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x173354: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x173354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x173358: 0xc041442  jal         func_105108
    ctx->pc = 0x173358u;
    SET_GPR_U32(ctx, 31, 0x173360u);
    ctx->pc = 0x17335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173358u;
    // 0x17335c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x173358u, 0x173360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173360u;
label_173360:
    // 0x173360: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173364: 0x8c260110  lw          $a2, 0x110($at)
    ctx->pc = 0x173364u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x173368: 0x4600d024  .word       0x4600D024                   # cvt.w.s     $f0, $f26 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[26]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17336c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17336cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173370: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x173370u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x173374: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x173374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x173378: 0x4600c824  .word       0x4600C824                   # cvt.w.s     $f0, $f25 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[25]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17337c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17337cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173380: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x173380u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x173384: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x173384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x173388: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x173388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17338c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173390: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x173390u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x173394: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x173394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173398: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x173398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x17339c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17339cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1733a0: 0x0  nop
    ctx->pc = 0x1733a0u;
    // NOP
    // 0x1733a4: 0x46800ea0  cvt.s.w     $f26, $f1
    ctx->pc = 0x1733a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x1733a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1733a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1733ac: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x1733acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[26], ctx->f[26]));
    // 0x1733b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1733b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1733b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1733b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1733b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1733b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1733bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1733bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1733c0: 0x0  nop
    ctx->pc = 0x1733c0u;
    // NOP
    // 0x1733c4: 0x46800e60  cvt.s.w     $f25, $f1
    ctx->pc = 0x1733c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1733c8: 0x4619c85c  madd.s      $f1, $f25, $f25
    ctx->pc = 0x1733c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1733cc: 0x460106c4  c1          0x106C4
    ctx->pc = 0x1733ccu;
    ctx->f[27] = FPU_SQRT_S(ctx->f[1]);
    // 0x1733d0: 0x0  nop
    ctx->pc = 0x1733d0u;
    // NOP
    // 0x1733d4: 0x0  nop
    ctx->pc = 0x1733d4u;
    // NOP
    // 0x1733d8: 0x461b0032  c.eq.s      $f0, $f27
    ctx->pc = 0x1733d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1733dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1733DCu;
    {
        const bool branch_taken_0x1733dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1733E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733DCu;
        // 0x1733e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733dc) {
            ctx->pc = 0x1733F0u;
            goto label_1733f0;
        }
    }
    ctx->pc = 0x1733E4u;
    // 0x1733e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1733E4u;
    {
        const bool branch_taken_0x1733e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1733E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733E4u;
        // 0x1733e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733e4) {
            ctx->pc = 0x173428u;
            goto label_173428;
        }
    }
    ctx->pc = 0x1733ECu;
    // 0x1733ec: 0x0  nop
    ctx->pc = 0x1733ecu;
    // NOP
label_1733f0:
    // 0x1733f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1733f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1733f4: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x1733f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1733f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1733fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1733fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173400: 0x4619e842  mul.s       $f1, $f29, $f25
    ctx->pc = 0x173400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[25]);
    // 0x173404: 0x4602d882  mul.s       $f2, $f27, $f2
    ctx->pc = 0x173404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[2]);
    // 0x173408: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x173408u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x17340c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17340cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x173410: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x173414: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x173414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x173418: 0x461ae042  mul.s       $f1, $f28, $f26
    ctx->pc = 0x173418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
    // 0x17341c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17341cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x173420: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x173424: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x173424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_173428:
    // 0x173428: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x173428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x17342c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17342cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173430: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x173430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x173434: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x173434u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x173438: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x173438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17343c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x17343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x173440: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x173440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x173444: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173448: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x173448u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17344c: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x17344cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x173450: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x173450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x173454: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173458: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17345c: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x17345cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x173460: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x173460u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x173464: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x173464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x173468: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17346c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x17346cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173470: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x173470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x173474: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173478: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x173478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x17347c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x17347cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173480: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173484: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173488: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x173488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17348c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x17348cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173490: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x173490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x173494: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x173498: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x173498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17349c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x17349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1734a0: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x1734a0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x1734a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1734a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1734a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1734ac: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1734acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1734b0: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x1734b0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x1734b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1734b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1734b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1734b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1734bc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1734bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1734c0: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x1734c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1734c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1734c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1734cc: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1734ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1734d0: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x1734d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1734d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1734d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1734d8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1734d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1734dc: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1734dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1734e0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1734e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1734e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1734e8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1734e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1734ec: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1734ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1734f0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1734f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1734f4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1734f8:
    // 0x1734f8: 0x274082b  sltu        $at, $s3, $s4
    ctx->pc = 0x1734f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1734fc: 0x1020ff64  beqz        $at, . + 4 + (-0x9C << 2)
    ctx->pc = 0x1734FCu;
    {
        const bool branch_taken_0x1734fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1734fc) {
            ctx->pc = 0x173290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173290;
        }
    }
    ctx->pc = 0x173504u;
    // 0x173504: 0x0  nop
    ctx->pc = 0x173504u;
    // NOP
label_173508:
    // 0x173508: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x173508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17350c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x173510: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x173514: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x173518: 0x1e3183  sra         $a2, $fp, 6
    ctx->pc = 0x173518u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 6));
    // 0x17351c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x17351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x173520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173524: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x173524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x173528: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x173528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17352c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17352cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x173530: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x173530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x173534: 0x3442005c  ori         $v0, $v0, 0x5C
    ctx->pc = 0x173534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)92);
    // 0x173538: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x173538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17353c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17353cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x173540: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x173540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x173544: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x173548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17354c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173550: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x173550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173554: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x173558: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x173558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17355c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17355cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x173560: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x173560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x173564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173568: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x173568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17356c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173570: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x173570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x173574: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x173574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x173578: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x173578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x17357c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17357cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x173580: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x173580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x173584: 0x92a20013  lbu         $v0, 0x13($s5)
    ctx->pc = 0x173584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x173588: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x173588u;
    SET_GPR_U32(ctx, 31, 0x173590u);
    ctx->pc = 0x17358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173588u;
    // 0x17358c: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x173588u, 0x173590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173590u;
label_173590:
    // 0x173590: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x173590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x173594: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x173594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x173598: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x173598u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17359c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1735a0: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x1735a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x1735a4: 0x0  nop
    ctx->pc = 0x1735a4u;
    // NOP
label_1735a8:
    // 0x1735a8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1735a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1735ac: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1735acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1735b0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1735b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1735b4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1735b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1735b8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1735b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1735bc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1735bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1735c0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1735c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1735c4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1735c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1735c8: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1735c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1735cc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1735ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1735d0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1735d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1735d4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1735d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1735d8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1735d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1735dc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1735dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1735e0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1735e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1735e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1735e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1735e8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1735e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1735ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1735ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1735f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1735f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1735f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1735f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1735f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1735F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1735FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735F8u;
        // 0x1735fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173600u;
}
