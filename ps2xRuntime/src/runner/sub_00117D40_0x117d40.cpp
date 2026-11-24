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

// Function: sub_00117D40
// Address: 0x117d40 - 0x117e5c
void sub_00117D40_0x117d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D40_0x117d40");
#endif

    switch (ctx->pc) {
        case 0x117d40u: goto label_117d40;
        case 0x117d44u: goto label_117d44;
        case 0x117d48u: goto label_117d48;
        case 0x117d4cu: goto label_117d4c;
        case 0x117d50u: goto label_117d50;
        case 0x117d54u: goto label_117d54;
        case 0x117d58u: goto label_117d58;
        case 0x117d5cu: goto label_117d5c;
        case 0x117d60u: goto label_117d60;
        case 0x117d64u: goto label_117d64;
        case 0x117d68u: goto label_117d68;
        case 0x117d6cu: goto label_117d6c;
        case 0x117d70u: goto label_117d70;
        case 0x117d74u: goto label_117d74;
        case 0x117d78u: goto label_117d78;
        case 0x117d7cu: goto label_117d7c;
        case 0x117d80u: goto label_117d80;
        case 0x117d84u: goto label_117d84;
        case 0x117d88u: goto label_117d88;
        case 0x117d8cu: goto label_117d8c;
        case 0x117d90u: goto label_117d90;
        case 0x117d94u: goto label_117d94;
        case 0x117d98u: goto label_117d98;
        case 0x117d9cu: goto label_117d9c;
        case 0x117da0u: goto label_117da0;
        case 0x117da4u: goto label_117da4;
        case 0x117da8u: goto label_117da8;
        case 0x117dacu: goto label_117dac;
        case 0x117db0u: goto label_117db0;
        case 0x117db4u: goto label_117db4;
        case 0x117db8u: goto label_117db8;
        case 0x117dbcu: goto label_117dbc;
        case 0x117dc0u: goto label_117dc0;
        case 0x117dc4u: goto label_117dc4;
        case 0x117dc8u: goto label_117dc8;
        case 0x117dccu: goto label_117dcc;
        case 0x117dd0u: goto label_117dd0;
        case 0x117dd4u: goto label_117dd4;
        case 0x117dd8u: goto label_117dd8;
        case 0x117ddcu: goto label_117ddc;
        case 0x117de0u: goto label_117de0;
        case 0x117de4u: goto label_117de4;
        case 0x117de8u: goto label_117de8;
        case 0x117decu: goto label_117dec;
        case 0x117df0u: goto label_117df0;
        case 0x117df4u: goto label_117df4;
        case 0x117df8u: goto label_117df8;
        case 0x117dfcu: goto label_117dfc;
        case 0x117e00u: goto label_117e00;
        case 0x117e04u: goto label_117e04;
        case 0x117e08u: goto label_117e08;
        case 0x117e0cu: goto label_117e0c;
        case 0x117e10u: goto label_117e10;
        case 0x117e14u: goto label_117e14;
        case 0x117e18u: goto label_117e18;
        case 0x117e1cu: goto label_117e1c;
        case 0x117e20u: goto label_117e20;
        case 0x117e24u: goto label_117e24;
        case 0x117e28u: goto label_117e28;
        case 0x117e2cu: goto label_117e2c;
        case 0x117e30u: goto label_117e30;
        case 0x117e34u: goto label_117e34;
        case 0x117e38u: goto label_117e38;
        case 0x117e3cu: goto label_117e3c;
        case 0x117e40u: goto label_117e40;
        case 0x117e44u: goto label_117e44;
        case 0x117e48u: goto label_117e48;
        case 0x117e4cu: goto label_117e4c;
        case 0x117e50u: goto label_117e50;
        case 0x117e54u: goto label_117e54;
        case 0x117e58u: goto label_117e58;
        default: break;
    }

    ctx->pc = 0x117d40u;

label_117d40:
    // 0x117d40: 0x3c1a0069  lui         $k0, 0x69
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)105 << 16));
label_117d44:
    // 0x117d44: 0x275a1900  addiu       $k0, $k0, 0x1900
    ctx->pc = 0x117d44u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 6400));
