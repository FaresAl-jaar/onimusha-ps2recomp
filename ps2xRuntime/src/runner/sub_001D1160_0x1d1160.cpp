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

// Function: sub_001D1160
// Address: 0x1d1160 - 0x1d146c
void sub_001D1160_0x1d1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1160_0x1d1160");
#endif

    switch (ctx->pc) {
        case 0x1d118cu: goto label_1d118c;
        default: break;
    }

    ctx->pc = 0x1d1160u;

    // 0x1d1160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d1164: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d1168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d116c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1170: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1178: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d1178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d117c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1180: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d1180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1184: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1D1184u;
    SET_GPR_U32(ctx, 31, 0x1D118Cu);
    ctx->pc = 0x1D1188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1184u;
    // 0x1d1188: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1D1184u, 0x1D118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D118Cu;
label_1d118c:
    // 0x1d118c: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x1d118cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d1190: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1194: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d1194u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1198: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x1d1198u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d119c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d119cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d11a0: 0x0  nop
    ctx->pc = 0x1d11a0u;
    // NOP
    // 0x1d11a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d11a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d11a8: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1d11a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d11ac: 0x0  nop
    ctx->pc = 0x1d11acu;
    // NOP
    // 0x1d11b0: 0x0  nop
    ctx->pc = 0x1d11b0u;
    // NOP
    // 0x1d11b4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D11B4u;
    {
        const bool branch_taken_0x1d11b4 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1d11b4) {
            ctx->pc = 0x1D11C8u;
            goto label_1d11c8;
        }
    }
    ctx->pc = 0x1D11BCu;
    // 0x1d11bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d11bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d11c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D11C0u;
    {
        const bool branch_taken_0x1d11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11C0u;
        // 0x1d11c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11c0) {
            ctx->pc = 0x1D11E4u;
            goto label_1d11e4;
        }
    }
    ctx->pc = 0x1D11C8u;
label_1d11c8:
    // 0x1d11c8: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x1d11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1d11cc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1d11ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1d11d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d11d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d11d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d11d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d11d8: 0x0  nop
    ctx->pc = 0x1d11d8u;
    // NOP
    // 0x1d11dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d11dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d11e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d11e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d11e4:
    // 0x1d11e4: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d11e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d11ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d11ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d11f0: 0x84460008  lh          $a2, 0x8($v0)
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d11f4: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x1d11f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1d11f8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1d11f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d11fc: 0x94470006  lhu         $a3, 0x6($v0)
    ctx->pc = 0x1d11fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d1200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d1200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1204: 0x0  nop
    ctx->pc = 0x1d1204u;
    // NOP
    // 0x1d1208: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d1208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d120c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1d120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d1210: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d1210u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d1214: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d1214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d1218: 0x0  nop
    ctx->pc = 0x1d1218u;
    // NOP
    // 0x1d121c: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x1d121cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d1220: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1220u;
    {
        const bool branch_taken_0x1d1220 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x1D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1220u;
        // 0x1d1224: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1220) {
            ctx->pc = 0x1D1234u;
            goto label_1d1234;
        }
    }
    ctx->pc = 0x1D1228u;
    // 0x1d1228: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1d1228u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d122c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D122Cu;
    {
        const bool branch_taken_0x1d122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D122Cu;
        // 0x1d1230: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d122c) {
            ctx->pc = 0x1D1250u;
            goto label_1d1250;
        }
    }
    ctx->pc = 0x1D1234u;
label_1d1234:
    // 0x1d1234: 0x72042  srl         $a0, $a3, 1
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x1d1238: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1d1238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1d123c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d123cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d1240: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d1240u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1244: 0x0  nop
    ctx->pc = 0x1d1244u;
    // NOP
    // 0x1d1248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d124c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d124cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d1250:
    // 0x1d1250: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1d1254: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1d1254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1d1258: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1d1258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d125c: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x1d125cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d1260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d1264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1268: 0x0  nop
    ctx->pc = 0x1d1268u;
    // NOP
    // 0x1d126c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d126cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d1270: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
    ctx->pc = 0x1D1270u;
    {
        const bool branch_taken_0x1d1270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1270u;
        // 0x1d1274: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1270) {
            ctx->pc = 0x1D1448u;
            goto label_1d1448;
        }
    }
    ctx->pc = 0x1D1278u;
    // 0x1d1278: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1d1278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1d127c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d1280: 0x24845ac0  addiu       $a0, $a0, 0x5AC0
    ctx->pc = 0x1d1280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23232));
    // 0x1d1284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1288: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d128c: 0x600008  jr          $v1
    ctx->pc = 0x1D128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1298u: goto label_1d1298;
            case 0x1D12E0u: goto label_1d12e0;
            case 0x1D1328u: goto label_1d1328;
            case 0x1D1370u: goto label_1d1370;
            case 0x1D13B8u: goto label_1d13b8;
            case 0x1D1400u: goto label_1d1400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D128Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1294u;
    // 0x1d1294: 0x0  nop
    ctx->pc = 0x1d1294u;
    // NOP
