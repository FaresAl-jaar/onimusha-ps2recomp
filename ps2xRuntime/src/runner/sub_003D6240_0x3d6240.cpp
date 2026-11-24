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

// Function: sub_003D6240
// Address: 0x3d6240 - 0x3d6380
void sub_003D6240_0x3d6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6240_0x3d6240");
#endif

    switch (ctx->pc) {
        case 0x3d6240u: goto label_3d6240;
        case 0x3d6244u: goto label_3d6244;
        case 0x3d6248u: goto label_3d6248;
        case 0x3d624cu: goto label_3d624c;
        case 0x3d6250u: goto label_3d6250;
        case 0x3d6254u: goto label_3d6254;
        case 0x3d6258u: goto label_3d6258;
        case 0x3d625cu: goto label_3d625c;
        case 0x3d6260u: goto label_3d6260;
        case 0x3d6264u: goto label_3d6264;
        case 0x3d6268u: goto label_3d6268;
        case 0x3d626cu: goto label_3d626c;
        case 0x3d6270u: goto label_3d6270;
        case 0x3d6274u: goto label_3d6274;
        case 0x3d6278u: goto label_3d6278;
        case 0x3d627cu: goto label_3d627c;
        case 0x3d6280u: goto label_3d6280;
        case 0x3d6284u: goto label_3d6284;
        case 0x3d6288u: goto label_3d6288;
        case 0x3d628cu: goto label_3d628c;
        case 0x3d6290u: goto label_3d6290;
        case 0x3d6294u: goto label_3d6294;
        case 0x3d6298u: goto label_3d6298;
        case 0x3d629cu: goto label_3d629c;
        case 0x3d62a0u: goto label_3d62a0;
        case 0x3d62a4u: goto label_3d62a4;
        case 0x3d62a8u: goto label_3d62a8;
        case 0x3d62acu: goto label_3d62ac;
        case 0x3d62b0u: goto label_3d62b0;
        case 0x3d62b4u: goto label_3d62b4;
        case 0x3d62b8u: goto label_3d62b8;
        case 0x3d62bcu: goto label_3d62bc;
        case 0x3d62c0u: goto label_3d62c0;
        case 0x3d62c4u: goto label_3d62c4;
        case 0x3d62c8u: goto label_3d62c8;
        case 0x3d62ccu: goto label_3d62cc;
        case 0x3d62d0u: goto label_3d62d0;
        case 0x3d62d4u: goto label_3d62d4;
        case 0x3d62d8u: goto label_3d62d8;
        case 0x3d62dcu: goto label_3d62dc;
        case 0x3d62e0u: goto label_3d62e0;
        case 0x3d62e4u: goto label_3d62e4;
        case 0x3d62e8u: goto label_3d62e8;
        case 0x3d62ecu: goto label_3d62ec;
        case 0x3d62f0u: goto label_3d62f0;
        case 0x3d62f4u: goto label_3d62f4;
        case 0x3d62f8u: goto label_3d62f8;
        case 0x3d62fcu: goto label_3d62fc;
        case 0x3d6300u: goto label_3d6300;
        case 0x3d6304u: goto label_3d6304;
        case 0x3d6308u: goto label_3d6308;
        case 0x3d630cu: goto label_3d630c;
        case 0x3d6310u: goto label_3d6310;
        case 0x3d6314u: goto label_3d6314;
        case 0x3d6318u: goto label_3d6318;
        case 0x3d631cu: goto label_3d631c;
        case 0x3d6320u: goto label_3d6320;
        case 0x3d6324u: goto label_3d6324;
        case 0x3d6328u: goto label_3d6328;
        case 0x3d632cu: goto label_3d632c;
        case 0x3d6330u: goto label_3d6330;
        case 0x3d6334u: goto label_3d6334;
        case 0x3d6338u: goto label_3d6338;
        case 0x3d633cu: goto label_3d633c;
        case 0x3d6340u: goto label_3d6340;
        case 0x3d6344u: goto label_3d6344;
        case 0x3d6348u: goto label_3d6348;
        case 0x3d634cu: goto label_3d634c;
        case 0x3d6350u: goto label_3d6350;
        case 0x3d6354u: goto label_3d6354;
        case 0x3d6358u: goto label_3d6358;
        case 0x3d635cu: goto label_3d635c;
        case 0x3d6360u: goto label_3d6360;
        case 0x3d6364u: goto label_3d6364;
        case 0x3d6368u: goto label_3d6368;
        case 0x3d636cu: goto label_3d636c;
        case 0x3d6370u: goto label_3d6370;
        case 0x3d6374u: goto label_3d6374;
        case 0x3d6378u: goto label_3d6378;
        case 0x3d637cu: goto label_3d637c;
        default: break;
    }

    ctx->pc = 0x3d6240u;

