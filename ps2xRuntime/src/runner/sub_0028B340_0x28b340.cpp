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

// Function: sub_0028B340
// Address: 0x28b340 - 0x28b750
void sub_0028B340_0x28b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B340_0x28b340");
#endif

    switch (ctx->pc) {
        case 0x28b38cu: goto label_28b38c;
        case 0x28b394u: goto label_28b394;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b700u: goto label_28b700;
        default: break;
    }

    ctx->pc = 0x28b340u;

    // 0x28b340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28b344: 0x81180  sll         $v0, $t0, 6
    ctx->pc = 0x28b344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x28b348: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28b34c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28b34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28b350: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28b350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28b354: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28b354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b358: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28b35c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28b35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b360: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x28b360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28b364: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x28b364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28b368: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28b368u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28b36c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28b370: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x28b370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b374: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x28b374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x28b378: 0x2648000c  addiu       $t0, $s2, 0xC
    ctx->pc = 0x28b378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x28b37c: 0x26490010  addiu       $t1, $s2, 0x10
    ctx->pc = 0x28b37cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x28b380: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x28b380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x28b384: 0xc096da0  jal         func_25B680
    ctx->pc = 0x28B384u;
    SET_GPR_U32(ctx, 31, 0x28B38Cu);
    ctx->pc = 0x28B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B384u;
    // 0x28b388: 0x2647000a  addiu       $a3, $s2, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x28B384u, 0x28B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B38Cu;
label_28b38c:
    // 0x28b38c: 0xc096d80  jal         func_25B600
    ctx->pc = 0x28B38Cu;
    SET_GPR_U32(ctx, 31, 0x28B394u);
    ctx->pc = 0x28B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B38Cu;
    // 0x28b390: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x28B38Cu, 0x28B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B394u;
label_28b394:
    // 0x28b394: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x28b394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x28b398: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28b39c: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x28b39cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b3a0: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x28b3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b3a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b3a8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b3ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b3b0: 0x86430022  lh          $v1, 0x22($s2)
    ctx->pc = 0x28b3b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x28b3b4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28b3b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b3b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28b3bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b3c0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b3c4: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b3c8: 0x86420020  lh          $v0, 0x20($s2)
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28b3cc: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x28b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x28b3d0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x28b3d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28b3d4: 0x0  nop
    ctx->pc = 0x28b3d4u;
    // NOP
    // 0x28b3d8: 0x0  nop
    ctx->pc = 0x28b3d8u;
    // NOP
    // 0x28b3dc: 0x1810  mfhi        $v1
    ctx->pc = 0x28b3dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28b3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28b3e4: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x28b3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b3e8: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x28b3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x28b3ec: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B3ECu;
    {
        const bool branch_taken_0x28b3ec = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x28B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3ECu;
        // 0x28b3f0: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3ec) {
            ctx->pc = 0x28B3FCu;
            goto label_28b3fc;
        }
    }
    ctx->pc = 0x28B3F4u;
    // 0x28b3f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28B3F4u;
    {
        const bool branch_taken_0x28b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3F4u;
        // 0x28b3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3f4) {
            ctx->pc = 0x28B40Cu;
            goto label_28b40c;
        }
    }
    ctx->pc = 0x28B3FCu;
label_28b3fc:
    // 0x28b3fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B3FCu;
    {
        const bool branch_taken_0x28b3fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b3fc) {
            ctx->pc = 0x28B40Cu;
            goto label_28b40c;
        }
    }
    ctx->pc = 0x28B404u;
    // 0x28b404: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x28B404u;
    {
        const bool branch_taken_0x28b404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B404u;
        // 0x28b408: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b404) {
            ctx->pc = 0x28B40Cu;
            goto label_28b40c;
        }
    }
    ctx->pc = 0x28B40Cu;
label_28b40c:
    // 0x28b40c: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x28b40cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b410: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28b410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b414: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b418: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b41c: 0xc6440018  lwc1        $f4, 0x18($s2)
    ctx->pc = 0x28b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b420: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28b420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b428: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b428u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b42c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b430: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28b430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28b434: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B434u;
    {
        const bool branch_taken_0x28b434 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B434u;
        // 0x28b438: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b434) {
            ctx->pc = 0x28B448u;
            goto label_28b448;
        }
    }
    ctx->pc = 0x28B43Cu;
    // 0x28b43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B440u;
    {
        const bool branch_taken_0x28b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B440u;
        // 0x28b444: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b440) {
            ctx->pc = 0x28B460u;
            goto label_28b460;
        }
    }
    ctx->pc = 0x28B448u;