label_117d48:
    // 0x117d48: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x117d48u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_117d4c:
    // 0x117d4c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x117d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_117d50:
    // 0x117d50: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x117d50u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_117d54:
    // 0x117d54: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x117d54u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_117d58:
    // 0x117d58: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x117d58u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_117d5c:
    // 0x117d5c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x117d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_117d60:
    // 0x117d60: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x117d60u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_117d64:
    // 0x117d64: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x117d64u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_117d68:
    // 0x117d68: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x117d68u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_117d6c:
    // 0x117d6c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x117d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_117d70:
    // 0x117d70: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x117d70u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_117d74:
    // 0x117d74: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x117d74u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_117d78:
    // 0x117d78: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x117d78u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_117d7c:
    // 0x117d7c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x117d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_117d80:
    // 0x117d80: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x117d80u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_117d84:
    // 0x117d84: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x117d84u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_117d88:
    // 0x117d88: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x117d88u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_117d8c:
    // 0x117d8c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x117d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_117d90:
    // 0x117d90: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x117d90u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_117d94:
    // 0x117d94: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x117d94u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_117d98:
    // 0x117d98: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x117d98u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_117d9c:
    // 0x117d9c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x117d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_117da0:
    // 0x117da0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x117da0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_117da4:
    // 0x117da4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x117da4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_117da8:
    // 0x117da8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x117da8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_117dac:
    // 0x117dac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x117dacu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_117db0:
    // 0x117db0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x117db0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_117db4:
    // 0x117db4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x117db4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_117db8:
    // 0x117db8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x117db8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_117dbc:
    // 0x117dbc: 0x1010  mfhi        $v0
    ctx->pc = 0x117dbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_117dc0:
    // 0x117dc0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x117dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_117dc4:
    // 0x117dc4: 0xfc221b00  sd          $v0, 0x1B00($at)
    ctx->pc = 0x117dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6912), GPR_U64(ctx, 2));
label_117dc8:
    // 0x117dc8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x117dc8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_117dcc:
    // 0x117dcc: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x117dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_117dd0:
    // 0x117dd0: 0xfc221b08  sd          $v0, 0x1B08($at)
    ctx->pc = 0x117dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6920), GPR_U64(ctx, 2));
label_117dd4:
    // 0x117dd4: 0x1012  mflo        $v0
    ctx->pc = 0x117dd4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_117dd8:
    // 0x117dd8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x117dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_117ddc:
    // 0x117ddc: 0xfc221b10  sd          $v0, 0x1B10($at)
    ctx->pc = 0x117ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6928), GPR_U64(ctx, 2));
label_117de0:
    // 0x117de0: 0x70001012  mflo1       $v0
    ctx->pc = 0x117de0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_117de4:
    // 0x117de4: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x117de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_117de8:
    // 0x117de8: 0xfc221b18  sd          $v0, 0x1B18($at)
    ctx->pc = 0x117de8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6936), GPR_U64(ctx, 2));
label_117dec:
    // 0x117dec: 0x1028  mfsa        $v0
    ctx->pc = 0x117decu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_117df0:
    // 0x117df0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x117df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_117df4:
    // 0x117df4: 0xfc221b20  sd          $v0, 0x1B20($at)
    ctx->pc = 0x117df4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6944), GPR_U64(ctx, 2));
label_117df8:
    // 0x117df8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x117df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_117dfc:
    // 0x117dfc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x117dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_117e00:
    // 0x117e00: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x117e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_117e04:
    // 0x117e04: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x117e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_117e08:
    // 0x117e08: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
label_117e0c:
    // 0x117e0c: 0x25081900  addiu       $t0, $t0, 0x1900
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6400));
label_117e10:
    // 0x117e10: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x117e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_117e14:
    // 0x117e14: 0xac261b28  sw          $a2, 0x1B28($at)
    ctx->pc = 0x117e14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6952), GPR_U32(ctx, 6));
label_117e18:
    // 0x117e18: 0x3c010011  lui         $at, 0x11
    ctx->pc = 0x117e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17 << 16));
label_117e1c:
    // 0x117e1c: 0x24217e40  addiu       $at, $at, 0x7E40
    ctx->pc = 0x117e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32320));
label_117e20:
    // 0x117e20: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x117e20u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_117e24:
    // 0x117e24: 0x40f  sync.p
    ctx->pc = 0x117e24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_117e28:
    // 0x117e28: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x117e28u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_117e2c:
    // 0x117e2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x117e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_117e30:
    // 0x117e30: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x117e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_117e34:
    // 0x117e34: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x117e34u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_117e38:
    // 0x117e38: 0x40f  sync.p
    ctx->pc = 0x117e38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_117e3c:
    // 0x117e3c: 0x42000018  eret
    ctx->pc = 0x117e3cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_117e40:
    // 0x117e40: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x117e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
label_117e44:
    // 0x117e44: 0x8c212e98  lw          $at, 0x2E98($at)
    ctx->pc = 0x117e44u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11928)));
label_117e48:
    // 0x117e48: 0x3c1d0069  lui         $sp, 0x69
    ctx->pc = 0x117e48u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)105 << 16));
label_117e4c:
    // 0x117e4c: 0x20f809  jalr        $at
label_117e50:
    if (ctx->pc == 0x117E50u) {
        ctx->pc = 0x117E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E4Cu;
        // 0x117e50: 0x27bd1900  addiu       $sp, $sp, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E54u;
        goto label_117e54;
    }
    ctx->pc = 0x117E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x117E54u);
        ctx->pc = 0x117E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E4Cu;
        // 0x117e50: 0x27bd1900  addiu       $sp, $sp, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E4Cu, 0x117E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117E54u;
label_117e54:
    // 0x117e54: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_117e58:
    // 0x117e58: 0xc  syscall     0
    ctx->pc = 0x117e58u;
    ctx->pc = 0x117E5Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
    ctx->pc = 0x117e5cu;
}
