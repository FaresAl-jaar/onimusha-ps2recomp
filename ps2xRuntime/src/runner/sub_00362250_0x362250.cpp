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

// Function: sub_00362250
// Address: 0x362250 - 0x362468
void sub_00362250_0x362250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362250_0x362250");
#endif

    switch (ctx->pc) {
        case 0x3622a0u: goto label_3622a0;
        case 0x3622b0u: goto label_3622b0;
        case 0x3622f0u: goto label_3622f0;
        case 0x362304u: goto label_362304;
        case 0x36231cu: goto label_36231c;
        case 0x362330u: goto label_362330;
        case 0x362340u: goto label_362340;
        case 0x3623b0u: goto label_3623b0;
        case 0x362458u: goto label_362458;
        default: break;
    }

    ctx->pc = 0x362250u;

    // 0x362250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36225c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362260: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x362260u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x362264: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x362264u;
    {
        const bool branch_taken_0x362264 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x362268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362264u;
        // 0x362268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362264) {
            ctx->pc = 0x3622E0u;
            goto label_3622e0;
        }
    }
    ctx->pc = 0x36226Cu;
    // 0x36226c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362270: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x362270u;
    {
        const bool branch_taken_0x362270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x362270) {
            ctx->pc = 0x3622C0u;
            goto label_3622c0;
        }
    }
    ctx->pc = 0x362278u;
    // 0x362278: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x362278u;
    {
        const bool branch_taken_0x362278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x362278) {
            ctx->pc = 0x362288u;
            goto label_362288;
        }
    }
    ctx->pc = 0x362280u;
    // 0x362280: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x362280u;
    {
        const bool branch_taken_0x362280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362280) {
            ctx->pc = 0x362458u;
            goto label_362458;
        }
    }
    ctx->pc = 0x362288u;
label_362288:
    // 0x362288: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362288u;
    {
        const bool branch_taken_0x362288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x362288) {
            ctx->pc = 0x3622A8u;
            goto label_3622a8;
        }
    }
    ctx->pc = 0x362290u;
    // 0x362290: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x362290u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x362294: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x362294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x362298: 0xc0a9dd4  jal         func_2A7750
    ctx->pc = 0x362298u;
    SET_GPR_U32(ctx, 31, 0x3622A0u);
    ctx->pc = 0x36229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362298u;
    // 0x36229c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7750u, 0x362298u, 0x3622A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622A0u;
label_3622a0:
    // 0x3622a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3622A0u;
    {
        const bool branch_taken_0x3622a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3622A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622A0u;
        // 0x3622a4: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622a0) {
            ctx->pc = 0x3622B0u;
            goto label_3622b0;
        }
    }
    ctx->pc = 0x3622A8u;
label_3622a8:
    // 0x3622a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3622A8u;
    SET_GPR_U32(ctx, 31, 0x3622B0u);
    ctx->pc = 0x3622ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622A8u;
    // 0x3622ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3622A8u, 0x3622B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622B0u;
label_3622b0:
    // 0x3622b0: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3622b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3622b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3622b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3622b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3622B8u;
    {
        const bool branch_taken_0x3622b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3622BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622B8u;
        // 0x3622bc: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622b8) {
            ctx->pc = 0x362458u;
            goto label_362458;
        }
    }
    ctx->pc = 0x3622C0u;
label_3622c0:
    // 0x3622c0: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3622c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3622c4: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3622c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3622c8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3622c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3622cc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3622ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3622d0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3622d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3622d4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3622d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3622d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3622d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3622dc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3622dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3622e0:
    // 0x3622e0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3622e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3622e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3622e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622e8: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3622E8u;
    SET_GPR_U32(ctx, 31, 0x3622F0u);
    ctx->pc = 0x3622ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622E8u;
    // 0x3622ec: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3622E8u, 0x3622F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622F0u;
label_3622f0:
    // 0x3622f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3622f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3622f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3622f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3622f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3622f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3622fc: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3622FCu;
    SET_GPR_U32(ctx, 31, 0x362304u);
    ctx->pc = 0x362300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622FCu;
    // 0x362300: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3622FCu, 0x362304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362304u;
label_362304:
    // 0x362304: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x362304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x362308: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x362308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x36230c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x36230cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x362310: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x362310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x362314: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x362314u;
    SET_GPR_U32(ctx, 31, 0x36231Cu);
    ctx->pc = 0x362318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362314u;
    // 0x362318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x362314u, 0x36231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36231Cu;
label_36231c:
    // 0x36231c: 0xe6000554  swc1        $f0, 0x554($s0)
    ctx->pc = 0x36231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x362320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362324: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x362324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x362328: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x362328u;
    SET_GPR_U32(ctx, 31, 0x362330u);
    ctx->pc = 0x36232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362328u;
    // 0x36232c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x362328u, 0x362330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362330u;
