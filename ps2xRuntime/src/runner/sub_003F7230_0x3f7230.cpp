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

// Function: sub_003F7230
// Address: 0x3f7230 - 0x3f73c4
void sub_003F7230_0x3f7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7230_0x3f7230");
#endif

    switch (ctx->pc) {
        case 0x3f7294u: goto label_3f7294;
        case 0x3f72a0u: goto label_3f72a0;
        case 0x3f72b8u: goto label_3f72b8;
        case 0x3f7320u: goto label_3f7320;
        case 0x3f7364u: goto label_3f7364;
        case 0x3f7384u: goto label_3f7384;
        default: break;
    }

    ctx->pc = 0x3f7230u;

    // 0x3f7230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3f7234: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x3f7234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x3f7238: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3f7238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3f723c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3f7240: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3f7240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3f7244: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f7244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3f7248: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3f7248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f724c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f7250: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x3f7250u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x3f7254: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f7254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f7258: 0x26732628  addiu       $s3, $s3, 0x2628
    ctx->pc = 0x3f7258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9768));
    // 0x3f725c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f7260: 0x84232632  lh          $v1, 0x2632($at)
    ctx->pc = 0x3f7260u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E2632u));
    // 0x3f7264: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x3f7264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3f7268: 0x24720002  addiu       $s2, $v1, 0x2
    ctx->pc = 0x3f7268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3f726c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x3f726cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3f7270: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F7270u;
    {
        const bool branch_taken_0x3f7270 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3F7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7270u;
        // 0x3f7274: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7270) {
            ctx->pc = 0x3F7280u;
            goto label_3f7280;
        }
    }
    ctx->pc = 0x3F7278u;
    // 0x3f7278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f727c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x3f727cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_3f7280:
    // 0x3f7280: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3f7280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3f7284: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x3f7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3f7288: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f7288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f728c: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x3F728Cu;
    SET_GPR_U32(ctx, 31, 0x3F7294u);
    ctx->pc = 0x3F7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F728Cu;
    // 0x3f7290: 0x438823  subu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x3F728Cu, 0x3F7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7294u;
label_3f7294:
    // 0x3f7294: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f7294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f7298: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x3F7298u;
    SET_GPR_U32(ctx, 31, 0x3F72A0u);
    ctx->pc = 0x3F729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7298u;
    // 0x3f729c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x3F7298u, 0x3F72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F72A0u;
label_3f72a0:
    // 0x3f72a0: 0x82830003  lb          $v1, 0x3($s4)
    ctx->pc = 0x3f72a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3f72a4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f72a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f72a8: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F72A8u;
    {
        const bool branch_taken_0x3f72a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72A8u;
        // 0x3f72ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72a8) {
            ctx->pc = 0x3F73A0u;
            goto label_3f73a0;
        }
    }
    ctx->pc = 0x3F72B0u;
    // 0x3f72b0: 0x279584b0  addiu       $s5, $gp, -0x7B50
    ctx->pc = 0x3f72b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935728));
    // 0x3f72b4: 0x0  nop
    ctx->pc = 0x3f72b4u;
    // NOP
label_3f72b8:
    // 0x3f72b8: 0x82820004  lb          $v0, 0x4($s4)
    ctx->pc = 0x3f72b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3f72bc: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F72BCu;
    {
        const bool branch_taken_0x3f72bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f72bc) {
            ctx->pc = 0x3F7320u;
            goto label_3f7320;
        }
    }
    ctx->pc = 0x3F72C4u;
    // 0x3f72c4: 0x86660008  lh          $a2, 0x8($s3)
    ctx->pc = 0x3f72c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3f72c8: 0x8668000a  lh          $t0, 0xA($s3)
    ctx->pc = 0x3f72c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x3f72cc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F72CCu;
    {
        const bool branch_taken_0x3f72cc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3F72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72CCu;
        // 0x3f72d0: 0x62043  sra         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72cc) {
            ctx->pc = 0x3F72DCu;
            goto label_3f72dc;
        }
    }
    ctx->pc = 0x3F72D4u;
    // 0x3f72d4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3f72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3f72d8: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x3f72d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_3f72dc:
    // 0x3f72dc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3f72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f72e0: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x3f72e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3f72e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3f72e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3f72e8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x3f72e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3f72ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F72ECu;
    {
        const bool branch_taken_0x3f72ec = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3F72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72ECu;
        // 0x3f72f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72ec) {
            ctx->pc = 0x3F72FCu;
            goto label_3f72fc;
        }
    }
    ctx->pc = 0x3F72F4u;
    // 0x3f72f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f72f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3f72f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3f72fc:
    // 0x3f72fc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3f72fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3f7300: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x3f7300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3f7304: 0x8c297184  lw          $t1, 0x7184($at)
    ctx->pc = 0x3f7304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29060)));
    // 0x3f7308: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x3f7308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3f730c: 0x2222823  subu        $a1, $s1, $v0
    ctx->pc = 0x3f730cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3f7310: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3f7310u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3f7314: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3f7314u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3f7318: 0xc09c4e0  jal         func_271380
    ctx->pc = 0x3F7318u;
    SET_GPR_U32(ctx, 31, 0x3F7320u);
    ctx->pc = 0x3F731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7318u;
    // 0x3f731c: 0x3406fffa  ori         $a2, $zero, 0xFFFA (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271380u, 0x3F7318u, 0x3F7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7320u;
label_3f7320:
    // 0x3f7320: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3f7320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3f7324: 0x24425b68  addiu       $v0, $v0, 0x5B68
    ctx->pc = 0x3f7324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
    // 0x3f7328: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f7328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f732c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f7330: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x3f7330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3f7334: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x3f7334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3f7338: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f733c: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x3f733cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3f7340: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3f7340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3f7344: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3f7344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f7348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f7348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f734c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3f734cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3f7350: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x3f7350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3f7354: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3f7354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7358: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f735c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3F735Cu;
    SET_GPR_U32(ctx, 31, 0x3F7364u);
    ctx->pc = 0x3F7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F735Cu;
    // 0x3f7360: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3F735Cu, 0x3F7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7364u;
label_3f7364:
    // 0x3f7364: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3f7364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3f7368: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f7368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f736c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f7370: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3f7370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f7374: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f7374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7378: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x3f7378u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x3f737c: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x3F737Cu;
    SET_GPR_U32(ctx, 31, 0x3F7384u);
    ctx->pc = 0x3F7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F737Cu;
    // 0x3f7380: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x3F737Cu, 0x3F7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7384u;
label_3f7384:
    // 0x3f7384: 0x82830003  lb          $v1, 0x3($s4)
    ctx->pc = 0x3f7384u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x3f7388: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f7388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f738c: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3f738cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3f7390: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3f7390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f7394: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3F7394u;
    {
        const bool branch_taken_0x3f7394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7394u;
        // 0x3f7398: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7394) {
            ctx->pc = 0x3F72B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f72b8;
        }
    }
    ctx->pc = 0x3F739Cu;
    // 0x3f739c: 0x0  nop
    ctx->pc = 0x3f739cu;
    // NOP
label_3f73a0:
    // 0x3f73a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3f73a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f73a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f73a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f73a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3f73a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f73ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f73acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f73b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f73b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f73b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f73b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f73b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f73b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f73bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F73BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73BCu;
        // 0x3f73c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F73BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F73C4u;
}