label_3d6240:
    // 0x3d6240: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d6240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d6244:
    // 0x3d6244: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d6248:
    // 0x3d6248: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d6248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3d624c:
    // 0x3d624c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d6250:
    // 0x3d6250: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d6250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d6254:
    // 0x3d6254: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d6254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d6258:
    // 0x3d6258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d625c:
    // 0x3d625c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d625cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d6260:
    // 0x3d6260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d6264:
    // 0x3d6264: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d6264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d6268:
    // 0x3d6268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d626c:
    // 0x3d626c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d626cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d6270:
    // 0x3d6270: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
label_3d6274:
    if (ctx->pc == 0x3D6274u) {
        ctx->pc = 0x3D6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6270u;
        // 0x3d6274: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6278u;
        goto label_3d6278;
    }
    ctx->pc = 0x3D6270u;
    {
        const bool branch_taken_0x3d6270 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x3D6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6270u;
        // 0x3d6274: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6270) {
            ctx->pc = 0x3D6288u;
            goto label_3d6288;
        }
    }
    ctx->pc = 0x3D6278u;
label_3d6278:
    // 0x3d6278: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x3d6278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_3d627c:
    // 0x3d627c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3d6280:
    if (ctx->pc == 0x3D6280u) {
        ctx->pc = 0x3D6284u;
        goto label_3d6284;
    }
    ctx->pc = 0x3D627Cu;
    {
        const bool branch_taken_0x3d627c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d627c) {
            ctx->pc = 0x3D6290u;
            goto label_3d6290;
        }
    }
    ctx->pc = 0x3D6284u;
label_3d6284:
    // 0x3d6284: 0x0  nop
    ctx->pc = 0x3d6284u;
    // NOP
label_3d6288:
    // 0x3d6288: 0x10000033  b           . + 4 + (0x33 << 2)
label_3d628c:
    if (ctx->pc == 0x3D628Cu) {
        ctx->pc = 0x3D6290u;
        goto label_3d6290;
    }
    ctx->pc = 0x3D6288u;
    {
        const bool branch_taken_0x3d6288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6288) {
            ctx->pc = 0x3D6358u;
            goto label_3d6358;
        }
    }
    ctx->pc = 0x3D6290u;
label_3d6290:
    // 0x3d6290: 0x12a0c0  sll         $s4, $s2, 3
    ctx->pc = 0x3d6290u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_3d6294:
    // 0x3d6294: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x3d6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_3d6298:
    // 0x3d6298: 0x24752b59  addiu       $s5, $v1, 0x2B59
    ctx->pc = 0x3d6298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 11097));
label_3d629c:
    // 0x3d629c: 0x90632b59  lbu         $v1, 0x2B59($v1)
    ctx->pc = 0x3d629cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11097)));
label_3d62a0:
    // 0x3d62a0: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_3d62a4:
    if (ctx->pc == 0x3D62A4u) {
        ctx->pc = 0x3D62A8u;
        goto label_3d62a8;
    }
    ctx->pc = 0x3D62A0u;
    {
        const bool branch_taken_0x3d62a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d62a0) {
            ctx->pc = 0x3D6358u;
            goto label_3d6358;
        }
    }
    ctx->pc = 0x3D62A8u;
