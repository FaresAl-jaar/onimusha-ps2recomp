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

// Function: sub_001D8240
// Address: 0x1d8240 - 0x1d85a8
void sub_001D8240_0x1d8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8240_0x1d8240");
#endif

    switch (ctx->pc) {
        case 0x1d82d8u: goto label_1d82d8;
        case 0x1d82ecu: goto label_1d82ec;
        case 0x1d82fcu: goto label_1d82fc;
        case 0x1d830cu: goto label_1d830c;
        case 0x1d8328u: goto label_1d8328;
        case 0x1d8340u: goto label_1d8340;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d83f0u: goto label_1d83f0;
        case 0x1d8400u: goto label_1d8400;
        case 0x1d8418u: goto label_1d8418;
        case 0x1d8454u: goto label_1d8454;
        case 0x1d8464u: goto label_1d8464;
        case 0x1d847cu: goto label_1d847c;
        case 0x1d84b8u: goto label_1d84b8;
        case 0x1d84c8u: goto label_1d84c8;
        default: break;
    }

    ctx->pc = 0x1d8240u;

    // 0x1d8240: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d8244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8248: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d8248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d824c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1d824cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8250: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d8250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d8254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8258: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d8258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d825c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d825cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8260: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d8260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d8264: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1d8264u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8268: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d8268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d826c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d826cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8270: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d8270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d8274: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d8274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8278: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d8278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d827c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d827cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8280: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d8284: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d8284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d8288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d828c: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x1d828cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1d8290: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d8294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d8294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8298: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d8298u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d829c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d829cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82a0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d82a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d82a4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1d82a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d82a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d82a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d82ac: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1d82acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d82b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d82b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d82b4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1d82b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82b8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1d82b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d82bc: 0xafa800bc  sw          $t0, 0xBC($sp)
    ctx->pc = 0x1d82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
    // 0x1d82c0: 0xafa900b8  sw          $t1, 0xB8($sp)
    ctx->pc = 0x1d82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 9));
    // 0x1d82c4: 0xafab00b4  sw          $t3, 0xB4($sp)
    ctx->pc = 0x1d82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 11));
    // 0x1d82c8: 0x0  nop
    ctx->pc = 0x1d82c8u;
    // NOP
    // 0x1d82cc: 0x0  nop
    ctx->pc = 0x1d82ccu;
    // NOP
    // 0x1d82d0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D82D0u;
    SET_GPR_U32(ctx, 31, 0x1D82D8u);
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D82D0u, 0x1D82D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82D8u;
label_1d82d8:
    // 0x1d82d8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d82dc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d82e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d82e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82e4: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D82E4u;
    SET_GPR_U32(ctx, 31, 0x1D82ECu);
    ctx->pc = 0x1D82E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82E4u;
    // 0x1d82e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D82E4u, 0x1D82ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82ECu;
label_1d82ec:
    // 0x1d82ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d82ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d82f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d82f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d82f4: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D82F4u;
    SET_GPR_U32(ctx, 31, 0x1D82FCu);
    ctx->pc = 0x1D82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82F4u;
    // 0x1d82f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D82F4u, 0x1D82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82FCu;
label_1d82fc:
    // 0x1d82fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8300: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d8300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8304: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D8304u;
    SET_GPR_U32(ctx, 31, 0x1D830Cu);
    ctx->pc = 0x1D8308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8304u;
    // 0x1d8308: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D8304u, 0x1D830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D830Cu;
label_1d830c:
    // 0x1d830c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d830cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d8310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8314: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1d8314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1d8318: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x1d8318u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d831c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1d831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d8320: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D8320u;
    SET_GPR_U32(ctx, 31, 0x1D8328u);
    ctx->pc = 0x1D8324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8320u;
    // 0x1d8324: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D8320u, 0x1D8328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8328u;