label_28b448:
    // 0x28b448: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28b44c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28b44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b454: 0x0  nop
    ctx->pc = 0x28b454u;
    // NOP
    // 0x28b458: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28b458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28b45c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28b45cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28b460:
    // 0x28b460: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x28b464: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28b468: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x28b468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x28b46c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28b46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b474: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28b474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28b478: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b478u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b47c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x28b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b480: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28b480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28b484: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28b484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b48c: 0x0  nop
    ctx->pc = 0x28b48cu;
    // NOP
    // 0x28b490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b494: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B494u;
    {
        const bool branch_taken_0x28b494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B494u;
        // 0x28b498: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b494) {
            ctx->pc = 0x28B4A0u;
            goto label_28b4a0;
        }
    }
    ctx->pc = 0x28B49Cu;
    // 0x28b49c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x28b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_28b4a0:
    // 0x28b4a0: 0x96420036  lhu         $v0, 0x36($s2)
    ctx->pc = 0x28b4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x28b4a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B4A4u;
    {
        const bool branch_taken_0x28b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4a4) {
            ctx->pc = 0x28B4D8u;
            goto label_28b4d8;
        }
    }
    ctx->pc = 0x28B4ACu;
    // 0x28b4ac: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b4b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b4b4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b4b8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28b4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b4c0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b4c4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b4c8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28b4cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x28b4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x28b4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28B4D0u;
    {
        const bool branch_taken_0x28b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D0u;
        // 0x28b4d4: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d0) {
            ctx->pc = 0x28B4E0u;
            goto label_28b4e0;
        }
    }
    ctx->pc = 0x28B4D8u;
label_28b4d8:
    // 0x28b4d8: 0xa600002c  sh          $zero, 0x2C($s0)
    ctx->pc = 0x28b4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b4dc: 0x0  nop
    ctx->pc = 0x28b4dcu;
    // NOP
label_28b4e0:
    // 0x28b4e0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b4e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b4e8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b4ec: 0xc644002c  lwc1        $f4, 0x2C($s2)
    ctx->pc = 0x28b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b4f0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28b4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b4f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b4f8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b4fc: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b500: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x28b500u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x28b504: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B504u;
    {
        const bool branch_taken_0x28b504 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B504u;
        // 0x28b508: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b504) {
            ctx->pc = 0x28B518u;
            goto label_28b518;
        }
    }
    ctx->pc = 0x28B50Cu;
    // 0x28b50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B510u;
    {
        const bool branch_taken_0x28b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B510u;
        // 0x28b514: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b510) {
            ctx->pc = 0x28B530u;
            goto label_28b530;
        }
    }
    ctx->pc = 0x28B518u;
label_28b518:
    // 0x28b518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28b51c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28b51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b524: 0x0  nop
    ctx->pc = 0x28b524u;
    // NOP
    // 0x28b528: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28b528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28b52c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28b52cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28b530:
    // 0x28b530: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x28b530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x28b534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28b538: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x28b538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x28b53c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28b53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b544: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28b544u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28b548: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b54c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x28b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b550: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28b550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28b554: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x28b554u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b55c: 0x0  nop
    ctx->pc = 0x28b55cu;
    // NOP
    // 0x28b560: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28b560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b564: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B564u;
    {
        const bool branch_taken_0x28b564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b564) {
            ctx->pc = 0x28B570u;
            goto label_28b570;
        }
    }
    ctx->pc = 0x28B56Cu;
    // 0x28b56c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28b56cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28b570:
    // 0x28b570: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b574: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b578: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x28b578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b57c: 0xc6440050  lwc1        $f4, 0x50($s2)
    ctx->pc = 0x28b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b584: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b588: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b58c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28b590: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B590u;
    {
        const bool branch_taken_0x28b590 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B590u;
        // 0x28b594: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b590) {
            ctx->pc = 0x28B5A4u;
            goto label_28b5a4;
        }
    }
    ctx->pc = 0x28B598u;
    // 0x28b598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b59c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B59Cu;
    {
        const bool branch_taken_0x28b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B59Cu;
        // 0x28b5a0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b59c) {
            ctx->pc = 0x28B5BCu;
            goto label_28b5bc;
        }
    }
    ctx->pc = 0x28B5A4u;