label_3d62a8:
    // 0x3d62a8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3d62a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3d62ac:
    // 0x3d62ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d62acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d62b0:
    // 0x3d62b0: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x3d62b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_3d62b4:
    // 0x3d62b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3d62b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d62b8:
    // 0x3d62b8: 0xc096cb8  jal         func_25B2E0
label_3d62bc:
    if (ctx->pc == 0x3D62BCu) {
        ctx->pc = 0x3D62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62B8u;
        // 0x3d62bc: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62C0u;
        goto label_3d62c0;
    }
    ctx->pc = 0x3D62B8u;
    SET_GPR_U32(ctx, 31, 0x3D62C0u);
    ctx->pc = 0x3D62BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D62B8u;
    // 0x3d62bc: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3D62B8u, 0x3D62C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D62C0u;
label_3d62c0:
    // 0x3d62c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d62c4:
    if (ctx->pc == 0x3D62C4u) {
        ctx->pc = 0x3D62C8u;
        goto label_3d62c8;
    }
    ctx->pc = 0x3D62C0u;
    {
        const bool branch_taken_0x3d62c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d62c0) {
            ctx->pc = 0x3D62D8u;
            goto label_3d62d8;
        }
    }
    ctx->pc = 0x3D62C8u;
label_3d62c8:
    // 0x3d62c8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x3d62c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d62cc:
    // 0x3d62cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d62d0:
    if (ctx->pc == 0x3D62D0u) {
        ctx->pc = 0x3D62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62CCu;
        // 0x3d62d0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62D4u;
        goto label_3d62d4;
    }
    ctx->pc = 0x3D62CCu;
    {
        const bool branch_taken_0x3d62cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62CCu;
        // 0x3d62d0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d62cc) {
            ctx->pc = 0x3D62E8u;
            goto label_3d62e8;
        }
    }
    ctx->pc = 0x3D62D4u;
label_3d62d4:
    // 0x3d62d4: 0x0  nop
    ctx->pc = 0x3d62d4u;
    // NOP
label_3d62d8:
    // 0x3d62d8: 0x3c024584  lui         $v0, 0x4584
    ctx->pc = 0x3d62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17796 << 16));
label_3d62dc:
    // 0x3d62dc: 0x34428c66  ori         $v0, $v0, 0x8C66
    ctx->pc = 0x3d62dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35942);
label_3d62e0:
    // 0x3d62e0: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x3d62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_3d62e4:
    // 0x3d62e4: 0x0  nop
    ctx->pc = 0x3d62e4u;
    // NOP
label_3d62e8:
    // 0x3d62e8: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x3d62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_3d62ec:
    // 0x3d62ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d62ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d62f0:
    // 0x3d62f0: 0xc0b2ebc  jal         func_2CBAF0
label_3d62f4:
    if (ctx->pc == 0x3D62F4u) {
        ctx->pc = 0x3D62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D62F0u;
        // 0x3d62f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D62F8u;
        goto label_3d62f8;
    }
    ctx->pc = 0x3D62F0u;
    SET_GPR_U32(ctx, 31, 0x3D62F8u);
    ctx->pc = 0x3D62F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D62F0u;
    // 0x3d62f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3D62F0u, 0x3D62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D62F8u;
label_3d62f8:
    // 0x3d62f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d62f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d62fc:
    // 0x3d62fc: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_3d6300:
    if (ctx->pc == 0x3D6300u) {
        ctx->pc = 0x3D6304u;
        goto label_3d6304;
    }
    ctx->pc = 0x3D62FCu;
    {
        const bool branch_taken_0x3d62fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d62fc) {
            ctx->pc = 0x3D6320u;
            goto label_3d6320;
        }
    }
    ctx->pc = 0x3D6304u;
label_3d6304:
    // 0x3d6304: 0xa2c007d8  sb          $zero, 0x7D8($s6)
    ctx->pc = 0x3d6304u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2008), (uint8_t)GPR_U32(ctx, 0));
label_3d6308:
    // 0x3d6308: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3d6308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_3d630c:
    // 0x3d630c: 0x7ec20020  sq          $v0, 0x20($s6)
    ctx->pc = 0x3d630cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), GPR_VEC(ctx, 2));