label_1d8328:
    // 0x1d8328: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d832c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d832cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d8330: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x1D8330u;
    {
        const bool branch_taken_0x1d8330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8330u;
        // 0x1d8334: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8330) {
            ctx->pc = 0x1D84F0u;
            goto label_1d84f0;
        }
    }
    ctx->pc = 0x1D8338u;
    // 0x1d8338: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d8338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d833c: 0x27b70110  addiu       $s7, $sp, 0x110
    ctx->pc = 0x1d833cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1d8340:
    // 0x1d8340: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1d8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d8344: 0x29e182a  slt         $v1, $s4, $fp
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d8348: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d8348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d834c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d8350: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D8350u;
    {
        const bool branch_taken_0x1d8350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8350u;
        // 0x1d8354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8350) {
            ctx->pc = 0x1D83E0u;
            goto label_1d83e0;
        }
    }
    ctx->pc = 0x1D8358u;
    // 0x1d8358: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d8358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d835c: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D835Cu;
    SET_GPR_U32(ctx, 31, 0x1D8364u);
    ctx->pc = 0x1D8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D835Cu;
    // 0x1d8360: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D835Cu, 0x1D8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8364u;
label_1d8364:
    // 0x1d8364: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1d8364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d8368: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d836c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8370: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d8370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d8374: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x1d8374u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x1d8378: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1d8378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d837c: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D837Cu;
    SET_GPR_U32(ctx, 31, 0x1D8384u);
    ctx->pc = 0x1D8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D837Cu;
    // 0x1d8380: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D837Cu, 0x1D8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8384u;
label_1d8384:
    // 0x1d8384: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x1d8384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1d8388: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1d8388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d838c: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x1d838cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x1d8390: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x1d8390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1d8394: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x1d8394u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x1d8398: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1d8398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d839c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d839cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d83a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d83a4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d83a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d83a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d83a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d83ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d83acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d83b0: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d83b4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1d83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1d83b8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1d83bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d83bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d83c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d83c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d83c4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d83c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d83c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d83c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d83cc: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d83d0: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1d83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1d83d4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1D83D4u;
    {
        const bool branch_taken_0x1d83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83D4u;
        // 0x1d83d8: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83d4) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D83DCu;
    // 0x1d83dc: 0x0  nop
    ctx->pc = 0x1d83dcu;
    // NOP
label_1d83e0:
    // 0x1d83e0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d83e4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d83e8: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D83E8u;
    SET_GPR_U32(ctx, 31, 0x1D83F0u);
    ctx->pc = 0x1D83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83E8u;
    // 0x1d83ec: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D83E8u, 0x1D83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D83F0u;
label_1d83f0:
    // 0x1d83f0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1d83f0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1d83f4: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1d83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d83f8: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D83F8u;
    SET_GPR_U32(ctx, 31, 0x1D8400u);
    ctx->pc = 0x1D83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83F8u;
    // 0x1d83fc: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D83F8u, 0x1D8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8400u;
label_1d8400:
    // 0x1d8400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8408: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d8408u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d840c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d8410: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D8410u;
    SET_GPR_U32(ctx, 31, 0x1D8418u);
    ctx->pc = 0x1D8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8410u;
    // 0x1d8414: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D8410u, 0x1D8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8418u;
label_1d8418:
    // 0x1d8418: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d841c: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d8420: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d8420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8424: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1d8428: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d8428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d842c: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1d842cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1d8430: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d8430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8434: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1d8434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d8438: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1d8438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1d843c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1d843cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1d8440: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1d8440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x1d8444: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1d8444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d8448: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d8448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d844c: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D844Cu;
    SET_GPR_U32(ctx, 31, 0x1D8454u);
    ctx->pc = 0x1D8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D844Cu;
    // 0x1d8450: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D844Cu, 0x1D8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8454u;
label_1d8454:
    // 0x1d8454: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d8454u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d8458: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1d8458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1d845c: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D845Cu;
    SET_GPR_U32(ctx, 31, 0x1D8464u);
    ctx->pc = 0x1D8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D845Cu;
    // 0x1d8460: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D845Cu, 0x1D8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8464u;
label_1d8464:
    // 0x1d8464: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8468: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1d8468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d846c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d846cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d8470: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d8470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8474: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D8474u;
    SET_GPR_U32(ctx, 31, 0x1D847Cu);
    ctx->pc = 0x1D8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8474u;
    // 0x1d8478: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D8474u, 0x1D847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D847Cu;
label_1d847c:
    // 0x1d847c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x1d847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1d8480: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d8480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d8484: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8488: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d848c: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d848cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d8490: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d8490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8494: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1d8494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d8498: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d8498u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d849c: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x1d849cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x1d84a0: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1d84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1d84a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d84a8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d84a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d84ac: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x1d84acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x1d84b0: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D84B0u;
    SET_GPR_U32(ctx, 31, 0x1D84B8u);
    ctx->pc = 0x1D84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84B0u;
    // 0x1d84b4: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D84B0u, 0x1D84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84B8u;
label_1d84b8:
    // 0x1d84b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d84bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d84bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84c0: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D84C0u;
    SET_GPR_U32(ctx, 31, 0x1D84C8u);
    ctx->pc = 0x1D84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84C0u;
    // 0x1d84c4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D84C0u, 0x1D84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84C8u;
label_1d84c8:
    // 0x1d84c8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D84C8u;
    {
        const bool branch_taken_0x1d84c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d84c8) {
            ctx->pc = 0x1D84D8u;
            goto label_1d84d8;
        }
    }
    ctx->pc = 0x1D84D0u;
    // 0x1d84d0: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x1d84d0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x1d84d4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1d84d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_1d84d8:
    // 0x1d84d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d84dc: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d84e0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d84e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d84e4: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x1D84E4u;
    {
        const bool branch_taken_0x1d84e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84E4u;
        // 0x1d84e8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84e4) {
            ctx->pc = 0x1D8340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8340;
        }
    }
    ctx->pc = 0x1D84ECu;
    // 0x1d84ec: 0x0  nop
    ctx->pc = 0x1d84ecu;
    // NOP