label_1d1298:
    // 0x1d1298: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d129c: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x1d129cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d12a0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1d12a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d12a4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d12a8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1d12ac: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x1d12acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d12b0: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1d12b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d12b4: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1d12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1d12b8: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1d12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1d12bc: 0xe6440020  swc1        $f4, 0x20($s2)
    ctx->pc = 0x1d12bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d12c0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d12c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d12c4: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1d12c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1d12c8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1d12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1d12cc: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x1d12ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1d12d0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x1d12d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1d12d4: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1d12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1d12d8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1D12D8u;
    {
        const bool branch_taken_0x1d12d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12D8u;
        // 0x1d12dc: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12d8) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D12E0u;
label_1d12e0:
    // 0x1d12e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d12e4: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x1d12e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d12e8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d12e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d12ec: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d12f0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1d12f4: 0xe6440010  swc1        $f4, 0x10($s2)
    ctx->pc = 0x1d12f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d12f8: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1d12f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d12fc: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1d12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1d1300: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1d1300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1d1304: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1d1304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d1308: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d1308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d130c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1d130cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1d1310: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1d1310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1d1314: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x1d1314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1d1318: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x1d1318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1d131c: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1d131cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1d1320: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1D1320u;
    {
        const bool branch_taken_0x1d1320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1320u;
        // 0x1d1324: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1320) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D1328u;
label_1d1328:
    // 0x1d1328: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d132c: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1d132cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d1330: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d1330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d1334: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d1334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d1338: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d1338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1d133c: 0xe6440010  swc1        $f4, 0x10($s2)
    ctx->pc = 0x1d133cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d1340: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d1340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d1344: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1d1344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1d1348: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1d1348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1d134c: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1d134cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d1350: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x1d1350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d1354: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1d1354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1d1358: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1d1358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1d135c: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x1d135cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1d1360: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x1d1360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1d1364: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1d1364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1d1368: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D1368u;
    {
        const bool branch_taken_0x1d1368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1368u;
        // 0x1d136c: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1368) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D1370u;
label_1d1370:
    // 0x1d1370: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1374: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1d1374u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d1378: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1d1378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d137c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d137cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d1380: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d1380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1d1384: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x1d1384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d1388: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d1388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d138c: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1d138cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1d1390: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1d1390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1d1394: 0xe6440020  swc1        $f4, 0x20($s2)
    ctx->pc = 0x1d1394u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d1398: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x1d1398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d139c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1d139cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1d13a0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1d13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1d13a4: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x1d13a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1d13a8: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x1d13a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1d13ac: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1d13acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1d13b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D13B0u;
    {
        const bool branch_taken_0x1d13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13B0u;
        // 0x1d13b4: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13b0) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D13B8u;
label_1d13b8:
    // 0x1d13b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d13bc: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1d13bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d13c0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1d13c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d13c4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d13c8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1d13cc: 0xe6440010  swc1        $f4, 0x10($s2)
    ctx->pc = 0x1d13ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d13d0: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1d13d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d13d4: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1d13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1d13d8: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1d13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1d13dc: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1d13dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d13e0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d13e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d13e4: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1d13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1d13e8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1d13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1d13ec: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x1d13ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1d13f0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x1d13f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1d13f4: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1d13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1d13f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D13F8u;
    {
        const bool branch_taken_0x1d13f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13F8u;
        // 0x1d13fc: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13f8) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D1400u;
label_1d1400:
    // 0x1d1400: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1404: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x1d1404u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d1408: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d1408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d140c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d140cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d1410: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d1410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1d1414: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x1d1414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d1418: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d1418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d141c: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1d141cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1d1420: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1d1420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1d1424: 0xe6440020  swc1        $f4, 0x20($s2)
    ctx->pc = 0x1d1424u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d1428: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x1d1428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d142c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1d142cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1d1430: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1d1430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1d1434: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x1d1434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1d1438: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x1d1438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1d143c: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1d143cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1d1440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1440u;
    {
        const bool branch_taken_0x1d1440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1440u;
        // 0x1d1444: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1440) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D1448u;
label_1d1448:
    // 0x1d1448: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1448u;
    {
        const bool branch_taken_0x1d1448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1448u;
        // 0x1d144c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1448) {
            ctx->pc = 0x1D1450u;
            goto label_1d1450;
        }
    }
    ctx->pc = 0x1D1450u;
label_1d1450:
    // 0x1d1450: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d1450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1454: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d1454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1458: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d145c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d145cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1464: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1464u;
        // 0x1d1468: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D146Cu;
}