label_3d6310:
    // 0x3d6310: 0x8ed904d4  lw          $t9, 0x4D4($s6)
    ctx->pc = 0x3d6310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1236)));
label_3d6314:
    // 0x3d6314: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3d6314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3d6318:
    // 0x3d6318: 0x320f809  jalr        $t9
label_3d631c:
    if (ctx->pc == 0x3D631Cu) {
        ctx->pc = 0x3D631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6318u;
        // 0x3d631c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6320u;
        goto label_3d6320;
    }
    ctx->pc = 0x3D6318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D6320u);
        ctx->pc = 0x3D631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6318u;
        // 0x3d631c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6318u, 0x3D6320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6320u;
label_3d6320:
    // 0x3d6320: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_3d6324:
    if (ctx->pc == 0x3D6324u) {
        ctx->pc = 0x3D6328u;
        goto label_3d6328;
    }
    ctx->pc = 0x3D6320u;
    {
        const bool branch_taken_0x3d6320 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6320) {
            ctx->pc = 0x3D6350u;
            goto label_3d6350;
        }
    }
    ctx->pc = 0x3D6328u;
label_3d6328:
    // 0x3d6328: 0xa2d22c73  sb          $s2, 0x2C73($s6)
    ctx->pc = 0x3d6328u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11379), (uint8_t)GPR_U32(ctx, 18));
label_3d632c:
    // 0x3d632c: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x3d632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_3d6330:
    // 0x3d6330: 0xaed02c74  sw          $s0, 0x2C74($s6)
    ctx->pc = 0x3d6330u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11380), GPR_U32(ctx, 16));
label_3d6334:
    // 0x3d6334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d6334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6338:
    // 0x3d6338: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x3d6338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3d633c:
    // 0x3d633c: 0xac852b54  sw          $a1, 0x2B54($a0)
    ctx->pc = 0x3d633cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11092), GPR_U32(ctx, 5));
label_3d6340:
    // 0x3d6340: 0xa0802b58  sb          $zero, 0x2B58($a0)
    ctx->pc = 0x3d6340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11096), (uint8_t)GPR_U32(ctx, 0));
label_3d6344:
    // 0x3d6344: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d6348:
    if (ctx->pc == 0x3D6348u) {
        ctx->pc = 0x3D6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6344u;
        // 0x3d6348: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D634Cu;
        goto label_3d634c;
    }
    ctx->pc = 0x3D6344u;
    {
        const bool branch_taken_0x3d6344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6344u;
        // 0x3d6348: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6344) {
            ctx->pc = 0x3D6358u;
            goto label_3d6358;
        }
    }
    ctx->pc = 0x3D634Cu;
label_3d634c:
    // 0x3d634c: 0x0  nop
    ctx->pc = 0x3d634cu;
    // NOP
label_3d6350:
    // 0x3d6350: 0xc096c3c  jal         func_25B0F0
label_3d6354:
    if (ctx->pc == 0x3D6354u) {
        ctx->pc = 0x3D6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6350u;
        // 0x3d6354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6358u;
        goto label_3d6358;
    }
    ctx->pc = 0x3D6350u;
    SET_GPR_U32(ctx, 31, 0x3D6358u);
    ctx->pc = 0x3D6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6350u;
    // 0x3d6354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3D6350u, 0x3D6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6358u;
label_3d6358:
    // 0x3d6358: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d6358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d635c:
    // 0x3d635c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d635cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d6360:
    // 0x3d6360: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d6360u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d6364:
    // 0x3d6364: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d6364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d6368:
    // 0x3d6368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d6368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d636c:
    // 0x3d636c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d636cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6370:
    // 0x3d6370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d6370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6374:
    // 0x3d6374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d6378:
    // 0x3d6378: 0x3e00008  jr          $ra
label_3d637c:
    if (ctx->pc == 0x3D637Cu) {
        ctx->pc = 0x3D637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6378u;
        // 0x3d637c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6380u;
        goto label_fallthrough_0x3d6378;
    }
    ctx->pc = 0x3D6378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6378u;
        // 0x3d637c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d6378:
    ctx->pc = 0x3D6380u;
}