label_1d84f0:
    // 0x1d84f0: 0x2561823  subu        $v1, $s2, $s6
    ctx->pc = 0x1d84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x1d84f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D84F4u;
    {
        const bool branch_taken_0x1d84f4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84F4u;
        // 0x1d84f8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84f4) {
            ctx->pc = 0x1D8504u;
            goto label_1d8504;
        }
    }
    ctx->pc = 0x1D84FCu;
    // 0x1d84fc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d8500: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d8500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d8504:
    // 0x1d8504: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d8504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8508: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d850c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d8510: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d8510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d8514: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d8514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d8518: 0x0  nop
    ctx->pc = 0x1d8518u;
    // NOP
    // 0x1d851c: 0x0  nop
    ctx->pc = 0x1d851cu;
    // NOP
    // 0x1d8520: 0x1010  mfhi        $v0
    ctx->pc = 0x1d8520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8524: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8528: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d8528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d852c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D852Cu;
    {
        const bool branch_taken_0x1d852c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D852Cu;
        // 0x1d8530: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d852c) {
            ctx->pc = 0x1D8558u;
            goto label_1d8558;
        }
    }
    ctx->pc = 0x1D8534u;
    // 0x1d8534: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1d8534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1d8538: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1d8538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d853c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d853cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d8540: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d8540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d8544: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x1d8544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d8548: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d8548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d854c: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x1d854cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x1d8550: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8550u;
    {
        const bool branch_taken_0x1d8550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8550u;
        // 0x1d8554: 0xfec20008  sd          $v0, 0x8($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8550) {
            ctx->pc = 0x1D8560u;
            goto label_1d8560;
        }
    }
    ctx->pc = 0x1D8558u;
label_1d8558:
    // 0x1d8558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8558u;
    {
        const bool branch_taken_0x1d8558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8558u;
        // 0x1d855c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8558) {
            ctx->pc = 0x1D8568u;
            goto label_1d8568;
        }
    }
    ctx->pc = 0x1D8560u;
label_1d8560:
    // 0x1d8560: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d8564: 0x0  nop
    ctx->pc = 0x1d8564u;
    // NOP
label_1d8568:
    // 0x1d8568: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d8568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d856c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d856cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8570: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d8570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d8574: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d8574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d8578: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d8578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d857c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d857cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8580: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d8584: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d8584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8588: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d858c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d858cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8590: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d8590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d8594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d8598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d859c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d859cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d85a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D85A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85A0u;
        // 0x1d85a4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D85A8u;
}