label_28b5a4:
    // 0x28b5a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28b5a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28b5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b5ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b5b0: 0x0  nop
    ctx->pc = 0x28b5b0u;
    // NOP
    // 0x28b5b4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28b5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28b5b8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28b5b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28b5bc:
    // 0x28b5bc: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x28b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x28b5c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28b5c4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x28b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x28b5c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28b5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b5cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b5d0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28b5d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28b5d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b5d8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b5dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b5dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b5e0: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x28b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b5e4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28b5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28b5e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b5ec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x28b5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x28b5f0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b5f4: 0xc6440054  lwc1        $f4, 0x54($s2)
    ctx->pc = 0x28b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b5f8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28b5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b5fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b600: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b604: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b608: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28b608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28b60c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B60Cu;
    {
        const bool branch_taken_0x28b60c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B60Cu;
        // 0x28b610: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b60c) {
            ctx->pc = 0x28B620u;
            goto label_28b620;
        }
    }
    ctx->pc = 0x28B614u;
    // 0x28b614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B618u;
    {
        const bool branch_taken_0x28b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B618u;
        // 0x28b61c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b618) {
            ctx->pc = 0x28B638u;
            goto label_28b638;
        }
    }
    ctx->pc = 0x28B620u;
label_28b620:
    // 0x28b620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28b624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28b624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b62c: 0x0  nop
    ctx->pc = 0x28b62cu;
    // NOP
    // 0x28b630: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28b630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28b634: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28b634u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28b638:
    // 0x28b638: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x28b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x28b63c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28b640: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x28b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x28b644: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28b644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b648: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b64c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28b64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28b650: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28b650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28b654: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28b658: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b65c: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x28b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b660: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28b660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28b664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b668: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x28b668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x28b66c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b670: 0xc6440058  lwc1        $f4, 0x58($s2)
    ctx->pc = 0x28b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b674: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28b674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b67c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x28b680: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28b684: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x28b684u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28b688: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B688u;
    {
        const bool branch_taken_0x28b688 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B688u;
        // 0x28b68c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b688) {
            ctx->pc = 0x28B69Cu;
            goto label_28b69c;
        }
    }
    ctx->pc = 0x28B690u;
    // 0x28b690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b694: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28B694u;
    {
        const bool branch_taken_0x28b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B694u;
        // 0x28b698: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b694) {
            ctx->pc = 0x28B6B4u;
            goto label_28b6b4;
        }
    }
    ctx->pc = 0x28B69Cu;
label_28b69c:
    // 0x28b69c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28b6a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28b6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b6a8: 0x0  nop
    ctx->pc = 0x28b6a8u;
    // NOP
    // 0x28b6ac: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x28b6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28b6b0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x28b6b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_28b6b4:
    // 0x28b6b4: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x28b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x28b6b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28b6bc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x28b6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x28b6c0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x28b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28b6c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28b6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b6c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28b6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b6cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b6d0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28b6d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x28b6d4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b6d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b6d8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x28b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b6dc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x28b6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28b6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b6e4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x28b6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x28b6e8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x28B6E8u;
    SET_GPR_U32(ctx, 31, 0x28B6F0u);
    ctx->pc = 0x28B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6E8u;
    // 0x28b6ec: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x28B6E8u, 0x28B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6F0u;
label_28b6f0:
    // 0x28b6f0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x28b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28b6f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b6f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28b6f8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x28B6F8u;
    SET_GPR_U32(ctx, 31, 0x28B700u);
    ctx->pc = 0x28B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6F8u;
    // 0x28b6fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x28B6F8u, 0x28B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B700u;
label_28b700:
    // 0x28b700: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x28b700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x28b704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B704u;
    {
        const bool branch_taken_0x28b704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b704) {
            ctx->pc = 0x28B718u;
            goto label_28b718;
        }
    }
    ctx->pc = 0x28B70Cu;
    // 0x28b70c: 0x92420027  lbu         $v0, 0x27($s2)
    ctx->pc = 0x28b70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x28b710: 0xa2020025  sb          $v0, 0x25($s0)
    ctx->pc = 0x28b710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x28b714: 0x0  nop
    ctx->pc = 0x28b714u;
    // NOP
label_28b718:
    // 0x28b718: 0x92420024  lbu         $v0, 0x24($s2)
    ctx->pc = 0x28b718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x28b71c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28b71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28b720: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28b720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b724: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B724u;
    {
        const bool branch_taken_0x28b724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b724) {
            ctx->pc = 0x28B730u;
            goto label_28b730;
        }
    }
    ctx->pc = 0x28B72Cu;
    // 0x28b72c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b730:
    // 0x28b730: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b734: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b738: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28b73c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28b73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28b740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b744: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b748: 0x3e00008  jr          $ra
    ctx->pc = 0x28B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B748u;
        // 0x28b74c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B750u;
}