label_362330:
    // 0x362330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362330u;
    {
        const bool branch_taken_0x362330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362330u;
        // 0x362334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362330) {
            ctx->pc = 0x362340u;
            goto label_362340;
        }
    }
    ctx->pc = 0x362338u;
    // 0x362338: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362338u;
    SET_GPR_U32(ctx, 31, 0x362340u);
    ctx->pc = 0x36233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362338u;
    // 0x36233c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362338u, 0x362340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362340u;
label_362340:
    // 0x362340: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x362340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x362344: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x362344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x362348: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x362348u;
    {
        const bool branch_taken_0x362348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362348u;
        // 0x36234c: 0x2881001a  slti        $at, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362348) {
            ctx->pc = 0x3623B0u;
            goto label_3623b0;
        }
    }
    ctx->pc = 0x362350u;
    // 0x362350: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x362350u;
    {
        const bool branch_taken_0x362350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x362350) {
            ctx->pc = 0x3623B0u;
            goto label_3623b0;
        }
    }
    ctx->pc = 0x362358u;
    // 0x362358: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x362358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x36235c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x36235cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x362360: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x362360u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x362364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362368: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x362368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36236c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36236cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362370: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x362370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x362374: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x362374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x362378: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x362378u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x36237c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x36237cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x362380: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x362380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x362384: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x362384u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x362388: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x362388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x36238c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x36238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x362390: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x362390u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x362394: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x362394u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x362398: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x362398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36239c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x36239cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3623a0: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3623a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3623a4: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3623a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3623a8: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3623A8u;
    SET_GPR_U32(ctx, 31, 0x3623B0u);
    ctx->pc = 0x3623ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623A8u;
    // 0x3623ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3623A8u, 0x3623B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623B0u;
label_3623b0:
    // 0x3623b0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3623b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3623b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3623B4u;
    {
        const bool branch_taken_0x3623b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623B4u;
        // 0x3623b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623b4) {
            ctx->pc = 0x3623C8u;
            goto label_3623c8;
        }
    }
    ctx->pc = 0x3623BCu;
    // 0x3623bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3623BCu;
    {
        const bool branch_taken_0x3623bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3623bc) {
            ctx->pc = 0x362448u;
            goto label_362448;
        }
    }
    ctx->pc = 0x3623C4u;
    // 0x3623c4: 0x0  nop
    ctx->pc = 0x3623c4u;
    // NOP
label_3623c8:
    // 0x3623c8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3623c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3623cc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3623ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3623d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3623d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3623d4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3623d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3623d8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3623d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3623dc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3623DCu;
    {
        const bool branch_taken_0x3623dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3623dc) {
            ctx->pc = 0x362418u;
            goto label_362418;
        }
    }
    ctx->pc = 0x3623E4u;
    // 0x3623e4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3623e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3623e8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3623e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3623ec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3623ECu;
    {
        const bool branch_taken_0x3623ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3623F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623ECu;
        // 0x3623f0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623ec) {
            ctx->pc = 0x362440u;
            goto label_362440;
        }
    }
    ctx->pc = 0x3623F4u;
    // 0x3623f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3623f8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3623f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3623fc: 0x0  nop
    ctx->pc = 0x3623fcu;
    // NOP
    // 0x362400: 0x0  nop
    ctx->pc = 0x362400u;
    // NOP
    // 0x362404: 0x2010  mfhi        $a0
    ctx->pc = 0x362404u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x362408: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x362408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x36240c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36240Cu;
    {
        const bool branch_taken_0x36240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36240Cu;
        // 0x362410: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36240c) {
            ctx->pc = 0x362440u;
            goto label_362440;
        }
    }
    ctx->pc = 0x362414u;
    // 0x362414: 0x0  nop
    ctx->pc = 0x362414u;
    // NOP
label_362418:
    // 0x362418: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x362418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x36241c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x36241cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x362420: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362420u;
    {
        const bool branch_taken_0x362420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362420) {
            ctx->pc = 0x362440u;
            goto label_362440;
        }
    }
    ctx->pc = 0x362428u;
    // 0x362428: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x362428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x36242c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362430: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x362430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x362434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x362434u;
    {
        const bool branch_taken_0x362434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362434u;
        // 0x362438: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362434) {
            ctx->pc = 0x362448u;
            goto label_362448;
        }
    }
    ctx->pc = 0x36243Cu;
    // 0x36243c: 0x0  nop
    ctx->pc = 0x36243cu;
    // NOP
label_362440:
    // 0x362440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362444: 0x0  nop
    ctx->pc = 0x362444u;
    // NOP
label_362448:
    // 0x362448: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x362448u;
    {
        const bool branch_taken_0x362448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362448u;
        // 0x36244c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362448) {
            ctx->pc = 0x362458u;
            goto label_362458;
        }
    }
    ctx->pc = 0x362450u;
    // 0x362450: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362450u;
    SET_GPR_U32(ctx, 31, 0x362458u);
    ctx->pc = 0x362454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362450u;
    // 0x362454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362450u, 0x362458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362458u;
label_362458:
    // 0x362458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36245c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36245cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362460: 0x3e00008  jr          $ra
    ctx->pc = 0x362460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362460u;
        // 0x362464: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362468u;
}
